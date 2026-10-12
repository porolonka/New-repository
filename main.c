#include <stdio.h>

int main() {
    int a, b;
    
    printf("Программа запущена\n");
    printf("Введите первое целое число: ");
    scanf("%d", &a);
    
    printf("Введите второе целое число: ");
    scanf("%d", &b);
    printf("Результат: %d\n", a / b);
    return 0;
}
