#include <stdlib.h>

bool isPalindrome(int x) {
    long long temp = (long long)x; /* modifiable input */
    if(x < 0) return false;

    long long reverse = 0;
    int tens;
    for(tens = 0; /* x % (10^tens) != x */ temp != 0; tens++) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }

    if(reverse != x) return false;

/*    
    char* num = (char*)malloc(sizeof(char) * (tens + 1));
    sprintf(num, "%d", x);
    for(int i = 0; i < tens / 2; i++) {
        if(num[i] != num[tens - i]) return false;
    }
*/
    return true;
}
