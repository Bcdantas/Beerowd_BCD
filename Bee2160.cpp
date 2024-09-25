#include <bits/stdc++.h>

using namespace std;

double r,n;

double raiz(int n){
    if(n==0){
        return 0;
    }


    return 1.0 / (2.0 + raiz(n -1));
}


int main(){
    int x;

    double result;

    cin >> x;

    result = 1+raiz(x);

    cout << fixed << setprecision(10) << result << endl;

    return 0;
}