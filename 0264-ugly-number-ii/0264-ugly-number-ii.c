int nthUglyNumber(int n) {
    int dp[n];

    dp[0] = 1;

    int i2 = 0, i3 = 0, i5 = 0;

    for (int i = 1; i < n; i++) {

        int a = dp[i2] * 2;
        int b = dp[i3] * 3;
        int c = dp[i5] * 5;

        int min = a;

        if (b < min)
            min = b;

        if (c < min)
            min = c;

        dp[i] = min;

        if (min == a)
            i2++;

        if (min == b)
            i3++;

        if (min == c)
            i5++;
    }

    return dp[n - 1];
}