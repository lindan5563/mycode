#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
#define height	16		//x	行
#define width	16		//y	列
 
//************************  变  量  *******************************
int bomb = width * height /9;			//雷数		1/9的格数 
int b = bomb;			//剩余雷数
string str = " 12345678*";	//显示
bool start = false;		//是否开始
int temp = 0;			//结束标志
 
int map[height][width] = { 0 };			//数字地图，9雷
int map2[height][width] = { 0 };		//状态地图，0未翻开，1翻开，2标记
int m[8][2] = { -1,-1,0,-1,1,-1,-1,0,1,0,-1,1,0,1,1,1 }; //8向遍历
int pointer = width / 2 + height * width / 2;	//指针pointer = x + width * y
                                        //x = pointer / width; y = pointer % width;
 
//********************  主  要  函  数  ******************************
bool over(int x, int y);	// 判断越界 
void display();				// 显示 
void operate(int input);	// 操作 
void sign();				// 标记 
void click(int x, int y);	// 扫雷 
void setMine();				// 生成雷 
void count(int x, int y);	// 计算地图 
bool isEnd();				// 是否结束 
void win();					// 胜利 
void lost();				// 失败 
//判断越界
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
//显示
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
				cout << "■";
			}
		}
		cout << endl;
	}
}
//操作
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
//标记
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
//扫雷 
void click(int x, int y)
{
	//如果点击的是未翻开的
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
	//如果点击的是翻开的且不是0--减少运算
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
		//周围标记数=格子数字
		if (t == map[x][y])
		{
			for (int i = 0; i < 8; i++)
			{
				if (!over(x + m[i][0], y + m[i][1]))
				{
					//将未翻开的翻开
					if (map2[x + m[i][0]][y + m[i][1]] == 0)
					{
						//是0继续翻周围
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
//生成雷
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
//计算数字
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
//判断是否结束 
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
 
//胜利 
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
 
//失败 
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
//主函数 
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

