#include <stdio.h>
#include <time.h>
#include <stdlib.h> 
//part 1 
// int correct(int array[], int len,int num){
//     for(int i = 0;i<len;i++){
//         if(array[i]==num){
//             return 1;}
//          }
//      return 0;
// }
void scan_down(int array[],int len){
    printf("\n\n");
    for(int i = 0; i< len;i++){
        
        printf("%d\n",array[i]);
    }

} 

int main(){
//part1
//     srand(time(NULL));                                                          //set seed for random number generation
//     int array[10]={};
//     int len = sizeof(array)/sizeof(int);
//     printf("generated numbers :\n");
//     for(int i = 0;i<len;){
//         int rand1 = rand()%100+1;
//         int temp = correct(array,len,rand1);
//         if(temp==0){
//         array[i] = rand1;
//         printf("%d\n", array[i]);
//         i++;
//         continue;
//         }
//         printf("the number repeated:%d\n",rand1);
//     }
//         double sum = 0 ;
//     for(int i=0;i<len;i++){
//     sum += array[i];
//     }   
//     int lower = 0;
//     double ave= sum/len  ;  
//     for(int i = 0;i<len;i++){
//         if(ave>array[i]){
//             lower++;
//         }
//     }
//     printf("the average is %.2f\n", ave);
//     printf("the sum is %.0f and the number lower than average is %d\n",sum,lower);

//part2
    int array2[6] = {0};
    int len2 = sizeof(array2)/sizeof(int);
    for(int i = 0; i<len2;i++){
    printf("pleaseenter the number %d integer\n",i+1); 
    scanf("%d",&array2[i]);
    }
    scan_down(array2,len2);                      // scan down the array.
    int i = 0;
    int j = len2 - 1;
    while(i<j){
        int temp = array2[i];
        array2[i] = array2[j];
        array2[j] = temp;
        i++;
        j--;
    }
    printf("the inverted array2 :");
    scan_down(array2,len2);         
    return 0;


}