#include<linux/module.h>
#include<linux/init.h>
#include<linux/kernel.h>

MODULE_LICENSE("DUAL BSD/GPL");

static int initialization_func(void)
{
	printk(KERN_ALERT "hello world");
	return 0;
}



static void cleanup_func(void)
{
	printk(KERN_ALERT "bye bye");
	return;
}

module_init(initialization_func); 
module_exit(cleanup_func);

//MODULE_AUTHOR(AKHILESH);
//MODULE_DESCRIPTION(SAMPLE MODULE);
//MODULE_ALIAS(HELLOW WORLD);


