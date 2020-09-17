#include <linux/module.h>
#include <linux/init.h>
#include <linux/sched.h>
#include <linux/oom.h>

static int m_init(void){
    struct task_struct *p, *t;
    for_each_process_thread(p, t) {
        pr_info("tgid=%d, pid=%d, comm=%s, state=%ld\n", 
                t->pid, t->pid, t->comm, t->state);
    }
    return 0;
}

static void m_exit(void){
    pr_info("module unloaded\n");
}

module_init(m_init);
module_exit(m_exit);

MODULE_AUTHOR("Author");
MODULE_LICENSE("GPL v2");
