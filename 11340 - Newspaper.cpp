#include<bits/stdc++.h>
using namespace std;

// Solver : Nahin the Coder
//Date    : 20 - 01 - 2021

int main()
{
	map<char,int>mp;
	int test;
	cin>>test;
	
	while(test--)
	{
		double result = 0.0;
		int values;
		cin>>values;
		
		for(int i=0; i<values; i++)
		{
			double n;
			char character;
			
			cin>>character;
			cin>>n;
			mp.insert(pair<char,double>(character,n));
		}
		int stringLine;
		cin>>stringLine;
		cin.ignore();
		while(stringLine !=0)
		{
			string line;
			getline(cin,line);
			stringstream ss(line);
			char character;
			while(ss>>character)
			{
				auto it = mp.find(character);
				if(it != mp.end())
				{
					result = result + it->second;
				}
			}
			stringLine--;
		}
		result = result/100;
		cout<<fixed<<setprecision(2)<<result<<"$"<<endl;
		mp.clear();
	}
	
	
    
    
	return 0;
}


