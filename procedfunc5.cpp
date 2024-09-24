#include <bits/stdc++.h>

using namespace std;

void recursao(int n);

int main(){
    int x[10];

    for(int i=0;i<10;i++){
        cin >> x[i];
    }

    recursao(x[10]);

}

void recursao(int a[10]){
    int b[10];

    for(int i=0;i<10;i++){
        int fatorial=1;
        for(int j=1;j<=a[i];j++){
            fatorial*= j;
        }
        b[i]=fatorial;
    }

    

}