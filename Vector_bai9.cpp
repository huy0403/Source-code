#include<bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    vector<int> vt(n);
    for(int i = 0; i< n; i++) cin >> vt[i];
    vector<pair<int,int>> count;
    for(int i = 0; i< n; i++){
        bool ok = false;
        for(int j  = 0; j< count.size(); j++){
            if(count[j].first == vt[i]){
                count[j].second++;
                ok = true;
                break;
            }
        }
        if(!ok) count.push_back({vt[i],1});
    }
    for(int i = 0; i< count.size(); i++){
        cout << count[i].first << " " << count[i].second << endl;
    }
    return 0;
}