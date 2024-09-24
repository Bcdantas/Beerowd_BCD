#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m1[50][50],m2[50][50];
    
    cin >> n;

    for(int l=0;l<n;l++){
        for(int c=0;c<n;c++){

            scanf("%d",&m1[l][c]);

            if(m1[l][c]<0){
                m1[l][c] = (m1[l][c])*2;
            }

        }
    }

    for(int l=0;l<n;l++){
        for(int c=0;c<n;c++){

            m2[l][c] = m1[c][l];

        }
    }

    for(int l=0;l<n;l++){

            cout << endl;

        for(int c=0;c<n;c++){

            cout << m2[l][c];
            if(c<n-1){
                cout << " ";
            }


        }
    }




    return 0;
}