cmd_/root/modules/thread_info/modules.order := {   echo /root/modules/thread_info/thread_info.ko; :; } | awk '!x[$$0]++' - > /root/modules/thread_info/modules.order
