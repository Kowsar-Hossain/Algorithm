// بسم الله الرحمن الرحيم
#include<bits/stdc++.h>
#include<stack>
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
    cin>>s;
    stack<char>stk;
    for (char ch : s) 
    {
        if (ch == 'b') {
            if (!stk.empty() && islower(stk.top()))
            {
                stk.pop();
            }
        } else if (ch == 'B')
         {
            if (!stk.empty() && isupper(stk.top()))
            {
                stk.pop();
            }
        }
        else
        {
            stk.push(ch);
        }
    }
    string ans;
    while (!stk.empty()) 
    {
        ans = stk.top() + ans;
        stk.pop();
    }
    cout<<ans<<endl;
}
int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}

