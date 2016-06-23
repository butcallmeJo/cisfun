int square_root(int n)
{
    int i;
    if (n==1) {
        return 1;
    }
    for (i=0; i<n; i++) {
        if (i*i == n) {
            return i;
        }
    }
    return -1;
}