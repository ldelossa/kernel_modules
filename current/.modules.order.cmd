cmd_/root/modules/current/modules.order := {   echo /root/modules/current/current.ko; :; } | awk '!x[$$0]++' - > /root/modules/current/modules.order
