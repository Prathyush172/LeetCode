int maxDepth(char* s) {
    int d=0;
    int max_d=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='(')
        {
            d++;
            if(d>max_d)
            {
                max_d=d;
            }
        }
        else if(s[i]==')')
        {
            d--;
        }
    }
    return max_d;
}