#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define lowbit(x) (x&(-x))
#define ull unsigned long long 
#define pii pair<int,int>
using namespace std;
const string yes="Yes\n",no="No\n";
const int N = 1000005,inf = 2e18,mod=1000000007;
int qpow(int x,int y=mod-2,int mo=mod,int res=1){
    for(;y;(x*=x)%=mo,y>>=1)if(y&1)(res*=x)%=mo;
    return res;
}
int jie[N],invjie[N];
int C(int n,int m){return n>=m&&m>=0?jie[n]*invjie[m]%mod*invjie[n-m]%mod:0;}
void main_init(){
    int n=N-1;jie[0]=1;for(int i=1;i<=n;i++)jie[i]=jie[i-1]*i%mod;
    invjie[n]=qpow(jie[n]);for(int i=n-1;~i;i--)invjie[i]=invjie[i+1]*(i+1)%mod;
}
int n,k,l;
pii a[200005];
int pre[200005],suf[200005];
//前缀选L个后缀选k-l个
priority_queue<int,vector<int>,greater<int>>q1,q2;
bool cmp(pii x,pii y){
    return x.second>y.second;
}
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].first;
    }
    
    for(int i=1;i<=n;i++){
        cin>>a[i].second;
    }
    sort(a+1,a+1+n,cmp);
    cin>>k>>l;
    for(int i=1;i<=n;i++){
        q1.push(a[i].first+a[i].second);
        pre[i]=pre[i-1]+a[i].first+a[i].second;
        if(q1.size()>l){
            pre[i]-=q1.top();
            q1.pop();
        }
    }
    for(int i=n;i;i--){
        q2.push(a[i].first);
        suf[i]=suf[i+1]+a[i].first;
        if(q2.size()>k-l){
            suf[i]-=q2.top();
            q2.pop();
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        ans=max(ans,pre[i]+suf[i+1]);
    }
    cout<<ans<<endl;
}
signed main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cout<<fixed<<setprecision(12);main_init();
    int t=1;
    //cin>>t;
    while (t--)solve();
}