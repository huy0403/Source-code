#include<bits/stdc++.h>
using namespace std;

int countOdd(int n){
    int count = 0;
    while(n){
        if((n%10)%2 == 0) count++;
        n /= 10;
    }
    return count;
}

int countEven(int n){
    int count = 0;
    while(n){
        if((n%10)%2 != 0) count++;
        n /= 10;
    }
    return count;
}

bool cmp1(int a, int b){
    if(countOdd(a) != countOdd(b)){
        return countOdd(a) < countOdd(b);
    }else{
        return a < b;
    }
}

bool cmp2(int a, int b){
    return countEven(a) < countEven(b);
}

int main(){
    int n; cin >> n;
    vector<int> vt(n);
    for(int i = 0; i< n; i++){
        cin >> vt[i];
    } 
    vector<int> tem(vt.begin(), vt.end());
    stable_sort(vt.begin(), vt.end(), cmp1);
    for( auto it : vt){
        cout << it << " ";
    }
    cout << endl;
    stable_sort(tem.begin(), tem.end(), cmp2);
    for(auto it : tem){
        cout << it << " ";
    }
    return 0;
}