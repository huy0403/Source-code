#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m; cin >> n >> m;
    vector<ll int> A(n);
    vector<ll int> B(m);
    for(ll int i = 0; i < n; i++) cin >> A[i];
    for(ll int i = 0; i < m; i++) cin >> B[i];
    map<ll int,int> mp;
    for(int i = 0 ; i< n; i++){
        mp[A[i]] = 1;
    }
    for(int i = 0; i< m; i++){
        if(mp[B[i]] == 1){
            mp[B[i]] = 2;
        }
        if(mp[B[i]] == 0){
            mp[B[i]] = 3;
        }
    }

    for(auto it = mp.begin(); it != mp.end(); it++){
        if((*it).second == 1 || (*it).second == 3){
            cout << (*it).first << " ";
        }
    }
    return 0;
}