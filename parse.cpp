/*File Name     :parse.cc
  Author Name   :syamasree
  Description   :To display the output in the given format*/


#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<typeinfo>
using namespace std;
bool check(string str)
{
int ik;
for(ik=0;str.length()==1;ik++)
{
return true;
}
}	
int main(int argc,char *argv[])
{
int ig;
int iJ;     //initializing values in function
float fh; 
if (argc==2)
	{
		cout << " parse.exe" << endl;
		cout << " enter values in command line" << endl << "char: a-z/ A-Z " << endl << "numbers(0-9)" << endl << "string group of characters" << endl;
		cout << " float (real/ decimal numbers)" << endl;

	}
	else
	{
	
for(ig=1;ig<argc;ig++)
{
iJ=atoi(argv[ig]);
fh=atof(argv[ig]);
if(iJ==0)
{
	if(check(argv[ig]))
	{
	cout<<"char";
	cout<<"\t"<<argv[ig]<< "\t"<<strlen(argv[ig])<<endl;
	}
	else
	{
	cout<<"string";
	cout<<"\t"<<argv[ig]<< "\t"<<sizeof(argv[ig])<<endl;
	}
}
else
{
if(iJ==fh)
cout<<"int"<< "\t"<<iJ<<"\t"<<sizeof(iJ)<<endl;
else
cout<<"float"<< "\t"<<fh<<"\t"<<sizeof(fh)<<endl;
}
}
return 0;
}
}


