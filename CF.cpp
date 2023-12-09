// بسم الله الرحمن الرحيم
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nline cout << endl
#define pi 3.14159265358979323846
#define MOD 1000000007

void solve()
{
	string s;
    cin >> s;
    vector<pair<char, int>>v,v1,v2;

    ll n= s.size();
    for(int i=0; i<n; i++)
    {
    	if(s[i]>='Z')
    	{
    		if(s[i]=='B')
    		{
    			if(v1.size())
    			{
    				v1.pop_back();
    			}
    			else
    			{
    				v1.pb({s[i],i});
    			}
    		}
    	}
    	else
    	{
    		if(s[i]=='b')
    		{
    			if(v2.size())
				{
					v2.pop_back();
				}
				else
				{
					v2.pb({s[i],i});
				}
    		}
			
    	}
    }
    for(auto i : v1)
    {
    	v.pb(i);
    }
    for(auto i : v2)
    {
    	v.pb(i);
    }
    sort(v.begin(),v.end(), [](const auto& a, const auto& b)
    {
    	return a.second<b.second;
    });
    for(auto i : v)
    {
    	cout<<i.first;
    }
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}

