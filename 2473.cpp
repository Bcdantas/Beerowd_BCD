#include <bits/stdc++.h>

int main()
{
    int x[6],y[6],i,j,cont=0;
    
    for(i=0;i<6;i++){
        scanf("%d",&x[i]);
    }
    for(i=0;i<6;i++){
        scanf("%d",&y[i]);
    }
    
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            if(x[i]==y[j]){
                cont++;
            }
        }
    }
    
    if(cont==3){
        printf("terno\n");
    }
    else if(cont==4){
        printf("quadra\n");
    }
    else if(cont==5){
        printf("quina\n");
    }
    else if(cont==6){
        printf("sena\n");
    }
    else if(cont<3){
        printf("azar\n");
    }
    
}