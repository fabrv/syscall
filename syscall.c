#include <linux/kernel.h>

asmlinkage long hello_syscall(void)
{
    printk("Hello syscall :). \n");
    return 0;
}