//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/cipher-1/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int val;
	cin>>val;
	int n=s.length();
	string s1;
	for(int i=0;i<n;i++)
	{
		  int val1=s[i]-'0';
		  int val2=s[i]-'a';
		  int val3=s[i]-'A';
		  if(val1>=0 && val1<=9)
		  {
			  int r=(val1+val)%10;
			  char c='0'+r;
			  s1+=c;
			  continue;
		  }
		  if(val2>=0 && val2<=25)
		  {
			   int r=(val2+val)%26;
			   char c='a'+r;
			   s1+=c;
			   continue;
		  }
		  if(val3>=0 && val3<=25)
		  {
			   int r=(val3+val)%26;
			   char c='A'+r;
			   s1+=c;
			   continue;
		  }
		  s1+=s[i];

	}
	cout<<s1<<endl;
}
