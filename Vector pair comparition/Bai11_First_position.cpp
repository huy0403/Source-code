#include<bits/stdc++.h>
using namespace std;

int firstPos(vector<int> vt, int x){
    int res = -1;
    int left = 0; int right = vt.size()-1;
    while(left <= right){
        int mid = (left + right)/2;
        if(vt[mid] == x){
            res = mid;
            right = mid -1;
        }else if(vt[mid] < x){
            left = mid +1;
        }else{
            right = right -1;
        }
    }
    return res;
}

int main(){
    int n; cin >> n; int x; cin >> x;
    vector<int> vt(n);
    for(int i = 0; i< n; i++) cin >> vt[i];
    cout << firstPos(vt,x);
    return 0;
}