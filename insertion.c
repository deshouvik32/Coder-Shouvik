#include<stdio.h>
void display (int arr[],int n)
{
    //traversal
    for (int i=0;i<n;i++)
    {
        printf ("%d",arr[i]);
    }
    printf("\n");
}

int indInsertion (int arr[],int size,int capacity,int element,int index){
    if (size>=capacity)
    {returm -1;
}
for (int i=size-1;i>=index;i--)
{
     (arr[i+1]=arr[i];
}
arr[index]=element;
return 1;}

int main()
{
    int arr[100]={7,8,10,15,25};
    int size=5,element=45,index=3;
    size+=1;
    display(arr,size);
    returm 0;
}