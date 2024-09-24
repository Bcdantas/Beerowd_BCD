#include <bits/stdc++.h>

using namespace std;
int n[5],a,b;
void maiormenor();
int main(){

    for(int i=0;i<5;i++){
        cin >> n[i];
    }
    a=n[0];
    b=n[1];

    maiormenor();

    return 0;
}

void maiormenor(){
   

    for(int i=0;i<5;i++){
        if(a<n[i]){
            a=n[i];
        }
         if(b>n[i]){
            b=n[i];
        }
    }

    cout << "Maior = " << a << endl;
    cout << "Menor = " << b << endl;

}