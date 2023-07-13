#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> vt(n);
    for(int i =0; i< n; i++) cin >> vt[i];
    cout << vt[1]-vt[0] << " " << vt[n-1]-vt[0] << endl;
    for(int i = 1 ; i< n-1; i++){
        int min; int max;
        if(vt[i]-vt[0] > vt[n-1]-vt[i]){
            max = vt[i]-vt[0];
        }else{
            max = vt[n-1]-vt[i];
        }
        if(vt[i]-vt[i-1] > vt[i+1]-vt[i]){
            min = vt[i+1]-vt[i];
        }else{
            min = vt[i]-vt[i-1];
        }
        cout << min << " " << max << endl;
    }
    cout << vt[n-1]-vt[n-2] << " " << vt[n-1]-vt[0] << endl;
    return 0;
}