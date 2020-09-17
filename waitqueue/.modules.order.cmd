cmd_/root/modules/waitqueue/modules.order := {   echo /root/modules/waitqueue/waitqueue.ko; :; } | awk '!x[$$0]++' - > /root/modules/waitqueue/modules.order
