#include "stdio.h"
int main(){


//print12345                                              //1.      program to print numbers from 1 to 5    
    // int a = 1;
    // for (a=1;a<=5;a++){
    //     printf("%d",a);
    // }
    // return 0;


//print12345 in reserve order                              //2.   program to print numbers from 5 to 1
    //  int a ;
    // for (a=5;a>=1;a--){
    //     printf("%d",a);
    // }

//print the sum of the double number from 1 to 100
//    int count;
//     int sum = 0;  //to store the sum
//     for(count=1;count <= 100;count++){
//         if(count %2 ==0){
//             printf("%d\n",sum += count);
//         }





                                                            //3. print the number which can be divided by 24 between a and b
    int number;                                             //the very number between a and b
    printf("enter the min and max number:");                //promp the user to enter the min and max number
    int a,b;                                                //the min and max number
    int total = 0;                                          //the total of the very number between a and b
    scanf("%d %d",&a,&b);                                   //get the min and max number from the user
    int min = a < b ? a : b;                                //judge which number is min
    int max = a < b ? b : a;                                //judge which number is max
    for(number = min; number<=max;number++){    
        if(number % 24 == 0){
            total++;                                        //increase the total when the number can be divided by 24
            printf("%d is divisible by 24 \n",number);      //indicate the number which can be divided by 24
        }
    }
     printf("the total is %d\n",total);                     //print the total of the very number between a and b    


    return 0;
}


