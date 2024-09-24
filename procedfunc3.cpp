#include <bits/stdc++.h>

using namespace std;
double somadoida();

int main(){
    
    cout<<fixed << setprecision(2) << somadoida();

    return 0;
}

double somadoida(){
    int n;
    double r=0;

    cin >> n;

    for(int i=1;i<=n;i++){
        r=r+ ((pow(i,2)+1)/(i+3));
    }

    return r;
}