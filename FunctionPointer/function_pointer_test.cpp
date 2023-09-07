#include <stdio.h>

int AddFunc(int a, int b) {
    return a+b;
}
int SubFunc(int a, int b) {
    return a-b;
}

int (*func_pointer) (int a,int b); //define function pointer


int main()
{
    int a = 3;
    int b = 1;
    func_pointer = AddFunc;
    int ret1 = func_pointer(3, 1);
    printf("Call Add Func, return value is %d\n", ret1);

    func_pointer = SubFunc;
    int ret2 = func_pointer(3, 1);
    printf("Call Sub Func, return value is %d\n", ret2);
    return 0;
}