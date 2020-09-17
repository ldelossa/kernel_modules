cmd_/root/modules/init_task/modules.order := {   echo /root/modules/init_task/init_task.ko; :; } | awk '!x[$$0]++' - > /root/modules/init_task/modules.order
