//Fullname: Pernebek Askhat
//Group: 3EN04B

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
 
int main(int argc,char* argv[]){
	char *fileName = argv[0];
	if(!strcmp(fileName,"./sayhi")){
		if(argc == 1) printf("%s\n","hi");
		else if(argc == 2){
			if (strncmp(argv[1],"-k",-1)==0 || strncmp(argv[1],"--kazakh",-1)==0)  printf("%s\n","salem");
			else if (strncmp(argv[1],"-r",-1)==0 || strncmp(argv[1],"--russion",-1)==0) printf("%s\n","privet");

		}
		else if (argc==4){
			if (strncmp(argv[1],"-k",-1)==0 || strncmp(argv[1],"--kazakh",-1)==0)  printf("%s  %s\n","salem",argv[3]);
			else if (strncmp(argv[1],"-r",-1)==0 || strncmp(argv[1],"--russion",-1)==0) printf("%s  %s\n","privet",argv[3]);
		}
		
		
	}
	else if(!strcmp(fileName,"./saysalem")){
		if(argc == 1) printf("%s\n","salem");
		else if(argc == 2){
			if (strncmp(argv[1],"-e",-1)==0 || strncmp(argv[1],"--english",-1)==0)  printf("%s\n","hi");
			else if (strncmp(argv[1],"-r",-1)==0 || strncmp(argv[1],"--russion",-1)==0) printf("%s\n","privet");

		}
		else if (argc==4){
			if (strncmp(argv[1],"-e",-1)==0 || strncmp(argv[1],"--english",-1)==0)  printf("%s  %s\n","hi",argv[3]);
			else if (strncmp(argv[1],"-r",-1)==0 || strncmp(argv[1],"--russion",-1)==0) printf("%s  %s\n","privet",argv[3]);
		}
		
		
	}
	else if(!strcmp(fileName,"./sayprivet")){
		if(argc == 1) printf("%s\n","privet");
		else if(argc == 2){
			if (strncmp(argv[1],"-e",-1)==0 || strncmp(argv[1],"--english",-1)==0)  printf("%s\n","hi");
			else if (strncmp(argv[1],"-k",-1)==0 || strncmp(argv[1],"--kazakh",-1)==0) printf("%s\n","salem");

		}
		else if (argc==4){
			if (strncmp(argv[1],"-e",-1)==0 || strncmp(argv[1],"--english",-1)==0)  printf("%s  %s\n","hi",argv[3]);
			else if (strncmp(argv[1],"-k",-1)==0 || strncmp(argv[1],"--kazakh",-1)==0) printf("%s  %s\n","salem",argv[3]);
		}
		
		
	}
	
        return 0;

}