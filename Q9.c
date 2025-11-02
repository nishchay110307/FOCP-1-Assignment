// Q9. Design a C program to find the first occurrence of the score “99” in an array, focusing on linear
// search and data retrieval techniques.

#include<stdio.h>

int main(){

   int n,i,pos=-1;

   printf("Enter size of array : ");
   scanf("%d",&n);

   int arr[n];

   printf("Enter %d elements : ",n);
   for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
   }

   for(i=0;i<n;i++){
      if(arr[i]==99){
         pos=i;
         break;
      }
   }

   if(pos!=-1)
      printf("First occurence of 99 is at position %d",pos+1);
   else
      printf("99 not found in the array");

   return 0;
}
