cmd_/root/modules/skeleton/Module.symvers := sed 's/ko$$/o/' /root/modules/skeleton/modules.order | scripts/mod/modpost     -o /root/modules/skeleton/Module.symvers -e -i Module.symvers   -T -
