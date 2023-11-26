#include<stdio.h>
void main(){
    int limit,temp=0;
    printf("Enter the limit\n");
    scanf("%d",&limit);
    int array[limit];
    printf("Enter the elements in array\n");
    for(int i=0;i<limit;i++){
        scanf("%d",&array[i]);
    }
    printf("Unsorted Array:");
    for (int i = 0; i <limit; i++)
    {
       printf("%d ",array[i]); /* code */
    }
    int i=1;
    while(i<limit){
        int j=i;
        while(array[j]<array[j-1]){
            temp=array[j-1];
            array[j-1]=array[j];
            array[j]=temp;
            j=j-1;
            if(j==0){
                break;
            }
        }
        i=i+1;
    }
    printf("\nSorted Array:");
    for(int i=0;i<limit;i++){
        printf("%d ",array[i]);
    }
}