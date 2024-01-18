/*a) Using one printf statement with no conversion specifications.
b) Using one printf statement with four conversion specifications.
c) Using four printf statements.*/

#include<stdio.h>
main(void){
    printf("1,2,3,4");
    printf("%d %d %d %d",1,2,3,4);
    printf("%d", 1);
    printf("%d", 2);
    printf("%d", 3);
    printf("%d", 4);
}
