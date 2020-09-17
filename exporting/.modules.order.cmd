cmd_/root/modules/exporting/modules.order := {   echo /root/modules/exporting/mod1.ko; :; } | awk '!x[$$0]++' - > /root/modules/exporting/modules.order
