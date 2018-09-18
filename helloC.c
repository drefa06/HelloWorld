#include <stdio.h>
#include <stdlib.h> //absolutelly needed for malloc

int main(void) {
    char* hello = "Hello";

    int age;
    printf("Enter your age: ");
    scanf("%d",&age);    //because scanf get ONLY the number and keep '\n' in buffer, you MUST do the following before continuing
    fflush(stdin);       //fflush stdin does not work every time, so we also need the next lines
    int c;
    while ((c = getchar()) != '\n' && c != EOF){ }

    printf("Enter your name: ");
    //scanf("%s",&name);  //Works well for %c, %i, %d but not suitable for string, it would work with char[N] is declared except if separator(newline, tab or space) is present. In this case, it take only the 1st word.
    //fgets(name,64,stdin); //fgets take all the sentence with separator but you must declare a char[N], not a char*
    //Solution is quite complex...
    int lenName=0;
    char *pName = malloc(1);    //init name with a minimal lenght size...
    
    int i=0;
    do {
        c=getchar();                  //Use getchar to get each char one after the other
        pName[i++]=(char)c;           //put it in pName
        pName = realloc(pName,i+1);   //realloc with a new size.
    } while (c!='\n');
    pName[--i] = '\0';                //add the End of String char.
    lenName=i+1;                      //get length
    char name[lenName];               //declare a new string with correct length
    sprintf(name,"%s",pName);         //copy pName in name
    free(pName);                      //free pName memory allocation

    printf("printf: %s '%s' You are %d years old\n",hello,name,age);    
    //we can replace printf by puts but we cannot use 'format' in puts:
    char putsStr[50]; //be carefull to declare an enough long newstr...
    sprintf(putsStr,"puts: %s '%s' You are %d years old",hello,name,age); //we need to concatenate the string
    puts(putsStr); //then print it
    //we could also print char by char with putchar...
    char putcharStr[50];
    sprintf(putcharStr,"putchar: %s '%s' You are %d years old\n",hello,name,age); //we need to concatenate the string
    printf("putchar: ");
    for(i=0;putcharStr[i]!='\0';i++){ //'\0' is end of line char
        putchar(putcharStr[i]);
    }
    putchar('\n');


    return(1);
}
