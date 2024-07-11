#include <iostream>

int main() {
    char name[30];
    char department;
    int test1, test2;
    double average;

    printf("Please input your name... ");
    scanf("%s", name);
    printf("Please select your department... (a:CS b:Bio c:Math) ");

    getchar();  

    scanf("%c", &department);
    printf("Please input your score on test 1... ");
    scanf("%d", &test1);
    printf("Please input your score on test 2... ");
    scanf("%d", &test2);

    average = float(test1 + test2) / 2;

    printf("+---------------------+----------+------+------+-------+\n");
    printf("|        Name         |Department|Test 1|Test 2|Average|\n");
    printf("+---------------------+----------+------+------+-------+\n");
    printf("|%-21s|%10c|%6d|%6d|%7.2f|\n", name, department, test1, test2, average);
    printf("+---------------------+----------+------+------+-------+\n");

    return 0;
}


