/*
对于任意正整数n，我们定义d(n)的值为为n加上组成n的各个数字的和。例如，d(23)=23+2+3=28, d(1481)=1481+1+4+8+1=1495。
     因此，给定了任意一个n作为起点，你可以构造如下一个递增序列：n,d(n),d(d(n)),d(d(d(n)))....例如，从33开始的递增序列为：
     33, 39, 51, 57, 69, 84, 96, 111, 114, 120, 123, 129, 141, ...
     我们把n叫做d(n)的生成元，在上面的数列中，33是39的生成元，39是51的生成元，等等。有一些数字甚至可以有两个生成元，比如101，可以由91和100生成。但也有一些数字没有任何生成元，如42。我们把这样的数字称为寂寞的数字。
输入：一行，一个正整数n。（n<=10000）
输出：按照升序输出小于n的所有寂寞的数字，每行一个。
*/

#include<iostream>
using namespace std;
const int MAX = 10010;

int main()
{
	int i, n;
	int num[MAX] = {0};
	cin >> n;
	for (i = 1;i <=n;i++)
	{
		int m=i, sum = i;
		while (m)
		{
			sum = sum + m % 10;
			m = m / 10;
		}
		num[sum] = 1;//
	}
	for (int j = 1;j <n;j++)
	{
		if (num[j] <= 0)
			cout << j << endl;
	}
	return 0;
}
