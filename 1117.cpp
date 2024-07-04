#include <bits/stdc++.h>

using namespace std;

int main(){

    double x,i=0,nota=0;

    do{
        cin >> x;
        if(x<=10 && x>=0){
            nota = nota+x;
            i++;
        }
        else{
            cout << "nota invalida" << endl;
        }


    }while(i<2);

    cout << fixed << setprecision(2);
    cout << "media = " << nota/2 << endl;


    return 0;
}