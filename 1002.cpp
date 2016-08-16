#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;


int main(){
	int n;
	cin>>n;
	string str;
	vector<string> pool;
	for (int i=0;i<n;i++){
		cin>>str;
		pool.push_back(str);
		for(int j=0;j<pool[i].length();j++){
			switch(pool[i][j]){
				case 'A':
				case 'B':
				case 'C':
					pool[i][j]='2';
					break;
				case 'D':
				case 'E':
				case 'F':
					pool[i][j]='3';
					break;
				case 'G':
				case 'H':
				case 'I':
					pool[i][j]='4';
					break;
				case 'J':
				case 'K':
				case 'L':
					pool[i][j]='5';
					break;
				case 'M':
				case 'N':
				case 'O':
					pool[i][j]='6';
					break;
				case 'P':
				case 'R':
				case 'S':
					pool[i][j]='7';
					break;
				case 'T':
				case 'U':
				case 'V':
					pool[i][j]='8';
					break;
				case 'W':
				case 'X':
				case 'Y':
					pool[i][j]='9';
					break;
				case '-':
					pool[i].erase(j,1);
					j--;
					break;
				default:
					break;
			}
		}
	}
	
	int i=0;
	sort(pool.begin(),pool.end());

	while (i<n-1){
		int j=i+1;
		while (j<n){
			if (!pool[i].compare(pool[j])){
				i=j;
				break;
			}
			j++;
		}
		if (j-i>1){
			cout<<pool[i]<<" "<<j-i<<endl;
		}
	}

	return 0;
}
