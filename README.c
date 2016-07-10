# killer
#include <stdio.h>
int main(){
  char c;
  int i,j,n,p,q,asc=100,days;
	char name[100];
	printf("Enter the value n: ");
	scanf("%d",&n);        
	p=2*n;
  q=p-1;
  
  /*naming each child */
  for(i=0;i<p;i++)
	{
 name[i]=asc;
 asc++;
	}
	
 days=q;
 j=2*n-1;
 while(days!=0)
 {
 printf("\n The children pairs for day %d",days);
	/* prints the pairs for the various days */
 for(int i=0;i<2*n;i++)
	{
	printf("\n %c %c",name[i],name[j]);
	j--;
	}
  
	/* shifts the position of children in the array */
	for(int i=0;i<2*n;i++)
{ 
	char temp;
	if(i==0)
	{
	temp=name[i];
	}
	name[i]=name[i+1];
	if(i==(2*n)-1)
	{
	name[i]=temp;
	}
	}
	days--;
 }
return 0;
	}
