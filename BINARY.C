#include<stdio.h>
#include<conio.h>
int Binary(int[],int,int);
main()
{
  int a[10],n,k,i,pos=-1;
  printf("Enter the element N");
  scanf("%d",&n);
  printf("enter the array element");
   for(i=0;i<n;i++)
    {
     scanf("%d",& a[i]);
    }
   printf("enter the search key");
   scanf("%d",&k);
   pos=Binary(a,n,k);
   if(pos!=-1)
    {
    printf("available in the list %d",pos);
    }
    else
    {
    printf("Not available in the list");
    }
    getch();
    return 0;
}
int Binary(int a[],int n,int k)
{
 int F,L,M;
 F=0,L=n-1;
 while(L>=F)
 {
  M=(F+L)/2;
  if (k<a[M])
   L=M-1;
  else if(k>a[M])
   L=M+1;
  else if(k==a[M])
  return M;
 }
  return -1;
}






