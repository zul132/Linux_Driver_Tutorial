#include <linux/module.h>
#include <linux/init.h>

/* Meta Information */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Fathima TAMIZH GNU/LINUX");
MODULE_DESCRIPTION("A Hello World LKM");

/**
 * @brief This function is called, when the module is loaded into the kernel
 */
static int __init ModuleInit(void) {
	// print() cannot be used here as there is no console to print to
	// printk() will print output to the kernel logs 
	printk("Hello, Kernel!\n");
	return 0;
}

/**
 * @brief This function is called, when the module is removed from the kernel
 */
static void __exit ModuleExit(void) {
	printk("Goodbye, Kernel!\n");
}

// set the function to be called when module is loaded into kernel
module_init(ModuleInit);
// set the function to be called when module is removed from kernel
module_exit(ModuleExit);
