#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    vector<char> vt(n);
    for(int i = 0; i < n; i++) cin >> vt[i];
    set<char> se;
    for(int i = 0; i< n; i++){
        se.insert(vt[i]);
    }
    cout << se.size() << endl;
    for(auto it = se.begin(); it != se.end(); it++){
        cout << *it << " "; 
    }
    cout << endl;
    for(auto it = se.rbegin(); it != se.rend(); it++){
        cout << *it << " ";
    }
    return 0;
}