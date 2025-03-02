#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPasswordFormat(const char *password){
    if (strlen(password) != 9){
        return 0;
    }
    for (int i = 0; i < 3; i++){
        if(!islower(password[i])){return 0;}
    }

    for (int i = 3; i < 5; i++){
        if(!isdigit(password[i])){return 0;}
    }

    for (int i = 5; i < 7; i++){
        if(!isdigit(password[i])){return 0;}
    }
    if (password[7] != '.'){return 0;}

    for (int i = 8; i < 10; i++){
        if(!isdigit(password[i])){return 0;}
    }
    
    return 1;
}

int main(){
    const char *testPasswords[] = {
        "mar0523.jd",     
        "jan3099.ab",     
        "MAR02e3.jd",     
        "mar5a23.jw",     
        "mdr0523jd",     
        "mar0523.j",      
        "mar0523.jek",        
        "feb1223..jd",    
        ""              
    };
    int numTests = sizeof(testPasswords) / sizeof(testPasswords[0]);

    for (int i = 0; i < numTests; i++) {
        printf("Testing password: \"%s\"\n", testPasswords[i]);
        if (isPasswordFormat(testPasswords[i])) {
            printf("Result: Valid (matches format)\n");
        } else {
            printf("Result: Invalid (does not match format)\n");
        }
        printf("\n");
    }

    return 0;
}