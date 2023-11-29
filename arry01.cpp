#include<iostream>
using namespace std;
int main(){
	int marks[]={20,30,40,50};
	int size=sizeof(marks)/sizeof(int);
	for(int i=--size;i>=0;--i)
	{cout<<marks[i]<<endl;
	}
}
