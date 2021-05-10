//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/is-zoo-f6f309e7/
#include <stdio.h>

int main(){
	char s[20];int i,co=0,cz=0;
	gets(s);             			
	for(i=0;i<strlen(s);i++) 
	{
		if (s[i]=='z')
		cz=cz+1;
		else
		co=co+1;
	} if(cz*2==co)
	  printf("Yes");
	  else
	  printf("No");     
}
