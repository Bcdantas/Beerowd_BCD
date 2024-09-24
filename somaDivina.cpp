#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m1[50][50],m2[50][50],m3[50][50],v=0;
    
    cin >> n;

    if(n==0){
        cout << "Vazia" << endl;
    }

    for(int l=0;l<n;l++){
        for(int c=0;c<n;c++){

            scanf("%d",&m1[l][c]);

        }
    }

    for(int l=0;l<n;l++){
        for(int c=0;c<n;c++){

            scanf("%d",&m2[l][c]);

        }
    }

     for(int l=0;l<n;l++){
        for(int c=0;c<n;c++){

            m3[l][c] = m2[l][c]+m1[l][c];
            cout << m3[l][c] << endl;

        }
    }

  
    return 0;
}