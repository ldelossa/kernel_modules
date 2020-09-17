#include <linux/module.h>
#include <linux/init.h>
#include <linux/delay.h>
#include <linux/kthread.h>

static struct task_struct *kt;

static int thread_do(void *data) {
    for (;;) {
        if (kthread_should_stop()) {
            pr_info("kthread should stop returned true");
            return 0;
        }
        pr_info("I'm a kernel thread!!\n");
        pr_info("sleeping\n");
        msleep(1000);
    }
    return 0;
}

static int m_init(void){
    pr_info("launching kernel thread\n");
    char *ktName = "ldelossa-kthread";
    kt = kthread_run(thread_do, 0, ktName);
    return 0;
}

static void m_exit(void){
    pr_info("killing our kernel thread\n");
    if (kthread_stop(kt) == -1) {
        pr_info("could not kill thread\n");
    } else {
        pr_info("killed thread\n");
    }
}

module_init(m_init);
module_exit(m_exit);

MODULE_AUTHOR("Author");
MODULE_LICENSE("GPL v2");
