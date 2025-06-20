#include<bits/stdc++.h>
using namespace std;
void f(int n, int src, int aux, int des){
    if(n == 1){
        cout << src << " " << des << endl;
        return;
    } 
    f(n-1, src, des, aux);
    cout << src << " " << des << endl;
    f(n-1, aux, src, des);
}
int main(){
    int n;
    cin >> n;

    cout << (1 << n) - 1 << "\n";
    f(n,1,2,3);
    return 0;
}