#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define pq priority_queue
#define sc second
#define ub upper_bound
#define print(x) for(int wx=0; wx<sz(x); wx++) cout<< x[wx]<< ' ';
#define lb lower_bound
#define ll long long
#define str(x) to_string(x)
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define iii tuple<int,int,int>
#define pii pair<int,int>
#define maxn 2*(int)1e6
#define inf 0x3f3f3f3f
using namespace std;

int n,m,k,p;
string s,s2;


int main(){_
    cin>>n>>m>>k;
    cin>>s;
    cin>>s2;
    cin>>p;
    sort(all(s2));
    for(int i=0; i<sz(s); i++){
        if(s[i]=='#'){
            s[i]=s2[p-1];
        }
    }
    cout<<s;
	return 0;
}