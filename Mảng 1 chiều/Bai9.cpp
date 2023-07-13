#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> vt(n);
    for(int i =0; i< n; i++) cin >> vt[i];
    map<int,int> mp;
    for(int i = 0; i< n; i++){
        mp[vt[i]]++;
    }
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    for(int i = 0; i< n; i++){
        if(mp.find(vt[i]) != mp.end()){
            cout << vt[i] << " " << mp[vt[i]] << endl;
            mp.erase(vt[i]);
        }
    }
    return 0;
}