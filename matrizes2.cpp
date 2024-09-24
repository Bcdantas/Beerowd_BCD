#include <bits/stdc++.h>

using namespace std;

int main(){

    int m[3][3],i=0,j=0,p=0,menor,d,soma=0;
    double media;

    for(i;i<3;i++){
        for(j;j<3;j++){

            scanf("%d",&m[i][j]);

        }
    }

    menor = m[0][0];

       for(i;i<3;i++){
        for(j;j<3;j++){

            if(m[i][j]>0){
                    p=p+m[i][j];
                }

            if(i!=j){
                    soma=soma+m[i][j];
                }  

            if(m[i][j]<menor){
                menor = m[i][j];
            }
         
        }
    }

    if(menor%2==0){
        d=0;
    }
    else if(menor%2!=0){
        d=1;
    }

    media = p/9;

    cout << media << menor << d << soma << endl;



    return 0;
}