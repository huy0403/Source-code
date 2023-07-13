#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;
    vector<int> vt(n);
    for(int i = 0; i < n; i++)
        cin >> vt[i];
    
    int q;
    cin >> q;
    
    for(int i = 0; i < q; i++) {
        int x;
        cin >> x;
        
        if(x == 1) {
            int data;
            cin >> data;
            vt.push_back(data);
        }
        else if(x == 2) {
            int data;
            cin >> data;
            for(int i = 0; i < vt.size(); i++) {
                if(vt[i] == data) {
                    vt.erase(vt.begin()+i);
                    break;
                }
            }
        }
        else if(x == 3) {
            int data;
            cin >> data;
            set<int> se(vt.begin(), vt.end());
            if(se.empty() || *(se.rbegin()) < data) {
                cout << -1 << endl;
            }
            else {
                auto it = se.lower_bound(data);
                if(it != se.end()) {
                    cout << *it << endl;
                }
                else {
                    cout << *(--it) << endl;
                }
            }
        }
        else if(x == 4) {
            int data;
            cin >> data;
            set<int> se(vt.begin(), vt.end());
            if(se.empty() || *(se.begin()) > data) {
                cout << -1 << endl;
            }
            else {
                auto it = se.upper_bound(data);
                if(it != se.begin()) {
                    cout << *(--it) << endl;
                }
                else {
                    cout << -1 << endl;
                }
            }
        }
    }
    return 0;
}
