#include<iostream>
using namespace std;
int main(){
	int marks[6];
		for(int i=0;i<6;i++)
		{cin>>marks[i];
		}
	int smallest=marks[0];
	for(int i=0;i<6;i++)
	{
		if(smallest>marks[i])
	{smallest=marks[i];
}

	}
	cout<<"smallest number is"<<smallest<<endl;
}
