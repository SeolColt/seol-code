#include "stdio.h"
int main(){
//part 1 :      judge whether a decimal is the power of 2
    // int n;                                          //the number to be judged
    // int count =0;                                   //the exponent if n is the power of 2
    // printf("Enter a positive integer: ");           //input n
    // scanf("%d", &n);                                //read n
    // while(n>=1 && n%2==0){                          //keep dividing n by 2 while n is even and greater than or equal to 1
    // n /= 2;                                         //conduct "divide n by 2"
    // count += 1;                                     //increase the exponent by 1
    // }
    // if(n==1){                                                   //if n is reduced to 1, it means the oringinal n is a power of 2
    //     printf("n is a power of 2\n");                          //output result
    //     printf("n can be illustrated with 2^%d\n", count);      //output the exponent
    // }
    // else{                                                       //if n is not reduced to 1, it means the original n is not a power of 2
    //     printf("n is not a power of 2\n");
    // }
//part 2 :      calculate the times to fold a paper to exceed the height of the Everest                    
    // double thickness = 0.1;                                                //initial thickness of the paper in mm
    // double everest_height = 8848000;                                       //height of the Everest in mm
    // int fold_count = 0;                                                    //the times to fold the paper
    // while(thickness <= everest_height){                                    //keep folding the paper while its thickness is less than or equal to the height of the Everest
    //     thickness *=2;                                                     //double the thickness of the paper
    //     fold_count +=1;                                                     //increase the fold count by 1
    // }
    //     printf("the times to fold the paper to exceed the height of the Everest is: %d\n", fold_count);         //output the fold count

//part3
    int number;                                          //the number to be reversed                                                                                                     
    int temp;                                            //a temporary variable to store the last digit of number                   
    int result=0;                                        //the reversed number                 
    printf("Enter a positive integer: ");                //input number
    scanf("%d", &number);                                //read number                         
    while(number!=0){                                    //keep reversing while number is not 0
        temp = number %10;                                          
        result = result *10 + temp;                      //append the last digit of number to result
        printf("%d", result);                            //output the reversed number step by step
        number /=10;                                     //remove the last digit from number                        



    }
     



return 0;
}