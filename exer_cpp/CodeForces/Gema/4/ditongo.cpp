#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define sc second
#define str(x) to_string(x)
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define maxn 2*(int)1e5
#define inf 0x3f3f3f3f
using namespace std;

string s,ans;
set<char> vogais{'a','e','i','o','u'};

int main(){_
    cin>>s;
    ans+=s[0];
    for(int i=1; i<sz(s); i++){
        if(!vogais.count(s[i-1]) or !vogais.count(s[i])){
            ans+=s[i];
        }
    }
    cout<<ans<<'\n';
    return 0;
}