#include <bits/stdc++.h>

using namespace std;

int main(){
    int x=0,y=1;

    while(x!=y){
        cin >> x;
        cin >> y;
        if(x<y){
            cout << "Crescente" << endl;
        }
        else if(x>y){
            cout << "Decrescente" << endl;
        }

    }

    return 0;  
}