#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin >> n>>m;
    vector<int> A(n);
    vector<int> B(m);
    for(int i = 0; i< n; i++) cin >> A[i];
    for(int i = 0; i< m; i++) cin >> B[i];
    map<int,int> mp;
    for(int i = 0; i < n; i++){
        mp[A[i]] = 1;
    }
    for(int i = 0; i < m; i++){
        if(mp[B[i]] == 1){
            mp[B[i]] = 2;
        }
        if(mp[B[i]] == 0){
            mp[B[i]] = 3;
        }
    }
    for(auto it : mp){
        if(it.second == 2)
            cout << it.first << " ";
    }
    cout << endl;
    for(auto it : mp){
        cout << it.first << " ";
    }
    return 0;
}