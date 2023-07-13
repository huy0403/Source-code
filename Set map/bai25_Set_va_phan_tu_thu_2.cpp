#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    vector<int> vt(n);
    for(int i = 0; i < n; i++) cin >> vt[i];
    set<int> se;
    for(int i =0; i< n; i++){
        se.insert(vt[i]);
    }
    cout << se.size() << endl;
    cout << *(se.rbegin()) << " " << *(se.begin()) << endl;
    cout << *(++se.rbegin()) << " " << *(++se.begin());
    return 0;
}