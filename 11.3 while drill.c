#include "stdio.h"
int main(){
    int a = 1,i;
    printf("Enter your name: ");        //input name
    char name[50];                    
    scanf("%s", name);                  //read name
    printf("Enter the number of times to print your name: ");    
    scanf("%d", &i);
    while(a<= i ){
        printf("Hello,%s\n", name);
        a++;

    }
return 0;


}