#include <linux/module.h>
#include <linux/init.h>
#include <linux/sched.h>
#include <linux/sched/signal.h>

static int m_init(void){
    pr_info("processes module initialized\n");
    struct task_struct *t;
    for_each_process(t){
        pr_info("State: %d, SessionID: %d, ProcessID: %zu, TGID: %zu\n", t->state, t->sessionid, t->pid, t->tgid);
    }
    return 0;
}

static void m_exit(void){
    pr_info("processes module exited\n");
}

module_init(m_init);
module_exit(m_exit);

MODULE_AUTHOR("Author");
MODULE_LICENSE("GPL v2");
