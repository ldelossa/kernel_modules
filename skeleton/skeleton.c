#include <linux/module.h>
#include <linux/init.h>

static int m_init(void){
    pr_info("");
    return 0;
}

static void m_exit(void){
    pr_info("");
}

module_init(m_init);
module_exit(m_exit);

MODULE_AUTHOR("Author");
MODULE_LICENSE("GPL v2");
