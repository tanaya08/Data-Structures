//Linear search
#include<stdio.h>
void main()
{
 int a[100],s,c,n;
 printf("Enter no. of elements in array:");
 scanf("%d",&n);
 printf("Enter %d integer(s)\n",n);
 for(c=0;c<n;c++)
 {
    scanf("%d",&a[c]);
 }
 printf("Enter a no. to search:");
 scanf("%d",&s);
 for(c=0;c<n;c++)
 {
    if(a[c]==s)
    {
        printf("%d is present at location %d",s,c+1);
        break;
    }
 }
 if(c==n)
 {
     printf("%d isn't present in the array",s);
 }
}
