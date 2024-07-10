#include <bits/stdc++.h>

using namespace std;

int main(){
    char L[500];
    int i;

    scanf(" %[^\n]",L);
    i=strlen(L);

    if(i<=80){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}