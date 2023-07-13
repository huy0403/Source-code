#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> vt(n);
    for(int i =0; i< n; i++) cin >> vt[i];
    for(int i =0 ; i < n; i++){
        bool ok = false;
        for(int j = 0; j < i; j++){
            if(vt[j] >= vt[i]){
                ok = true;
                break;
            }
        }
        if(ok == false){
            cout << vt[i] << " ";
        }
    }
    return 0;
}