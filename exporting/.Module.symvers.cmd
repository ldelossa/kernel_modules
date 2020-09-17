cmd_/root/modules/exporting/Module.symvers := sed 's/ko$$/o/' /root/modules/exporting/modules.order | scripts/mod/modpost     -o /root/modules/exporting/Module.symvers -e -i Module.symvers   -T -
