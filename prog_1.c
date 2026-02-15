#include <stdio.h>
#include <string.h>

int check(char aa[]) {
    char ch[100];
    int x = -1;
    int i;
    int len = strlen(aa);   

    for (i = 0; i < len; i++) {
        if (aa[i] == '(' || aa[i] == '[' || aa[i] == '{') {
            x += 1;
            ch[x] = aa[i];
        } 
        else if (aa[i] == ')' || aa[i] == ']' || aa[i] == '}') {
            if (x == -1) {
                return 0;
            }

            char last = ch[x];
            x -= 1;

            if (aa[i] == ']' && last != '[') return 0;
            if (aa[i] == ')' && last != '(') return 0;
            if (aa[i] == '}' && last != '{') return 0;
        }
    }

    if (x == -1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char datas[3][50] = {
        "a + (b - c)",
        "a + (b - c) * (d",
        "m + [a - b * (c + d * {m)]"
    };

    int j;
    for (j = 0; j < 3; j++) {
        printf("output expression: %s\n", datas[j]);
        if (check(datas[j]) == 1) {
            printf("is balanced\n\n");
        } else {
            printf("is not balanced\n\n");
        }
    }

    return 0;
}
