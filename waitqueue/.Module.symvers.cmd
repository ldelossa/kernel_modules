cmd_/root/modules/waitqueue/Module.symvers := sed 's/ko$$/o/' /root/modules/waitqueue/modules.order | scripts/mod/modpost     -o /root/modules/waitqueue/Module.symvers -e -i Module.symvers   -T -
