#include<bits/stdc++.h>
using namespace std;



int main()
{
	vector<int>first;
  vector<string>second;
  multimap<int,string>result;
	string s1,s2;
	
	int n;
    int test;
    cin>>test;
    
    getchar();
    
    while(test--)
    {
    	getchar();
    	getline(cin,s1);
    	
    	stringstream ss(s1);
    	while(ss>>n)
    	{
    		first.push_back(n);
		}
		getline(cin,s2);
		stringstream ss1(s2);
		while(ss1>>s2)
		{
			second.push_back(s2);
		}
		int len = min(first.size(),second.size());
		for(int i=0; i<len; i++)
		{
			result.insert(pair<int,string>(first[i],second[i]));
		}
		
		for(auto it = result.begin(); it!=result.end(); it++)
		{
			cout<<it->second<<"\n";
		}
		first.clear();
		second.clear();
		result.clear();
		if(test)
		{
			cout<<"\n";
		}
	}
    
    
	return 0;
}


