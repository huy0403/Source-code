#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int count = 0;
    for(int i = s.size()-1; i > 0; i--){
        count++;
        if(count == 3){
            s.insert(i,",");
            count = 0;
        }
    }
    cout << s;
    return 0;
}