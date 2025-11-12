#include "stdio.h"
#include "math.h"                                                      //introduce for using math functions
#include "time.h"                                                      //introduce for using time functions
#include "stdlib.h"

// int getsum(){                                                       //type 1: no parameters
//     printf("enter the two numbers to be summed:\n");                //function body starts
//     int num1,num2;                                                          
//     scanf("%d %d",&num1,&num2); 
//     int sum = num1 + num2;                            
//     printf("the sum is %d\n",sum);
//     return sum  ;                                                   //return : finish the function and return the value to the calling function
// }                                                                                                  

// int getsum(int num1,int num2){                                         //type 2: with parameters to get the sum
//     int sum = num1 + num2;                           
//     return sum  ;                                    
// }       

// void printresult(int res){                                               //type 3 : print result function
//     printf("result is %d\n",res);
// }





int main(){
//part 1 call type 2 function and type 3 function
    // int a,b;                                     
    // printf("enter two integers:\n");
    // scanf("%d %d",&a,&b);    
    // int result = getsum(a,b);                       
    // printresult(result);                                                   //call void type function

//part 2 usetime.h functions
// long long result = time(NULL);                                                                     //get current time
// printf("current epoch time is %lld\n",result);                                       //print current epoch time

//part 3 use four math.h functions
// double pow1 = pow(2,3);                                                      //power function 2^3
// printf("2 to the power of 3 is %lf\n",pow1);
// double sqrt1 = sqrt(16);                                                     //square root of 16
// printf("the square root of 16 is %lf\n",sqrt1);
// ceil(4.3);                                                                    //round up
// floor(4.7);                                                                   //round down
// printf("4.3 rounded up is %lf\n",ceil(4.3));
// printf("4.7 rounded down is %lf\n",floor(4.7));

//part 4 generate random number
// long long justtime = time(NULL);                                        //get current epoch time
// printf("current epoch time is %lld\n",justtime);
// srand(time(NULL));                                                            //set seed for random number generation
// long number,i=0;                                                                    //set seed for random number generation
// while(i<10){
//     long number = rand();   
//     printf("random number is %ld\n",number);
//     i++ ;               
// }

return 0;
}