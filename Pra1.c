#include <stdio.h>
#include <string.h>

int main() {
    char str[100], op[10], ch[10], num[10];
    int j, i = 0, m = 0, k = 0;

    printf("Enter the equation value: ");
    scanf("%s", str);

    int l = strlen(str);
    for (j = 0; j < l; j++) {
        if ((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z')) {
            ch[i] = str[j];
            i++;
        } else if (str[j] >= '0' && str[j] <= '9') {
            num[m] = str[j];
            m++;
        } else {
            op[k] = str[j];
            k++;
        }
    }

    printf("\nOperator: {");
    for (j = 0; j < k; j++) {
        printf("%c", op[j]);
        if (j < k - 1) printf(", ");
    }
    printf("}\nCharacter: {");
    for (j = 0; j < i; j++) {
        printf("%c", ch[j]);
        if (j < i - 1) printf(", ");
    }
    printf("}\nNumber: {");
    for (j = 0; j < m; j++) {
        printf("%c", num[j]);
        if (j < m - 1) printf(", ");
    }
    printf("}\n");

    return 0;
}
