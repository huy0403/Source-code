#include<bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    vector<int> vt(n);
    for(int i = 0; i< n; i++) cin >> vt[i];
    set<int> se(vt.begin(), vt.end());
    int q ; cin >> q;
    vector<string> result;
    for (int i = 0; i< q; i++){
        int x; cin >> x;
        if(se.find(x) != se.end()){
            result.push_back("YES");
        }else{
            result.push_back("NO");
        }
    }
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }
    return 0;
}