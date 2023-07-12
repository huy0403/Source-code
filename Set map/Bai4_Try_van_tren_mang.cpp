#include<bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    vector<int> vt(n);
    for(int i = 0; i< n; i++) cin >> vt[i];
    int q; cin >> q;
    for(int i = 0; i< q; i++){
        int x; cin >> x;
        if(x == 1){
            int data; cin >> data;
            vt.push_back(data);
        }
        else if(x == 2){
            int data; cin >> data;
            for(int j = 0; j < vt.size(); j++){
                if(vt[j] == data){
                    vt.erase(vt.begin()+j);
                    break;
                }
            }
        }
        else{
            int data; cin >> data;
            bool ok = false;
            for(int j = 0; j < vt.size(); j++){
                if(vt[j] == data){
                    cout << "YES" << endl;
                    ok = true;
                    break;
                }    
            }
            if(!ok) cout << "NO" << endl;
        }
    }
    return 0;
}