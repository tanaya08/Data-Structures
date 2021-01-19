#include<stdio.h>
void main()
{
 int a[100],s,c,n,f,l,m;
 printf("Enter no. of elements in array:");
 scanf("%d",&n);
 printf("Enter %d integer(s)\n",n);
 for(c=0;c<n;c++)
 {
    scanf("%d",&a[c]);
 }
 printf("Enter a no. to search:");
 scanf("%d",&s);
 f=0;
 l=n-1;
 m=(f+l)/2;
 while(f<=l)
 {
    if(a[m]<s)
    {
        f=m+1;
    }
    else if(a[m]==s)
    {
        printf("%d is present at location %d",s,m+1);
        break;
    }
    else
    {
        l=m-1;
    }
    m=(f+l)/2;
 }
 if(f>l)
 {
    printf("NOT FOUND! %d isn't present in the list",s);
 }
}
