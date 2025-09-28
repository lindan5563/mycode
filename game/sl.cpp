#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
#define height	16		//x	��
#define width	16		//y	��
 
//************************  ��  ��  *******************************
int bomb = width * height /9;			//����		1/9�ĸ��� 
int b = bomb;			//ʣ������
string str = " 12345678*";	//��ʾ
bool start = false;		//�Ƿ�ʼ
int temp = 0;			//������־
 
int map[height][width] = { 0 };			//���ֵ�ͼ��9��
int map2[height][width] = { 0 };		//״̬��ͼ��0δ������1������2���
int m[8][2] = { -1,-1,0,-1,1,-1,-1,0,1,0,-1,1,0,1,1,1 }; //8�����
int pointer = width / 2 + height * width / 2;	//ָ��pointer = x + width * y
                                        //x = pointer / width; y = pointer % width;
 
//********************  ��  Ҫ  ��  ��  ******************************
bool over(int x, int y);	// �ж�Խ�� 
void display();				// ��ʾ 
void operate(int input);	// ���� 
void sign();				// ��� 
void click(int x, int y);	// ɨ�� 
void setMine();				// ������ 
void count(int x, int y);	// �����ͼ 
bool isEnd();				// �Ƿ���� 
void win();					// ʤ�� 
void lost();				// ʧ�� 
//�ж�Խ��
bool over(int x, int y)
{
	if (x < 0 || y < 0 || x > height - 1 || y > width - 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//��ʾ
void display()
{
	system("cls");
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			//map[i][j] = 9;
			if (pointer / width == i && pointer % width == j)
			{
				cout << '>';
			}
			else
			{
				cout << " ";
			}
			if (map2[i][j] == 1)
			{
				cout << str[map[i][j]];
			}
			else if (map2[i][j] == 2)
			{
				cout << "!";
			}
			else
			{
				cout << "��";
			}
		}
		cout << endl;
	}
}
//����
void operate(int input)
{
	if (input == 'a' && pointer % width > 0)
	{
		pointer -= 1;
	}
	if (input == 'd' && pointer % width < width - 1)
	{
		pointer += 1;
	}
	if (input == 'w' && pointer / width > 0)
	{
		pointer -= width;
	}
	if (input == 's' && pointer / width < height - 1)
	{
		pointer += width;
	}
	if (input == 'e')
	{
		if (!start) setMine();
		click(pointer / width, pointer % width);
	}
	if (input == 'q')
	{
		if (!start) setMine();
		sign();
	}
}
//���
void sign()
{
	if (map2[pointer / width][pointer % width] == 0)
	{
		map2[pointer / width][pointer % width] = 2;
		b--;
		return;
	}
	if (map2[pointer / width][pointer % width] == 2)
	{
		map2[pointer / width][pointer % width] = 0;
		b++;
		return;
	}
}
//ɨ�� 
void click(int x, int y)
{
	//����������δ������
	if (map2[x][y] == 0)
	{
		map2[x][y] = 1;
		temp += 1;
		if (map[x][y] == 9)
		{
			temp = -1;
			return;
		}
		if (map[x][y] == 0)
		{
			for (int i = 0; i < 8; i++)
			{
				if (!over(x + m[i][0], y + m[i][1]))
				{
					click(x + m[i][0], y + m[i][1]);
				}
			}
		}
	}
	//���������Ƿ������Ҳ���0--��������
	else if (map2[x][y] == 1 && map[x][y] != 0)
	{
		int t = 0;
		for (int i = 0; i < 8; i++)
		{
			if (!over(x + m[i][0], y + m[i][1]))
			{
				if (map2[x + m[i][0]][y + m[i][1]] == 2)
				{
					t += 1;
				}
			}
		}
		//��Χ�����=��������
		if (t == map[x][y])
		{
			for (int i = 0; i < 8; i++)
			{
				if (!over(x + m[i][0], y + m[i][1]))
				{
					//��δ�����ķ���
					if (map2[x + m[i][0]][y + m[i][1]] == 0)
					{
						//��0��������Χ
						if (map[x + m[i][0]][y + m[i][1]] == 0)
							click(x + m[i][0], y + m[i][1]);
						else
						{
							map2[x + m[i][0]][y + m[i][1]] = 1;
							temp += 1;
							if (map[x + m[i][0]][y + m[i][1]] == 9)
							{
								temp = -1;
								return;
							}
						}
					}
				}
			}
		}
	}
}
//������
void setMine()
{
	srand((unsigned)time(NULL));
	int m = 0;
	while (m != bomb)
	{
		int r = rand() % (width * height);
		int r1 = r / width;
		int r2 = r % width;
		if (r1 == pointer / width && r2 == pointer % width) continue;
		if (map[r1][r2] != 9)
		{
			m += 1;
			map[r1][r2] = 9;
			count(r1, r2);
		}
		//cout << r << "," << r1 << "," << r2 << endl;
	}
	start = true;
}
//��������
void count(int x, int y)
{
	for (int i = 0; i < 8; i++)
	{
		if (!over(x + m[i][0], y + m[i][1]))
		{
			if (map[x + m[i][0]][y + m[i][1]] != 9)
			{
				map[x + m[i][0]][y + m[i][1]] += 1;
			}
		}
	}
}
//�ж��Ƿ���� 
bool isEnd()
{
	if (temp == -1)
	{
		lost();
		return true;
	}
	else if (width * height - temp == bomb)
	{
		win();
		return true;
	}
	else
	{
		return false;
	}
}
 
//ʤ�� 
void win()
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			map2[i][j] = 1;
		}
	}
	display();
	cout << "you win!" << endl;
}
 
//ʧ�� 
void lost()
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (map[i][j] == 9)
				map2[i][j] = 1;
		}
	}
	display();
	cout << "you lost!" << endl;
}
//������ 
int main()
{
	display();
	cout << "mine: " << bomb << endl;
	while (true)
	{
		int input = _getch();
		operate(input);
		if (isEnd())
		{
			break;
		}
		display();
		cout << "mine: " << b << endl;
	}
	system("pause"); 
	return 0;
}

