#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n; int x; cin >> x;
    vector<int> vt(n);
    for(int i = 0; i< n; i++) cin >> vt[i];
    int tem = *(upper_bound(vt.begin(),vt.end(),x)-1);
    if(tem == x){
        cout << upper_bound(vt.begin(),vt.end(),x)-vt.begin()-1;
    }else{
        cout << -1;
    }
    return 0;
}