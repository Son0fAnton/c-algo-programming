//Way Too Long Words

// Solution 1
#include <stdio.h>
#include <string.h>
 
int main(){
    int n;
    char s[100];
 
    scanf("%d", &n);
    while(n--){
        scanf("%s", s);
 
        if(strlen(s) > 10){
            printf("%c%d%c\n", s[0], strlen(s) - 2, s[strlen(s) - 1]);
        } else {
            printf("%s\n", s);
        }
    }
}

// Solution 2
// #include <stdio.h>
// #include <string.h>
// int main(){
//     int n;
//     char str[100][100];
    
//     scanf("%d", &n);
//     for(int i =0; i < n; i++){
//         scanf("%s", str[i]);
        
//         if(strlen(str[i]) > 10){
//             printf("%c%d%c\n", str[i][0], strlen(str[i]) - 2, str[i][strlen(str[i]) - 1]);
//         } else {
//             printf("%s\n", str[i]);
//         }
//     }
// }

