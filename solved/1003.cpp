#include <iostream>
using namespace std;

int main(){
	double c;
	cin>>c;
	while(c>0){
		int i=0;
		double sum=0;
		while(sum<c){
			i++;
			sum+=1.0/(i+1);
		}
		cout<<i<<" card(s)"<<endl;
		cin>>c;
	}
	return 0;
}
