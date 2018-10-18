#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
#define ep 1e-6
#define nep -1e-6
#define MOD 1000000007
using namespace std;
ll knapSack(ll W, ll wt[],ll val[],ll n)
{
   ll i, w;
   ll K[n+1][W+1];
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }
 
   return K[n][W];
}
int main()
{
	ll n;
	cout << "Enter the no of items" << endl;;
	cin >> n;
	ll wtco;
	cout << "Enter the wt constraint" << endl;
	cin >> wtco;
	ll wt[n];
	ll val[n];
	for(ll i=0;i<n;i++)
	{
		cin >> wt[i];
	}
	for(ll i=0;i<n;i++)
	{
		cin >> val[i];
	}
	cout << knapSack(wtco, wt, val, n) << endl;
}
	
	
