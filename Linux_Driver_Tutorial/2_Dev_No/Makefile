# append the file you want to build to the 'obj-m' variable.
obj-m += dev_nr.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

# To clean everything that we build
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
