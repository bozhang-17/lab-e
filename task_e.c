#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]){
    
	
	// Enter your code under here to read the filename from the command line
	if(argc == 1) { // display error
        printf("Error. Expected 1 filename.");
		return 1;
        }
	if(argc >= 3) { // display error
        printf("Error. Expected 1 filename.");
		return 1;
        }

	
    char str1[] = "number.txt";

    if(strcmp(str1, argv[1]) != 0) { // display error
        printf("Error. Cannot open requested file.");
		return 1;
        }
	// Read number from file - do not edit
	double num;
	FILE *fptr;
	fptr = fopen(argv[1], "r");
	fscanf(fptr, "%lf", &num);
	fclose(fptr);
	
   
	// Enter your code from Lab D to print JSON output (with name, email, number1, number2) goes under here
     if(strcmp(str1, argv[1]) == 0) { // display error
      printf("%.2f\n", num) ;
        }

	// Do not edit below here
	return 0;
}