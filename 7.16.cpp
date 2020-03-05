#include<iostream>
using namespace std;
int main()
{
	int i,j,max,min;
	int arr[2][4]={{12,243,673,7},{34,789,1,9}};
	max=min=arr[0][0];
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			if(arr[i][j]>max)
			max=arr[i][j];
			if(arr[i][j]<min)
			min=arr[i][j];
		}
	}
	cout<<"max ="<<max<<endl<<"min ="<<min<<endl;
	return 0;
}
