cmd_/root/modules/set_task/Module.symvers := sed 's/ko$$/o/' /root/modules/set_task/modules.order | scripts/mod/modpost     -o /root/modules/set_task/Module.symvers -e -i Module.symvers   -T -
