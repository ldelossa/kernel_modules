cmd_/root/modules/init_task/Module.symvers := sed 's/ko$$/o/' /root/modules/init_task/modules.order | scripts/mod/modpost     -o /root/modules/init_task/Module.symvers -e -i Module.symvers   -T -
