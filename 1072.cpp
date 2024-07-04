#include <bits/stdc++.h>

using namespace std;

int main(){

    int x,y,i=0,in=0,out=0;

    cin >> x;

    do {
        cin >> y;

        if(y>=10 && y<=20){
            in++;
        }
        else{
            out++;
        }

        i++;
    }
    while (i<x);

    cout << in << " in" << endl;
    cout << out << " out" << endl;

    return 0;
}