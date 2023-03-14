
#include <bits/stdc++.h>

using namespace std;
#define ll long long int


void solve() {
    int x,y,z;
    cin>>x>>y>>z;
    int count=0;
    if(z>=x){
        count++;
        if(z>=(x+y)) count++;
    }
    cout<<count<<endl;
}

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }

    return 0;
}
