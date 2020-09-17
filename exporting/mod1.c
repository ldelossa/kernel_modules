#include <linux/module.h>
#include <linux/init.h>

static unsigned long exported_symbol;

static int __init m_init(void){
    pr_info("module loaded\n");
    return 0;
}

static void __exit m_exit(void){
    pr_info("module unloaded\n");
}

module_init(m_init);
module_exit(m_exit);

MODULE_AUTHOR("Author");
MODULE_LICENSE("GPL v2");
EXPORT_SYMBOL(exported_symbol);
