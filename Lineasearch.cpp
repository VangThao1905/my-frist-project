#include<iostream>

using namespace std;

int Linesearch(int a[],int n,int x)
{
	for(int i = 0;i < n;i++)
	{
		if(a[i] == x) return i;
	}
	return -1;
}
int main()
{
	int n = 10,x;
	int a[n] = {2,3,7,4,11,19,28,47,123,111};
	while(true)
	{
		for(int i = 0;i < n;i++) cout << a[i] << " ";cout << endl;
		cout << "Nhap phan tu can tim:";
		cin >> x;
		cout << "\nKet qua:" << Linesearch(a,n,x) << "\n";
	}
	return 0;
}
