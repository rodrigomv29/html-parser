#include <stdio.h>
#include <stdlib.h>
int main(){
	printf("Hello World\n");
	FILE* file = fopen("demo.html", "r");
	if(!file){
		printf("OOPS!");
		exit(-1);
	}
	char c;
	printf("reading from file...\n");
	while ( c=getc(file)!=EOF){
		printf("We just read %s\n", c);
        }
	fclose(file);

	return 1;
}
