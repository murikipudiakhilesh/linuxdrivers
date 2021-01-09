#KDIR=/home/parallels/workarea_akhilesh/linux
ifneq ($(KERNELRELEASE),)
	obj-m := helloworld.o
else
	KDIR 	?=/lib/modules/$(shell uname -r)/build
	PWD 	:=$(shell pwd)

#obj-m := helloworld.o

default:
	$(MAKE) -C $(KDIR) M=$(PWD) modules
endif
