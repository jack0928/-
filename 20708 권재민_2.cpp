#include <stdio.h>

int add(int a, int b)    
{
    return a + b;    
}

int main()
{
    int num1, m, n;
    printf("���� 2���� �Է��ϼ���:");
    scanf("%d %d", &m, &n); 
    

    num1 = add(m, n);     

    printf("%d\n", num1);   

    return 0;
}
