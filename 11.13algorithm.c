#include <stdio.h>
#include <time.h>
#include <stdlib.h> 
int main(){
    srand(time(NULL));                                                          //set seed for random number generation
    int array[10]={};

    double sum = 0 ;
    int len = sizeof(array)/sizeof(int);
    printf("generated numbers :\n");
    for(int i = 0;i<len;i++){
        int rand1 = rand()%100+1;
        array[i] = rand1;
        printf("%d \n", array[i]);
    }
    for(int i=0;i<len;i++){
    sum += array[i];
    }   
    int lower = 0;
    double ave= sum/len  ;  
    for(int i = 0;i<len;i++){
        if(ave>array[i]){
            lower++;
        }

    }
    printf("the average is %.2f\n", ave);
    printf("the sum is %.0f and the number lower than average is %d\n",sum,lower);

    return 0;


}