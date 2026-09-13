char * defangIPaddr(char * address)
{
int original_len = strlen(address);
int new_len = original_len + 6;
    
    char* result = (char*)malloc((new_len + 1) * sizeof(char));
    
    int j = 0;
    
    for (int i = 0; address[i] != '\0'; i++) {
        if (address[i] == '.') {
            result[j++] = '[';
            result[j++] = '.';
            result[j++] = ']';
        } else {
            result[j++] = address[i];
        }
    }
    result[j] = '\0'; 
    return result;
}