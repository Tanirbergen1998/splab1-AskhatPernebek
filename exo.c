//Fullname: Pernebek Askhat
//Group: 3EN04B

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>

int main(int argc, char*argv[]){
	int a = 0;
	for (int i = 1; i < argc; i++){
		if(strncmp(argv[1],"-n",-1)==0 && i==1){
			a = 1;
		}else{
			printf("%s ",argv[i]);
		}
		
	}
	if(a == 0){
		printf("\n");
	}

	return 0;
}