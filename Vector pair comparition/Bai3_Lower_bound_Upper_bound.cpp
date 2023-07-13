#include<bits/stdc++.h>
using namespace std;

int firstPos(vector<int> vt, int n){
    int res = -1;
    int left = 0; int right = vt.size()-1;
    while (left <= right){
        int mid = (left + right)/2;
        if(vt[mid] == n){
            res = mid;
            right = mid -1;
        }
        else if(vt[mid] < n){
            left = mid+1;
        }
        else{
            right = mid -1;
        }
    }
    return res;
}

int lastPos(vector<int> vt, int n){
    int res = -1;
    int left = 0; int right = vt.size()-1;
    while (left <= right){
        int mid = (left + right)/2;
        if(vt[mid] == n){
            res = mid;
            left = mid + 1;
        }
        else if(vt[mid] < n){
            left = mid+1;
        }
        else{
            right = mid -1;
        }
    }
    return res;
}

int countEqual(vector<int>vt, int n){
    int count = 0; 
    for(int i : vt){
        if(i == n) count++;
    }
    return count;
}

int main(){
    int n; cin >> n;int x; cin >> x;
    vector<int> vt(n);
    for(int i = 0; i< n; i++){
        cin >> vt[i];
    }
    if(lower_bound(vt.begin(), vt.end(),x) != vt.end()){
        cout << lower_bound(vt.begin(), vt.end(),x) - vt.begin();
    }else{
        cout << -1;
    }
    cout << endl;
    if(upper_bound(vt.begin(), vt.end(),x) != vt.end()){
        cout << upper_bound(vt.begin(), vt.end(),x) - vt.begin();
    }else{
        cout << -1;
    }
    cout << endl;
    cout << firstPos(vt,x) << endl;
    cout << lastPos(vt,x) << endl;
    cout << countEqual(vt,x) << endl;
    return 0;
}