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
#define maxn 2*(int)1e5
#define inf 0x3f3f3f3f
using namespace std;

int n,m,parent[maxn],ans;

vector<iii> g;

int findx(int x){
    if(parent[x]==x) return x;
    return parent[x]=findx(parent[x]);
}

void join(int x, int y){
    parent[y]=x;
}

int main(){_
	cin>>n>>m;
    for(int i=1; i<=n; i++){
        parent[i]=i;
    }
    while(m--){
        int x,y,w;
        cin>>x>>y>>w;
        g.pb({w,x,y});
    }
    sort(all(g));
    for(auto [w,u,v]: g){
        if(findx(u)==findx(v)) continue;
        join(findx(u),findx(v));
        ans+=w;
    }
    cout<<ans<<'\n';
	return 0;
}