cmd_/root/modules/skeleton/modules.order := {   echo /root/modules/skeleton/skeleton.ko; :; } | awk '!x[$$0]++' - > /root/modules/skeleton/modules.order
