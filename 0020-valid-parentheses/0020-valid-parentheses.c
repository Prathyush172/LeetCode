#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool isValid(char* s) {
    int len = strlen(s);
    if (len % 2 != 0) {
        return false;
    }
    
    char* stack = (char*)malloc(len * sizeof(char));
    int top = -1;
    
    for (int i = 0; i < len; i++) {
        char c = s[i];
        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        }
        else {
            if (top == -1) {
                free(stack);
                return false;
            }
            char p = stack[top--];
            if ((c == ')' && p != '(') || 
                (c == '}' && p != '{') || 
                (c == ']' && p != '[')) {
                free(stack);
                return false;
            }
        }
    }
    
    bool result = (top == -1);
    free(stack);
    return result;
}
