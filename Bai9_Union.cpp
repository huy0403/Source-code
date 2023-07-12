#include<bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m; cin >> n >> m;
    vector<int> vt(n+m);
    for(int i = 0; i  < n+m; i++) cin >> vt[i];
    set<int> se(vt.begin(), vt.end());
    for(auto it = se.rbegin(); it != se.rend(); ++it){
        cout << *it << " ";
    }
    return 0;
}