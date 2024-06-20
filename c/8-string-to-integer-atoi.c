int myAtoi(char* s) {
    bool started = false;
    int negative = 1;
    int i = 0;
    long long retval = 0;
    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] == ' ' && started == false) continue;
        else if(s[i] <= 57 && s[i] >= 48) {
            if(retval >= 2147483648) {
                if(negative == 1) return 2147483647;
                else return -2147483648;
            }        
            started = true;
            retval = retval * 10 + (s[i] - '0');
        }
        else if(s[i] == '-' && started == false) {
            negative = -1;
            started = true;
        }
        else if(s[i] == '+' && started == false) {
            negative = 1;
            started = true;
        }
        else break;
    }
    if(retval >= 2147483648) {
        if(negative == 1) return 2147483647;
        else return -2147483648;
    }
    return ((int)retval) * negative;
}
