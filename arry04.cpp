#include<iostream>
using namespace std;
int main(){
	int num;
	int marks[6]={1,2,3,4,5,6};
	cout<<"input the number"<<endl;
	cin>>num;
	for(int i=0;i<6;i++)
	{
		if(num==marks[i])
		cout<<"founded"<<marks[i]<<endl;
	}
}


