#include "stdio.h"
#include "time.h"                                                      //introduce for using time functions
#include "stdlib.h"
int main(){
    long long justtime = time(NULL);                                        //get current epoch time
    srand(time(NULL));                                                            //set seed for random number generation
    int i = 0;
    for(i=0;i<100;i++){
        long number2 = rand()%100+1;                                   //generate random number from 1 to 100
        printf("random number is %ld\n",number2);
    }









}    