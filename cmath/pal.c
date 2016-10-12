#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    
    //int i  = 0;
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
    //printf("half length is %d length is %d\n", half, length );

    int mod = 0;

    if ((length % 2) > 0){
        mod = 1;
    } else {
        mod = 2;
    }

    //printf("the size of the mid inc is %d\n", mod);

    // print number string and digit values at location
    /*
    for (i = 0;  i < length; i++)
    {
        printf("the %d digit is %c\n", (i), string[i]);
    }
    */
// old code for accessing part of string in print f.    
//    strncpy(front, string, half );
//    printf("%*.*s\n", half, half, front);

// turning front and back into integers

    int ifront;
    int iback;
    int imiddle;
    char rfront[half];
    int irfront;

    int i2;

    for (i2=0; i2 < half ; i2++)
    {
        rfront[i2] = string[half - i2 -1];
    }

    strncpy(front, string, half);
    strncpy(back, (string+half+(mod%2)), (half));
    strncpy(middle, (string+half-(mod/2)), mod);

    ifront = atoi(front);
    iback  = atoi(back);
    imiddle = atoi(middle);
    irfront = atoi(rfront);
    
    
    printf("front is %d\n", ifront);
    printf("back is %d\n", iback);
    printf("middle is %d\n", imiddle);
    printf("rfront is %d\n", irfront);
    
    int reverse(int one)
    {
        char str[256];
        sprintf(str, "%d", one);
        // printf("sprintf str is %s\n", str);

        int i3 = 0;
        char reverse[half];
        for (i3=0; i3 < half ; i3++)
        {
            reverse[i3] = str[half - i3 -1];
        }

        return atoi(reverse);
    }

    /*
    char rstring[256];

    size_t len = strlen(front);
    size_t i;
    size_t k = len;

    for (i = 0; i < len; i++)
    {
        rstring[k] = front[i];
        k--;
    }
    */

//    printf("rstring is %s\n", rstring);

// to do
// make this reverse string a function
// use this function to reverse the front string
// after the front string has been modified
// if there is a carry.  then append this string
// to the back end to get the final number.
// this avoids the trailing zero error.

/*
    char *reversechar(int one, char *modchar)
    {
        char str[256];
        sprintf(str, "%d", one);
        // printf("sprintf str is %s\n", str);

        int i3 = 0;
        char reverse[half];
        for (i3=0; i3 < half ; i3++)
        {
            reverse[i3] = str[half - i3 -1];
        }
        printf("reversechar is %s", reverse);
        *modchar = strcpy(*modchar, reverse); 
        return *modchar;    
    }


    //char *test;
    char *test = reversechar(ifront, back );
    printf("reverse front is %s\n", test);

check to see if it's already a number palindrone.
* get the front of the string.  invert and compare to the
* back string.  if it's < then you don't have to increment.
* set back string to inverse front string. check middle string
* if length 1, done, if length 2, set to next palindrone number
* if back string is  > front string, set back string to front
* string.  increment middle number.  check middle number carry
* bit.  if no carry bit, done.  else, carry bit to front 
* string.  set back string to front string.  done.
*/ 
    if( length < 2 ) {
        printf("is already a palindrone\n");
        return 0;
    }
// there is a case to be handled when there is a zero in the 
// last position of front becuase C drops the leading zero.

    if( (ifront % 10) < 1 ) {
        printf("ifront has trailing zero which is bug\n");

        return 0;
    }



    if( irfront == iback ) {
        printf("number is already a palindrone\n");
        return 0;
    }

// there is a dif bt odd and even numbers.  even numbers
// don't have ot worry about updating middle


// handling even cases
    if( mod == 2) {
        printf("number is even digits \n");

        if( iback < irfront ) {
            iback = irfront;
            printf("next is %d%d\n", ifront, iback);
        return 0;
        }

        if( iback > irfront ) {
            ifront += 1;
            iback = reverse(ifront);
            printf("iback to reverse ifront +1 is %d\n", iback);
            printf("next is %d%d\n", ifront, iback);
        return 0;
        }
        
        printf("some error on even cases");
        return 0;
    }

    if( mod == 1) {
        printf("number has odd # of digits  \n");

        if( iback < irfront ) {
            iback = irfront;
            printf("next is %d%d%d\n", ifront, imiddle,  iback);
        return 0;
        }

        if( iback > irfront ) {

            printf("iback > irfront, increment middle\n");
            if( imiddle == 9 ) {
                printf("middle number is 9, increment front\n");
                ifront += 1;
                iback = reverse(ifront);
                imiddle = 0;
                printf("next is %d%d%d\n, middle should be 0\n", ifront, imiddle,  iback);
                return 0;
            }

            // printf("middle digit should not be zero\n");
            imiddle += 1;
            iback = reverse(ifront);
            printf("next is %d%d%d\n\n", ifront, imiddle,  iback);

            return 0;
        }
        
        printf("some error on odd cases");
        return 0;
    }





    return 0;

}

