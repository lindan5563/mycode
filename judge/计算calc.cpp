#include<bits/stdc++.h>
using namespace std;
int calculate(int a,int b,char op)
{
	if(op == '+')
	{
		return a+b;
	}
	if(op=='-')
	{
		return a-b;
	}
	if(op=='*')
	{
		return a*b;
	}
	if(op=='/')
	{
		return a/b;
	}
	if(op=='^')
	{
		return pow(a,b);
	}
	return 0;
}
int priority(char op)
{
	if(op=='^')
	{
		return 3;
	}
	if(op=='*'||op=='/')
	{
		return 2;
	}
	if(op=='+'||op=='-')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int evaluate(string expr)
{
	stack<int>nums;
	stack<char>ops;
	int i=0;
	for(int i=0;i<expr.size();i++)
	{
		char c=expr[i];
		if(isdigit(c))
		{
			int num=0;
			while(i<expr.size()&&isdigit(expr[i]))
			{
				num=num*10+(expr[i]-'0');
				i++;
			}
			nums.push(num);
			i--;
		}
		else if(c=='(')
		{
			ops.push(c);
		}
		else if(c==')')
		{
			while(!ops.empty()&&ops.top()!='(')
			{
				int b=nums.top();
				nums.pop();
				int a=nums.top();
				nums.pop();
				char op=ops.top();
				ops.pop();
				nums.push(calculate(a,b,op));
			}
			ops.pop();
		}
		else if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^')
		{
			while(!ops.empty()&&priority(ops.top())>=priority(c))
			{
				int b=nums.top();
				nums.pop();
				int a=nums.top();
				nums.pop();
				char op=ops.top();
				ops.pop();
				nums.push(calculate(a,b,op));
			}
			ops.push(c);
		}
	}
	while(!ops.empty())
	{
		int b=nums.top();
		nums.pop();
		int a=nums.top();
		nums.pop();
		char op=ops.top();
		ops.pop();
        nums.push(calculate(a,b,op));
    }
    return nums.top();
}
int main()
{
    string expr;
	cin>>expr;
    cout<<evaluate(expr);
    return 0;
}
