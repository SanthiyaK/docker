#include<stdio.h>
void main()
{
char a[20];
int count=0,count1=0,i;
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
count++;
}
for(i=1;i<=count;i++)
{
if(a[i]!=' ')
{
count1++;
}
}
printf("%d",count1);
}
