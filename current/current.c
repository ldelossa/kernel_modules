#include <linux/module.h>
#include <linux/init.h>
#include <linux/thread_info.h>
#include <linux/sched.h>

static int m_init(void){
    struct task_struct *t = current;
    pr_info("pid: %d, comm: %s\n", t->pid, t->comm);
    return 0;
}

static void m_exit(void){
    pr_info("unloading\n");
}

module_init(m_init);
module_exit(m_exit);

MODULE_AUTHOR("Author");
MODULE_LICENSE("GPL v2");
