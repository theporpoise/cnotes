#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
 
    printf("first variable\n");
    
    int arg1 = atoi(argv[1]);

    printf("%d\n", arg1);

    // psuedocode:
    // iterate through argv arguement to count the number of args
    // divide up the number into it's 3 pieces, based on count strncpy(1, 2, numcopy
    // maybe use % for the count divider
    //
    int count = 0;

    // for (i = 0, )

    printf("int count is %d\n", count);
    // printf(" int size is %d\n", sizeof(arg1));
 
    printf("learning to use the gets function, using stdin\n");

    char string[256];

    printf("please enter a long string: ");

    fgets( string, 256, stdin);

    printf("you entered in %s", string);

    printf("\n");

    return 0;

}

