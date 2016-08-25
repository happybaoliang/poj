#include <iostream>
#include <string>
#include <cstdlib>
#include <map>

using namespace std;

string Tzolkin[20]={"imix","ik","akbal","kan","chicchan","cimi","manik","lamat","muluk","ok","chuen","eb","ben","ix","mem","cib","caban","eznab","canac","ahau"};

string Haab[19]={"pop","no","zip","zotz","tzec","xul","yoxkin","mol","chen","yax","zac","ceh","mac","kankin","muan","pax","koyab","cumhu","uayet"};

int main(){
	map<string,int> datemap;
	for (int i=0;i<19;i++){
		datemap[Haab[i]]=i;
	}
	
	int n;
	cin>>n;

	cout<<n<<endl;
	
	for (int i=0;i<n;i++){
		int dates=1;
		string year,month,date;
		cin>>date>>month>>year;
		dates+=atoi(date.c_str());
		cout<<dates<<endl;
		dates+=datemap[month]*20;
		cout<<dates<<endl;
		dates+=atoi(year.c_str())*365;

		cout<<dates<<endl;

		int y=dates/(13*20);
		dates-=(y*20*13);
		cout<<dates<<endl;
		int m=dates/20;
		dates-=(m*20);
		cout<<dates<<endl;
		cout<<m<<" "<<Tzolkin[dates]<<" "<<y<<endl;
	}
	return 0;
}
