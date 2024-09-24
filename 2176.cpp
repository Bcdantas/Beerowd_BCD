#include <bits/stdc++.h>

using namespace std;

int main()
{
   char s[100];
   int i,cont=0,x;
   
    scanf("%[^\n]",s);
    
    x=strlen(s);
    
    for(i=0;i<x;i++){
        if(s[i]=='1'){
            cont++;
        }
        
    }
      if((cont%2)==0){
         
         printf("%s0\n",s);
          
      }  
      else{
         printf("%s1\n",s);
      }
    
    return 0;
}