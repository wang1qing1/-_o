#include<stdio.h>
//     1  2  3
//     4  5  6
//     7  8  9
int seart(int str[3][3], int k, int* px, int* py)
{
	int x = 0;
	int y = *py - 1;
	while (x<=*px-1 && y>=0)
	{
		if (str[x][y] < k)
		{
			x++;
		}
		else if (str[x][y] > k)
		{
			y--;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}//找不到
	return 0;

}
int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int x = 3;
	int y = 3;
	int ret = seart(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("找到啦\n");
		printf("下标是%d %d", x, y);
	}
	else
	{
		printf("没找到");
	}
	return 0;
}