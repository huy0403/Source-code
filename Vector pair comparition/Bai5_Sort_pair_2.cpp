#include<bits/stdc++.h>
using namespace std;


bool cmp(pair<int,pair<int,int>> a, pair<int,pair<int,int>> b){
    if(a.first != b.first){
        return a.first < b.first;
    }else{
        if(a.second.first != b.second.first){
            return a.second.first < b.second.first;
        }else{
            return a.second.second < b.second.second;
        }
    }
}

int main(){
    int n; cin >> n;
    vector<pair<int,pair<int,int>>> vt(n);
    for(int i = 0;i < n; i++){
        cin >> vt[i].first;
        cin >> vt[i].second.first >> vt[i].second.second;
    }
    sort(vt.begin(), vt.end(), cmp);
    for(auto i : vt){
        cout << i.first << " " << i.second.first << " " << i.second.second << endl;
    }
    return 0;
}