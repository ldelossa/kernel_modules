cmd_/root/modules/set_task/modules.order := {   echo /root/modules/set_task/set_task.ko; :; } | awk '!x[$$0]++' - > /root/modules/set_task/modules.order
