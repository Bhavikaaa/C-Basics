#include<iostream>
using namespace std;

int main(){

	int a[5];
	int key;
	for(int i=1;i<6;i++){
		cin>>a[i];
	}
	cout<<"Enter elements "<<endl;
	cin>>key;
	int ans=-1;
	for(int i=1;i<6;i++){
		if(a[i]==key){
			ans = i;
			break;
		}
	}
	if(ans==-1){
		cout<<"Element Not found !";
	}
	else{
		cout<<"You Entered :"<<ans<<endl;
	}

	return 0;
}

