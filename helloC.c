#include <stdio.h>
#include <stdlib.h>      /*absolutelly needed for malloc*/

int main(void)
{
	char *hello = "Hello";

	int age;
	int c;               /*Use to flush input*/

	printf("Enter your age: ");
	scanf("%d", &age);
	/*because scanf get ONLY the number and keep '\n' in buffer, you MUST do
    the following before continuing*/
	fflush(stdin);
	/*fflush stdin does not work every time, so we also need the next lines*/
	while ((c = getchar()) != '\n' && c != EOF);

	printf("Enter your name: ");
	/*solution 1:
	scanf("%s",&name);
	Works well for %c, %i, %d but not suitable for string, it would work with
	char[N] is declared except if separator(newline, tab or space) is present.
	In this case, it take only the 1st word

	solution 2:
	char[N] = name
	fgets(name,64,stdin); fgets take all the sentence with separator but you
	must declare a char[N], not a char* */

	/*Solution3 with unbounded char*...*/
	int lenName = 0;
	char *pName = malloc(1); /*init name with a minimal lenght size...*/

	int i = 0;

	do {
		/*Use getchar to get each char one after the other*/
		c = getchar();
		/*put it in pName*/
		pName[i++] = (char)c;
		/*realloc with a new size.*/
		pName = realloc(pName, i+1);
	} while (c != '\n');
	/*add the End of String char.*/
	pName[--i] = '\0';
	/*get length*/
	lenName = i+1;

	/*declare a new string with correct length*/
	char name[lenName];

	/*copy pName in name*/
	sprintf(name, "%s", pName);
	/*free pName memory allocation*/
	free(pName);

	printf("printf: %s '%s' You are %d years old\n", hello, name, age);

	return 1;
}
