#include <hello1.h>

MODULE_AUTHOR("Yevhenii Holovatenko");
MODULE_DESCRIPTION("Lab5 Module hello2.c");
MODULE_LICENSE("Dual BSD/GPL");

static uint myParam = 1;
module_param(myParam, uint, 0444);
MODULE_PARM_DESC(myParam, "My description");

static int __init hello2_init(void)
{
    pr_emerg("Calling print_hello() from hello2...\n");
    print_hello(myParam);
    return 0;
}

static void __exit hello2_exit(void)
{
}

module_init(hello2_init);
module_exit(hello2_exit);
