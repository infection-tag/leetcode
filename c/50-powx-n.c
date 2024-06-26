double myPow(double x, int n) {

    double retval = 1;

    if(x == 1) return 1;
    if(x == -1) {
        if(n % 2 == 0) return 1;
        return -1;
    }

    if(n > 2147483646 || n < -2147483646) return 0;

    if(n < 0) {
        long long n2 = n * -1;
        for(long long i = 0; i < n2; i++) {
            retval /= x;
        }
    }

    else {
        for(int i = 0; i < n; i++) {
            retval *= x;
        }
    }

    return retval;
}
