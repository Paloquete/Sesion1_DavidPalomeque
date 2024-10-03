#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int *p, *q,x, y;
	p=&x;
	*p=14;
	q=p;
	if ( p==q) cout<<"1";
	q=&y;
	if(p==q) cout<<"2";
	*q =14;
	if(p==q) cout<<"3";
	if(*p==*q) cout<<"4";
	return 0;
}
