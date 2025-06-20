#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    int mxlen = 1, len = 1;
    for(int i = 1; i < s.length(); i++){
       
        if(s[i]==s[i-1]){
            len++; 
                
        }
      else len = 1;

      mxlen = max(len, mxlen);
     
       
    }
    cout << mxlen << endl;
    return 0;
}