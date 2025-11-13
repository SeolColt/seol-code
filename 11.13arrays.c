#include <stdio.h>
void printarr(int arr[],int len){
    for(int i=0;i<len;i++){
    printf("%d\n",arr[i]);                                              
    }
    printf("changed:%zu\n",sizeof(arr));                                        //arr is different from a normal variable,it is a pointer here and its size is 8 bytes on a 64-bit system
    printf("array length = %d\n", len);
}
int main(){
    int arr1[5] = {1,55,6,9,4};                                                  
    int len1 = sizeof(arr1)/ sizeof(arr1[0]);
    printarr(arr1,len1);
    printf("oringinal:%zu\n",sizeof(arr1));                                     //arr1 is a normal variable here and its size is 20 bytes



    return 0;



}