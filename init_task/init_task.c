#include <linux/module.h>
#include <linux/init.h>
#include <linux/sched.h>
#include <linux/thread_info.h>

extern struct task_struct init_task;

static int m_init(void){
    struct task_struct *task;

    for (task = current; task != &init_task; task = task->parent)
        ;

    pr_info("pid: %d, comm: %s\n", task->pid, task->comm);
    return 0;
}

static void m_exit(void){
    pr_info("unloading\n");
}

module_init(m_init);
module_exit(m_exit);

MODULE_AUTHOR("Author");
MODULE_LICENSE("GPL v2");
