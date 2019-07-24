#include <iostream>
#include<stdio.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int i,a[n],b[n];
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	cin>>b[i];}
for(i=0;i<n;i++)
	{

printf("Case %d: %d\n",i+1,a[i]+b[i]);}
	return 0;
}
