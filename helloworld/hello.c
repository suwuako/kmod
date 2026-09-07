#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("meow");
MODULE_DESCRIPTION("hello world meow");

static int __init hello_init(void) {
    printk("meow: hi my name is module\n");
    return 0;
}

static void __exit hello_exit(void) {
    printk("meow: bye my name is module and im done haha\n");
}

module_init(hello_init);
module_exit(hello_exit);
