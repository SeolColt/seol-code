#include <stdio.h>
int main(){
    printf("please enter a number:");
    int num;
    scanf("%d",&num);


    if (num>0){    
    switch (num)
    {case 1:
        printf("ticket search\n");
        break;
    case 2:
        printf("ticket reserve\n");
        break;
    case 3:
        printf("ticket change\n");
        break;
    default:
        printf("exit service\n");
        break;
    
      
    }
}

   

else if(num<0){
    printf("negative number is invalid\n");    
}
else{
    printf("zero is invalid\n");
}
 return 0;

}