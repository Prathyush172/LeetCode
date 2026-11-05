bool detectCapitalUse(char* word) {
    int upper=0;
    int lower=0;
    int n=strlen(word);
    for(int i=0;i<n;i++)
    {
        if(word[i]>='A' && word[i]<='Z')
        {
            upper++;
        }
        else{
            lower++;
        }
    }
    if(n==upper)
    {
        return true;
    }
    if(n==lower)
    {return true;
    }
    if(word[0]>='A' && word[0]<='Z' && lower==n-1)
    {
        return true;
    }
    return false;
}