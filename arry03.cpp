#include<iostream>
using namespace std;
int main(){
	int marks[4];
	int sum=0;
	for(int i=0;i<4;i++)
{
		cin>>marks[i];
		sum=0;
	}
	cout<<endl;
//	int size=sizeof(marks)/sizeof(int);
	for(int i=0;i<4;i++)
{
	sum+=marks[i];
	}
	cout<<sum;
}
