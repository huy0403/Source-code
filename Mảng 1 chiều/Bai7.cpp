#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main(){
    int n; cin >> n;
    vector<int> vt(n);
    for(int i =0; i< n; i++) cin >> vt[i];
    vector<int> le;
    for(int i = 0; i < n; i++){
        if(vt[i]%2 != 0) le.push_back(vt[i]);
    }
    vector<int> chan;
    for(int i = 0; i < n; i++){
        if(vt[i]%2 == 0) chan.push_back(vt[i]);
    }
    if(!le.empty()){
        sort(le.begin(), le.end(), cmp);
        for(int i = 0; i < le.size(); i++){
            cout << le[i] << ' ';
        }
    }
    if(!chan.empty()){
        sort(chan.begin(),chan.end());
        for(int i = 0; i < chan.size(); i++){
            cout << chan[i] << " ";
        }
    }
    return 0;
}