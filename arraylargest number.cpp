  #include<iostream>
using namespace std;
int main(){
	int r;
	cout<<"ente the number of rows"<<endl;
	cin>>r;
		int c;
	cout<<"ente the number of columns"<<endl;
	cin>>c;
	int arr[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<"["<<arr[i][j]<<"]"<<" ";
		}
		cout<<endl;
	}
	 int sum=0;
		for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
		sum+=arr[i][j];
		}
	}
	cout<<sum;
	
	
}
