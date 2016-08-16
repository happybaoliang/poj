#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double balance;
	double sum=0;
	for(int i=0;i<12;i++){
		cin>>balance;
		sum+=balance;
	}
	cout<<"$"<<setiosflags(ios::fixed);
	cout<<setprecision(2)<<(sum/12)<<endl;
	return 0;
}
