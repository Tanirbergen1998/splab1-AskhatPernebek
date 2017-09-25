//Fullname: Pernebek Askhat
//Group: 3EN04B


#include <stdio.h>
#include <math.h>

int main(int argc, char*argv[]){
  double a;
	if(argc > 2){
		sscanf(argv[2], "%lf", &a);
		if(!strcmp(argv[1], "-s")){
			printf("%f\n",sin(a));
		}else if(!strcmp(argv[1], "-c")){
			printf("%f\n",cos(a));
		}
		
	}else if(argc == 2){
		sscanf(argv[1], "%lf", &a);
		printf("%f\n",sin(a));
		printf("%f\n",cos(a));
	}else{
		printf("usage: sincos angle\nonly sine: sincos -s angle\nonly cosine: sincos -c angle\n");
	}
	return 0;

}