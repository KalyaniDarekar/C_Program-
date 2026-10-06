#include <stdio.h>
int main(){
    int x = 5;
    printf("%d\n",x);
    x = x + 6;
    printf("%d\n",x);
    x++; //post increment
    printf("%d\n",x);
    ++x;  // pre increment
    printf("%d\n",x);
// consider privious X value further
 x--; //post decrement
    printf("%d\n",x);
    --x;  // pre decrement
    printf("%d\n",x);
}