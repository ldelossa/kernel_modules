cmd_/root/modules/current/Module.symvers := sed 's/ko$$/o/' /root/modules/current/modules.order | scripts/mod/modpost     -o /root/modules/current/Module.symvers -e -i Module.symvers   -T -
