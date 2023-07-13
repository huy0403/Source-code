#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main(){
    int n,m; cin >> n >> m;
    vector<int> vt(n+m);
    for(int i =0; i< n+m; i++) cin >> vt[i];
    multiset<int> se(vt.begin(),vt.end());
    for(auto it : se){
        cout << it << " ";
    }
    return 0;
}