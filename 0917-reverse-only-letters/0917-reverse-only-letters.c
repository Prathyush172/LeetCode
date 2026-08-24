char* reverseOnlyLetters(char* s) {
    int l=0;
    int r=strlen(s)-1;
    while(l<r)
    {
        while(l<r && !isalpha(s[l]))
        {
            l++;
        }
        while(l<r && !isalpha(s[r]))
        {
            r--;
        }
        if(l<r)
        {
            char temp=s[l];
            s[l]=s[r];
            s[r]=temp;
            l++;
            r--;
        }

    }
    return s;
}