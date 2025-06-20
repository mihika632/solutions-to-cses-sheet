#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << n << " ";
    long long a = n;
    while(a!=1){
        if(a%2==0){
            a/=2;
             cout << a << " ";
        } 
        else{
            a*=3;
            a+=1;
             cout << a << " ";
        }
       
    }
   return 0;
}