#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("meow");
MODULE_DESCRIPTION("hello world meow");

static int __init hello_init(void) {
    return 0;
}

static void __exit hello_exit(void) {
}

module_init(hello_init);
module_exit(hello_exit);
