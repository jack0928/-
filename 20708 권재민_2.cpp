#include <stdio.h>

int add(int a, int b)    
{
    return a + b;    
}

int main()
{
    int num1, m, n;
    printf("숫자 2개를 입력하세요:");
    scanf("%d %d", &m, &n); 
    

    num1 = add(m, n);     

    printf("%d\n", num1);   

    return 0;
}
