#include <bits/stdc++.h>

using namespace std;

int main(){
    int senha;

    do{
        cin >> senha;
        if(senha!=2002){
            cout << "Senha Invalida"<< endl;
        }
        else{
            cout << "Acesso Permitido" << endl;
        }

    }while(senha!=2002);


    return 0;
}