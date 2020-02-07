#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

int main()
{
    long int resultado = syscall(548);
    printf("System call returned %ld\n", resultado);
    return 0;
}
