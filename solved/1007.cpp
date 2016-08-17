#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

struct sortedness{
	string str;
	int counter;
};

int calculate(string str){
	int cnt=0;
	for (int i=0;i<str.length()-1;i++){
		for (int j=i+1;j<str.length();j++){
			if (str[i]>str[j]) cnt++;
		}
	}
	return cnt;
}

bool compare(const sortedness &s1,const sortedness &s2){
	return s1.counter<s2.counter;
}

int main(){
	sortedness s;
	int length,n;
	cin>>length>>n;
	vector<sortedness> pool;
	for (int i=0;i<n;i++){
		cin>>s.str;
		s.counter=calculate(s.str);
		pool.push_back(s);
	}

	sort(pool.begin(),pool.end(),compare);

	for (int i=0;i<n;i++)
		cout<<pool[i].str<<endl;


	return 0;
}
