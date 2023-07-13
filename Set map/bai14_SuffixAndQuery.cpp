#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    vector<int> vt(n);
    for(int i = 0; i < n; i++) cin >> vt[i];
    vector<int> hz;
    set<int> se;
    for(int i = n-1; i >= 0; i--){
        se.insert(vt[i]);
        hz.push_back(se.size());
    }
    int q; cin >> q;
    for(int i = 0; i < q; i++){
        int data;cin >> data;
        cout << hz[n-data-1] << endl;
    }
    return 0;
}