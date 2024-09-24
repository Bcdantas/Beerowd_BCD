#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,i,j,t,cont=0;            // 1=2; 7=3; 2,3,5=5  4=4;  0,6,9=6; 8=7;
    char led[100];
    
    scanf("%d",&x);
    
    for(i=0;i<x;i++){
        scanf("%s",led);
        t=strlen(led);
        for(j=0;j<t;j++){
            if(led[j]=='1'){
                cont=cont+2;
            }
            else if(led[j]=='7'){
                cont=cont+3;
            }
            else if(led[j]=='4'){
                cont=cont+4;
            }
            else if((led[j]=='2')||(led[j]=='3')||(led[j]=='5')){
                cont=cont+5;
            }
            else if((led[j]=='0')||(led[j]=='6')||(led[j]=='9')){
                cont=cont+6;
            }
            else if(led[j]=='8'){
                cont=cont+7;
            } 
        }
        printf("%d leds\n",cont);
        cont=0;
    }
    return 0;
}