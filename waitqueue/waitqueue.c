#include <linux/module.h>
#include <linux/init.h>
#include <linux/wait.h>
#include <linux/sched.h>
#include <linux/sched/signal.h>

DECLARE_WAIT_QUEUE_HEAD(q);
DECLARE_MUTEX(m);
int x = 0;

static int thread_do(void *data) {
    
}

static int m_init(void){
    pr_info("waitqueues: module loaded\n");

    pr_info("creating wait entry\n");
    DEFINE_WAIT(wait);

    pr_info("adding to wait queue\n");
    add_wait_queue(&q, &wait);

    while (!x) {
        pr_info("condition not true, preparing to wait\n");
        prepare_to_wait(&q, &wait, TASK_INTERRUPTIBLE);
        if (signal_pending(current)) {
             pr_info("handling signal");
             return 0;
        }
        schedule();
    }
    finish_wait(&q, &wait);

    return 0;
}

static void m_exit(void){
    pr_info("");
}

module_init(m_init);
module_exit(m_exit);

MODULE_AUTHOR("Author");
MODULE_LICENSE("GPL v2");
