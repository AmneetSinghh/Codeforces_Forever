#include <cstdio>
int a[10], c, i, s[7] = {1869, 6198, 1896, 1689, 1986, 1968, 1698};
int main(){
    while((i = getchar()) != '\n')
        ++ a[i - 48];
    -- a[1], -- a[6], -- a[8], -- a[9];
    for (i=1;i <= 9;i++)
        while(a[i]--)
            c = (c * 10 + i) % 7, printf("%d", i);
    printf("%d", s[c]);
    while(a[0]--)
        printf("0");
    return 0;
}