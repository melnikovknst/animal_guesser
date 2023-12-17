#ifndef str_h
#define str_h


char* get_input(void) {
    char* input = (char*)malloc(0);
    int input_len = 0;
    int chr;
    
    while ((chr = getchar()) != '\n') {
        input = realloc(input, 1 + input_len++ * sizeof(char));
        input[input_len - 1] = chr;
    }
    
    return input;
}


//  units str1 and str2
char* concat(char* str1, char* str2) {
    int len = (int)strlen(str1);
    str1 = realloc(str1, (len + strlen(str2)) * sizeof(char));
    strcat(str1, str2);
    
    return str1;
}


#endif /* str_h */
