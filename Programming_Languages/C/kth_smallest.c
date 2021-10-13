//C Program to find the Kth smallest element in a array .
#include<stdio.h>
int main()
{
    int n,i,arr[200],temp,j,k;
    scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
     for(j=i+1;j<n;j++)
   {
       if(arr[i]>arr[j])
       {
           temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
       }
   }
   }
   
   for(i=0;i<n;i++)
   {
       printf("%d\t",arr[i]);
   }
   printf("enter k : ");
   scanf("%d",&k);
   printf("kth smallest element = %d",arr[k-1]);

   return 0;
}
