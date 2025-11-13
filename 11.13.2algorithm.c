#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

int correct(int array[], int len,int num){
    for(int i = 0;i<len;i++){
        if(array[i]==num){
            return 1;}
         }
     return 0;
}


int main(){
    srand(time(NULL));                                                          //set seed for random number generation
    int array[10]={};
    int len = sizeof(array)/sizeof(int);
    printf("generated numbers :\n");
    for(int i = 0;i<len;){
        int rand1 = rand()%100+1;
        int temp = correct(array,len,rand1);
        if(temp==0){
        array[i] = rand1;
        printf("%d\n", array[i]);
        i++;
        continue;
        }
   
        printf("the number repeated:%d\n",rand1);
    }
        double sum = 0 ;
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