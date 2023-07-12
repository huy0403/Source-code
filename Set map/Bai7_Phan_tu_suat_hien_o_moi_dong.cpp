#include<bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    vector<vector<int>> vt(n,vector<int> (n));
    for(int i = 0; i< n; i++){
        for(int j = 0;  j< n; j++){
            cin >> vt[i][j];
        }
    }

    map<int,int> mark;
    for(int i = 0; i < n; i++){
        mark[vt[0][i]] = 1;
    }
    for(int i = 1;  i < n; i++){
        for(int j = 0; j < n; j++){
            if(mark.find(vt[i][j]) != mark.end() && mark[vt[i][j]] == i){
                mark[vt[i][j]] = i+1;
            }
        }
    }

    bool ok = false;
    for(auto  it : mark){
        if(it.second == n){
            cout << it.first << " ";
            ok = true;
        }
    }
    if(!ok) cout << "NOT FOUND";
    return 0;
}