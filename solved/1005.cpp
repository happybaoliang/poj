#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.1415926

int main(){
	int n;
	cin>>n;
	double x,y;
	for (int i=1;i<=n;i++){
		cin>>x>>y;
		double r=sqrt(x*x+y*y);
		double area=PI*r*r;
		cout<<"Property "<<i<<": This property will begin eroding in year "<<ceil(area/100)<<"."<<endl;
	}
	cout<<"END OF OUTPUT."<<endl;
	return 0;
}
