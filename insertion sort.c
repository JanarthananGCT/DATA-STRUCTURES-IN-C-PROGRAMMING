#include<stdio.h>
void insertionsort(int array[],int size)
{   int i;
    for(i=1;i<size;i++){
        int key=array[i];
        int j=i-1;
        while(key<array[j]&&j>=0){
            array[j+1]=array[j];
            --j;
        }
        array[j+1]=key;
    }
}
void main()
{
    int i,data[80],n;
    printf("size");
    sacnf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++) 
    scanf("%d",data[i]);
    insertionsort(data,n);
    printf("the elements after sorted:");
    for(i=0;i<n;++i)
    printf("%d\n",data[i]);
}