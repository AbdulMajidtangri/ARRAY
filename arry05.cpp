#include<iostream>
using namespace std;
int main(){
	int marks[6];
		for(int i=0;i<6;i++)
		{cin>>marks[i];
		}
	int largest=marks[0];
	for(int i=0;i<6;i++)
	{
		if(largest<marks[i])
	{largest=marks[i];
}

	}
	cout<<"larest number is"<<largest<<endl;
}
