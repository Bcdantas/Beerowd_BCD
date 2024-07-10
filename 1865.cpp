#include <bits/stdc++.h>

using namespace std;

int main(){
    int c,n;
    char nome[50];
    cin >> c;

    for(int i=0;i<c;i++){
        cin >> nome >> n;
        
        if(!strcmp(nome,"Thor")){
            cout << "Y" << endl;
        }
        else if(n>25000){
            cout << "Y" << endl;
        }
        else{
            cout << "N" << endl;
        }

    }



    return 0;
}