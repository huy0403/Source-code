#include<bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    vector<int> vt(n);
    for(int i = 0; i< n; i++) cin >> vt[i];
    set<int> se(vt.begin(),vt.end());
    for(int i = 0; i< n; i++){
        if(se.find(vt[i]) != se.end()){
            cout << vt[i] << " ";
            se.erase(se.find(vt[i]));
        }
    }
    return 0;
}