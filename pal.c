#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    
    int i  = 0;
    char string[256];
    char front[256];
    char back[256];
    char middle[256];

    printf("please enter a number: ");

    fgets( string, 256, stdin);

    int length = strlen(string) -1;

    printf("you entered in %s\n", string);
    printf("your number is %d digits long\n", length);

    //strlen is going to count the terminal character, so-1    
    int half  = (length) / 2;
    printf("half of the strings length is %d\n", half );

    int mod = 0;

    if ((length % 2) > 0){
        mod = 1;
    } else {
        mod = 2;
    }

    printf("the size of the mid inc is %d\n", mod);

    // print number string and digit values at location
    for (i = 0;  i < length; i++)
    {
        printf("the %d digit is %c\n", (i), string[i]);
    }
// old code for accessing part of string in print f.    
//    strncpy(front, string, half );
//    printf("%*.*s\n", half, half, front);

// turning front and back into integers

    int ifront;
    int iback;
    int imiddle;

    strncpy(front, string, half);
    strncpy(back, (string+half+(mod%2)), (half));
    strncpy(middle, (string+half-(mod/2)), mod);

    ifront = atoi(front);
    iback  = atoi(back);
    imiddle = atoi(middle);
    
    printf("front is %d\n", ifront);
    printf("back is %d\n", iback);
    printf("middle is %d\n", imiddle);

/*check to see if it's already a number palindrone.
* get the front of the string.  invert and compare to the
* back string.  if it's < then you don't have to increment.
* set back string to inverse front string. check middle string
* if length 1, done, if length 2, set to next palindrone number
* if back string is  > front string, set back string to front
* string.  increment middle number.  check middle number carry
* bit.  if no carry bit, done.  else, carry bit to front 
* string.  set back string to front string.  done.
*/ 

    return 0;

}

