#include<bits/stdc++.h>


int main()
{
    int x[5],i,v,cont=0;

    scanf("%d",&v);
    
    for(i=0;i<5;i++){
        scanf("%d",&x[i]);
        
        if(x[i]==v){
            cont++;
        }
    }
    
    printf("%d\n",cont);
    
    return 0;
} 