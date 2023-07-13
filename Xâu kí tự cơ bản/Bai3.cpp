#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    long long int sum = 0;
    for(int i = 0; i< s.size(); i++){
        if(isdigit(s[i])) sum += int(s[i]) - 48;
    }
    cout << sum;
    return 0;
}