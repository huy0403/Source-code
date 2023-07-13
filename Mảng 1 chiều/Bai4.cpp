#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> vt(n);
    for(int i =0; i< n; i++) cin >> vt[i];
    int to25 = 0;
    int to50 = 0;
    for(int i = 0; i< n; i++){
        if(vt[i] == 25){
            to25++;
        }
        else if(vt[i] == 50){
            if(to25 >= 1){
                to25--;
                to50++;
            }else{
                cout << "NO";
                return 0 ;
            }
        }
        else{
            if(to25 >=1 && to50 >= 1){
                to25--;
                to50--;
            }
            else if(to25 >= 3){
                to25 -= 3;
            }else{
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}