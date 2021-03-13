#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

/*
 * The isinteger() function examines the string given as its first
 * argument, and returns true if and only if the string represents a
 * well-formed integer.  A well-formed integer consists only of an
 * optional leading - followed by one or more decimal digits.
 *
 * Returns true if the given string represents an integer, false
 * otherwise.
 */
bool isinteger(char *str);

/*
 * The parseint() function parses a well-formed string representation of
 * an integer (one which would return true from isinteger()) and returns
 * the integer value represented by the string.  For example, the string
 * "1234" would return the value 1234.  This function does not need to
 * handle badly-formed strings in any particular fashion, its operation
 * on badly-formed strings is undefined.
 *
 * Returns the integer value stored in the given string.
 */
int parseint(char *str);

/*
 * The main function is where C programs begin.
 *
 * This function parses its arguments and returns the value they
 * represent.  Its arguments are either:
 *
 *  - A single argument representing an integer
 *  - Three arguments, where the first and third are integers and the
 *    second is an operator to be performed on those integers
 *
 * Remember that the argument in argv[0] is the name of the program, so
 * a program passed exactly one argument on the command line will
 * receive _two_ arguments: its name in argv[0] and the provided
 * argument in argv[1].
 *
 * Arguments:
 * argc - The number of arguments received
 * argv - The arguments received as an array of C strings
 *
 * Returns 0 if the arguments are well-formed and the calculation could
 * be performed, non-zero otherwise.
 */
int main(int argc, char *argv[]) {
    /* Your main program logic should go here, with helper logic in the
     * functions isinteger() and parseint(), which you can place below
     * the closing brace of main() */

	if (argc<3) {
		if ((!isinteger(argv[1]))) {
                printf("Not valid 0 \n");
                return 1;
        }
		printf("%d\n", parseint(argv[1]));
		}
	else if (argc==3) {
		printf("Not valid 1 \n");
		return 1;
	}
	else {
	
	if (argc>4) {
                        printf("Only 3 \n");
                        return 2;
                }
		else {
			if (!(isinteger(argv[1]))) {
                printf("Not valid \n");
                return 3;
        }
        if (!(isinteger(argv[3]))) {
                printf("Not valid \n");
                return 3;
        }
        if (isinteger(argv[2])) {
                printf("Not valid \n");
                return 3;
        }
	if (!(*argv[2]=='+'||*argv[2]=='-'||*argv[2]=='x'||*argv[2]=='/')) {
		printf("Non operator \n");
		return 4;
	}
		if (*argv[2]=='/') {
		for (int i=1;i<argc;i++) {
			if ((*argv[2]=='/')&&(*argv[3]=='0')) {
				printf("0 is invalid \n");
				return 3;
			}
		}
		int num0=parseint(argv[1])/parseint(argv[3]);
		printf("%d\n", num0);
		}
		else  if (*argv[2]=='+') {
                     int num1=parseint(argv[1])+parseint(argv[3]);
                         printf("%d\n", num1);
		 }
		else if (*argv[2]=='x') {
		int num2=parseint(argv[1])*parseint(argv[3]);
		printf("%d\n", num2);
		}
		else {
		int num3=parseint(argv[1])-parseint(argv[3]);
		printf("%d\n", num3);
		}
		}
	}
    return 0;
}

/* You should implement isinteger() and parseint() here */
bool isinteger(char *str) {
	if (str[0]=='-'){
		if(strlen(str)==1){
			return false;
		}
		else {
		for (int i=1; str[i]!='\0'; i++) {
			if (!(isdigit(str[i]))){
			return false;
			}
			}
		return true;
		}
	}
	else {
		for (int j=0; str[j]!='\0'; j++) {
			 if (!(isdigit(str[j]))) {
				 return false;
			 }
		}
		return true;
}
}
int parseint(char *str) {
	int num1=0;
	int num2=0;
	if (str[0]=='-') {
		for (int i=1;str[i]!='\0';i++) {
			num1=(num1)*10+str[i]-'0';
		}
		return -num1;
	}
	else {
	for (int j=0;str[j]!='\0';j++) {
		num2=(num2)*10+str[j]-'0';
	}
	return num2;
	}
}
