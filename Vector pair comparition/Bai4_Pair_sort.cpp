#include<bits/stdc++.h>
using namespace std;

double distance(pair<int,int> a){
    return (double)sqrt(a.first*a.first + a.second*a.second);
}

bool cmp(pair<int,int> a, pair<int,int> b){
    if(distance(a) != distance(b)){
        return distance(a) < distance(b);
    }else{
        if(a.first != b.first){
            return a.first < b.first;
        }else{
            return a.second < b.second;
        }
    }
}

int main(){
    int n; cin >> n;
    vector<pair<int,int>> vt(n);
    for(int i =0; i< n; i++){
        cin >> vt[i].first >> vt[i].second;
    }
    sort(vt.begin(), vt.end(), cmp);
    for(auto i : vt){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}