#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n; int x; cin >> x;
    vector<int> vt(n);
    for(int i = 0; i< n; i++) cin >> vt[i];
    if(upper_bound(vt.begin(), vt.end(),x) != vt.begin()){
        cout << *(upper_bound(vt.begin(), vt.end(),x)-1);
    }else{
        cout << "NOT FOUND";
    }
    return 0;
}