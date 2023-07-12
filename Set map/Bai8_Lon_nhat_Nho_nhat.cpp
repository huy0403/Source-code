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
            for(int i = 0; i < vt.size(); i++){
                if(vt[i] == data){
                    vt.erase(vt.begin()+i);
                    i--;
                }
            }
        }
        else if(x == 3){
            if(!vt.empty())
                cout << *min_element(vt.begin(),vt.end()) << endl;
        }
        else{
            if(!vt.empty())
                cout << *max_element(vt.begin(), vt.end()) << endl;
        }
    }
    return 0;
}