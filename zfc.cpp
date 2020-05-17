#include<fstream>
#include<cstdio>
#include<iostream>
using namespace std;

int main(int argc,char *argv[]){
	if(argc!=3){
		printf("[ERROR]Files Not Found");
		return 1;
	}
	ifstream f1,f2;
	f1.open(argv[1]);
	f2.open(argv[2]);
	printf("%s %s\n",argv[1],argv[2]);
	string s1="",s2="";
	while(1){
		bool ret1=(f1>>s1!=0),ret2=(f2>>s2!=0);
		if(ret1==0&&ret2==0)break;
		if(ret1!=ret2){
			cout<<s1<<" | "<<s2<<endl;
			return 1;
		}
		if(s1!=s2){
			cout<<s1<<" | "<<s2<<endl;
			return 1;
		}
	}
	printf("No Differences\n");
	return 0;
}
