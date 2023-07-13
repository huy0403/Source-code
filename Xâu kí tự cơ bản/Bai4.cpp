#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i = 1; i < s.size(); i++){
        if(abs(int(s[i]) - int(s[i-1])) != 1){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}