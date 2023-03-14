#include <bits/stdc++.h>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
#define ll long long int
const int N=1e7;
int prime[N];
void primeSieve(int n){

    //int prime[N]={0};
    int count=0;
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0) count++;
    }
    cout<<count<<endl;


}



void solve() {
    int n;
    cin>>n;
    primeSieve(n);

}

int main() {
    solve();

    return 0;
}

