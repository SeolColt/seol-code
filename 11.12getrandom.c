#include "stdio.h"
#include "time.h"                                                      //introduce for using time functions
#include "stdlib.h"
int main(){
    // long long justtime = time(NULL);                                        //get current epoch time
    // srand(time(NULL));                                                            //set seed for random number generation
    // int i = 0;
    // for(i=0;i<100;i++){
    //     long number2 = rand()%100+1;                                   //generate random number from 1 to 100
    //     printf("random number is %ld\n",number2);
    // }
    a:
    long long justtime = time(NULL);
    srand(justtime);
    int num1 = rand()%100+1;
    printf("random number is %d\n",num1);                                          //for testing purpose
    while(1){
        printf("enter a guess number between 1 to 100:\n");
        int num2;
        scanf("%d",&num2);
        if (num2>100 || num2<1) {
            printf("your number is valid,please enter a number between 1 to 100\n");       
        }
        else if(num2>num1){
            printf("your guess is too high\n");
        }
        else if(num2<num1){
            printf("your guess is too low\n");
        }
        else{
            printf("Congratulations! you guessed it right\n");
            

        }
        printf("enter 1 to try again or enter any other number to exit:\n");
        int num3;
        scanf("%d",&num3);
        if(num3==1){  
            goto a;
        }
        else{
            break;
        }
     
    }
     printf("Thank you for playing\n");







}    