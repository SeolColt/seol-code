#include <stdio.h>
int main(){
    
    int i,j;          //  the cycle times you need
    char b[100];    //the string you want to print
    printf("please enter the number of times and your string");
    scanf("%d",&i); 
    scanf("%s",b);  
    
    for(j=1;j<=i;j++)
    {
      printf("%s\n",b);
    }
    



    
 return 0;

}