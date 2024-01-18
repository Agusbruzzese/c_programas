/*table of squares and cubes*/

#include<stdio.h>

main(void){
    //int num1, num2;

   int sq0 = 0;
   int cu0 = 0;

   int sq1 = 1;
   int cu1 = 1;

   int sq2 = 2 * 2;
   int cu2 = 4 *2;

   int sq3 = 3 * 3;
   int cu3 = 9 * 3;

   int sq4 = 4 * 4;
   int cu4 = 16 * 4;

   int sq5 = 5 * 5;
   int cu5 = 25 * 5;

   int sq6 = 6 * 6;
   int cu6 = 36 * 6;

   int sq7 = 7 * 7;
   int cu7 = 49 * 7;

   int sq8 = 8 * 8;
   int cu8 = 64 * 8;

   int sq9 = 9 * 9;
   int cu9 = 81 * 9;

   int sq10 = 10 * 10;
   int cu10 = 100 * 10;

    printf(" 0|   0|    0|\n 1|   1|    1|\n");
    printf(" 2|   %d|    %d|\n",sq2, cu2);
    printf(" 3|   %d|   %d|\n",sq3, cu3);
    printf(" 4|  %d|   %d|\n",sq4, cu4);
    printf(" 5|  %d|  %d|\n",sq5, cu5);
    printf(" 6|  %d|  %d|\n",sq6, cu6);
    printf(" 7|  %d|  %d|\n",sq7, cu7);
    printf(" 8|  %d|  %d|\n",sq8, cu8);
    printf(" 9|  %d|  %d|\n",sq9, cu9);
    printf("10| %d| %d|\n",sq10, cu10);

}

