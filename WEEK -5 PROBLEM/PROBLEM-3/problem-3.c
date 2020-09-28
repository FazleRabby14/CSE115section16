/* Write a function that searches for value (key) in an array of size
 defined by the user. The function should print “Found” if
 the element is in the array and “Not found” otherwise.*/

#include<stdio.h>

void search(int arr[], int size, int key);

int main(){

    int value[5]={4,3,2,9,12};
     int key;
    int y;
    printf("Enter the element to search:");
    scanf("%d",&key);

     search(value,5,key);

    return 0;
}
void search(int arr[],int size,int key){

 for(int i=0;i<5;i++){
    if(arr[i]==key){
     printf("Found");
     break;
    }

     else{
        printf("Not Found");
        break;
     }

 }

 }


