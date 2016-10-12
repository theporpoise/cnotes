#include <stdio.h>
#include <stdlib.h>

main() {
    FILE * fp;

    fp = fopen("score.dat", "w");
    fprintf(fp, " %s %s %s %d", "we", "are", "in", "2016");
    fclose(fp); 

    return 0;
}
