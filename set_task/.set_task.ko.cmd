cmd_/root/modules/set_task/set_task.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o /root/modules/set_task/set_task.ko /root/modules/set_task/set_task.o /root/modules/set_task/set_task.mod.o;  true