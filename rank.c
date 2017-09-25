//Fullname: Pernebek Askhat
//Group: 3EN04B

#define _GNU_SOURCE
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define BUF 128 /* can change the buffer size as well */
#define TOT 10 /* change to accomodate other sizes, change ONCE here */

int compare(char* a, char* b)

{
    
    int i = 0; 
    while ( a[i] != '\0' ) 
    { 
        if( b[i] == '\0' ) { return 1; } 
        else if( a[i] < b[i] ) { return -1; }
        else if( a[i] > b[i] ) { return 1; } 
        i++; 
    } 
    if(b[i]=='\0')
        return 0;
    else 
        return -1;
}
int main(int argc, char*argv[]){
	FILE *fp;
	char * line = NULL;
    	size_t len = 0;
	ssize_t read;
	char words[TOT][BUF];
	int i = 0;
    	int total = 0;
	fp = stdin;
	while(fgets(words[i], BUF, fp)) {
		/* get rid of ending \n from fgets */
		words[i][strlen(words[i]) - 1] = '\0';
		i++;
    	}
	total = i;
	char *fname[total]; // words - che to duris emes array boldi sol uwin fname kerek boldi
	for(i = 0; i < total; i++){
	        printf("%s\n", words[i]);
		fname[i] = words[i];
	}
	printf("\n");
	//buble sort
	for (int i = 0; i < total; i++){
	    for (int j = i+1; j < total; j++){
		if (compare(fname[i],fname[j]) == 1){
			char *tmp = fname[i];
			fname[i] = fname[j];
			fname[j] = tmp;
		}
	    }
	}
	if(argc > 1 && !strcmp(argv[1],"--reverse")){
		for(i = total-1; i >= 0; i--)
			printf("%s\n", fname[i]);	
	}else{
		for(i = 0; i < total; i++)
			printf("%s\n", fname[i]);
	}

	return 0;
}