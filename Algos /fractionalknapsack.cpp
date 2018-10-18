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
int main()
{
	ll n;
	cout << "Enter the no of items";
	cin >> n;
	ll wtco;
	cout << "Enter the wt constraint";
	cin >> wtco;
	vector< pair <long double ,pair < int , int > > > items;
	ll wt[n];
	ll val[n];
	long double wtval[n];
	for(ll i=0;i<n;i++)
	{
		cin >> wt[i];
	}
	for(ll i=0;i<n;i++)
	{
		cin >> val[i];
		wtval[i]=(double(val[i])/wt[i]);
		items.pb(mp(wtval[i],mp(wt[i],val[i])));
	}
	sort(items.begin(),items.end());
	/*for(ll i=0;i<n;i++)
	{
		cout << items[i].second.first << " " ;
	}
	cout << endl;
	for(ll i=0;i<n;i++)
	{
		cout << items[i].second.second << " " ;
	}
	cout << endl;
	for(ll i=0;i<n;i++)
	{
		cout << items[i].first << " ";
	}
	cout << endl;*/
	vector<pair <int,double> >sack;
	double profit=0;
	ll rem=wtco;
	for(ll i=n-1;i>=0;i--)
	{
		
		//cout << rem << endl;
		if(items[i].second.first<=rem)
		{
			sack.pb(mp(i,items[i].second.second));
			profit=profit+items[i].second.second;
			rem=rem-items[i].second.first;
		}else
		{
			//cout <<" hi";
			sack.pb(mp(i,rem*items[i].first));
			profit=profit+rem*items[i].first;
			//cout <<<< endl;
			rem=0;
		}
		//cout << profit << endl;;
		if(rem==0)
		{
			break;
		}
	}
	cout << profit << endl;
	
			
}
	
