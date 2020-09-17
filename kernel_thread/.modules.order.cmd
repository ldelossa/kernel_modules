cmd_/root/modules/kernel_thread/modules.order := {   echo /root/modules/kernel_thread/kernel_thread.ko; :; } | awk '!x[$$0]++' - > /root/modules/kernel_thread/modules.order
