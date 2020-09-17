obj-m += set_task.o

kernel_dir=/lib/modules/$(shell uname -r)/build
.PHONY:
build:
	make -C $(kernel_dir) M=$(shell pwd)
