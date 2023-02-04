#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],b[10],c[20],i,j,k,m,n,r;
	clrscr();
	printf("enter number of elements in the first array: ");
	scanf("%d",&m);
	printf("enter the %d elements in ascending order into first array:\n",m);
	for(i=0;i<m;i++)
	scanf("%d",&a[i]);
	printf("enter number of elements of in the second array: ");
	scanf("%d",&n);
	printf("enter the %d elements in ascending order into second array:\n",n);
	for(j=0;j<n;j++)
	scanf("%d",&b[j]);
	for(i=0,j=0,k=0;i<m&&j<n;k++)
	if(a[i]<b[j])
	c[k]=a[i++];
	else
	c[k]=b[j++];
	while(i<m)
	c[k++]=a[i++];
	while(j<n)
	c[k++]=b[j++];
	printf("\n merged sorted array is: ");
	for(r=0;r<k;r++)
	printf("\n %d",c[r]);
	getch();
}




