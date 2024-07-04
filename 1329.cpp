#include <bits/stdc++.h>

using namespace std;

int main(){
    int x,y,i=0,m=0,j=0;

    cin >> x;

    while(i<x){
        cin >> y;

        if(y==0){
            m++;
        }
        else if(y==1){
            j++;
        }

        i++;
    }

    cout << "Mary won " << m <<  " times and John won " << j << " times" << endl;


    return 0;
}