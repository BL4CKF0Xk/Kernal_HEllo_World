#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int __init example_init(void)
{
	printk(KERN_INFO "HEllo, World!\n");
	return 0;
}

static void __exit example_exit(void)
{
	printk(KERN_INFO "GoodBye, World!\n");
}

module_init(example_init);
module_exit(example_exit);
