#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    
    //this is older code where i was using a passed in argument instaed of using 
    //fgets to get a string
    // printf("first variable\n");
    
    //int arg1 = atoi(argv[1]);

    //printf("%d\n", arg1);

    // psuedocode:
    // iterate through argv arguement to count the number of args
    // divide up the number into it's 3 pieces, based on count strncpy(1, 2, numcopy
    // maybe use % for the count divider
    //
    int i  = 0;

    // for (i = 0, )

    // printf("int count is %d\n", count);
    // printf(" int size is %d\n", sizeof(arg1));
 
    //printf("learning to use the gets function, using stdin\n");

    char string[256];
    char front[256];
    char back[256];
    char middle[256];

    printf("please enter a long string: ");

    fgets( string, 256, stdin);

    int length = strlen(string) -1;

    printf("you entered in %s\n", string);
    printf("your number is %d digits long\n", length);

    // strlen is going to count the terminal character, so you don't want to grab
    // the last one
    
    int half  = (length) / 2;
    printf("half of the strings length is %d\n", half );

    int mod = 0;

    if ((length % 2) > 0){
        mod = 1;
    } else {
        mod = 2;
    }

    printf("the size of the mid inc is %d\n", mod);

    // print first half of the string
    for (i = 0;  i < length; i++)
    {
        printf("the %d digit is %c\n", (i+1), string[i]);
    }


    printf("\n");

    return 0;

}

