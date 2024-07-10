#include <bits/stdc++.h>

int main()
{
    char c[100];
    int i,x;
    
    scanf("%s",c);
    
    x=strlen(c)-1;
    
    for(i=x;i>=0;i--){
        printf("%c",c[i]);
    }
    printf("\n");
    
    return 0;
}