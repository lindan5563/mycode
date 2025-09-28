#include<bits/stdc++.h>
#include<cuda_runtime.h> 
using namespace std;
__global__ void tim(const float* a, const float* b, float* c, int an,int am,int bn,int bm)
{
	int global_id = blockIdx.x * blockDim.x + threadIdx.x;
	int total_operations = an * am * bm;
	if (global_id < total_operations)
	{
		int i = global_id / (am * bm);
		int remainder = global_id % (am * bm);
		int k = remainder / bm;
		int j = remainder % bm;
		
		if (i < an && k < am && j < bm)
		{
			float product = a[i * am + k] * b[k * bm + j];
			atomicAdd(&c[i * bm + j], product);
		}
	}
}
int main()
{
	int an,am,bn,bm;
	const int size=sizeof(float);
	cin>>an>>am>>bn>>bm;
	if(am!=bn)
	{
		cerr<<-1;
		return 1;
	}
	float* a=new float[an*am];
	float* b=new float[bn*bm];
	float* c=new float[an*bm];
	for(int i=0;i<an*bm;i++)
	{
		c[i]=0;
	}
	for(int i=0;i<an*am;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<bn*bm;i++)
	{
		cin>>b[i];
	}
	float *d_a,*d_b,*d_c;
	cudaMalloc(&d_a,an*am*size);
	cudaMalloc(&d_b,bn*bm*size);
	cudaMalloc(&d_c,an*bm*size);
	cudaMemcpy(d_a,a,an*am*size,cudaMemcpyHostToDevice);
	cudaMemcpy(d_b,b,bn*bm*size,cudaMemcpyHostToDevice);
	cudaMemset(d_c,0,an*bm*size);
	int total_operations=an*am*bm;
	int blockSize=256;
	int gridSize=(total_operations+blockSize-1)/blockSize;
	tim<<<gridSize,blockSize>>>(d_a,d_b,d_c,an,am,bn,bm);
	cudaDeviceSynchronize();
	cudaMemcpy(c,d_c,an*bm*size,cudaMemcpyDeviceToHost);
	for(int i=0;i<an;i++)
	{
		for(int j=0;j<bm;j++)
		{
			cout<<c[i*bm+j]<<" ";
		}
		cout<<endl;
	}
	cudaFree(d_a);
	cudaFree(d_b);
	cudaFree(d_c);
	delete[] a;
	delete[] b;
	delete[] c;
	return 0;
}



2 3 3 2
-1 1 5
4 3 -2
1 -1
0 2
-3 6
