#include <stdio.h>
int main(){
int lengthOfLongestSubstring(char *s){
    int last[200] 
     int i;
    for (i = 0; i <200){
        last[i]=-1;
    int start = 0;
    int maxLength = 0;
    }
    for (i = 0; s[i] != '\0'; i++){
        unsigned char ch = s[i];
        if (last[ch] >= start)
            start = last[ch] + 1;
        last[ch]=i;
        int lenght = i-start + 1;
        if (lenght > maxLenght)
          maxLentght=lenght
    }
    return lenght
}
int main(){
    char s[] = "abcabcbb";
    printf("%d\n"lenghtoflongestsubstring);
    return 0;
}
}
