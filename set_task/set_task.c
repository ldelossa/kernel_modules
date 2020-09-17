#include <linux/module.h>
#include <linux/init.h>
#include <linux/sched.h>
#include <linux/sched/signal.h>
#include <linux/string.h>

static int m_init(void){
    char *process_name = "fork";
    pr_info("Looking for: %s\n", process_name);
    struct task_struct *t;
    for_each_process(t){
        char task_comm[TASK_COMM_LEN];
        get_task_comm(task_comm, t);
        if (strcmp(task_comm, process_name) == 0)
            pr_info("found task: %s pid: %ld\n", t->comm, t->pid);
    }
    return 0;
}

static void m_exit(void){
    pr_info("exiting");
}

module_init(m_init);
module_exit(m_exit);

MODULE_AUTHOR("Author");
MODULE_LICENSE("GPL v2");
