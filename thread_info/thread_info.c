#include <linux/module.h>
#include <linux/init.h>
#include <linux/thread_info.h>

static int m_init(void){
    struct task_struct *t = current;
    pr_info("comm: %s", t->pid);
    return 0;
}

static void m_exit(void){
    pr_info("unloading\n");
}

module_init(m_init);
module_exit(m_exit);

MODULE_AUTHOR("Author");
MODULE_LICENSE("GPL v2");
