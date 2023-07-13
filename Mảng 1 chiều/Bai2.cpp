#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> vt(n);
    for(int i =0; i< n; i++) cin >> vt[i];
    if(n == 1){
        cout << "YES";
        return 0;
    }
    for(int i = 1; i < n; i++){
        if(vt[i] <= vt[i-1]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}