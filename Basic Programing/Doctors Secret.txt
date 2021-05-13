//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/doctors-secret/
#include <stdio.h>

int main(){
	int n,num;
	scanf("%d %d",&n,&num);    
	if(n<=23 && 500<num<1000)          		
	printf("Take Medicine");
	else
	printf("Don't take Medicine");       
}