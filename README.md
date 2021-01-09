# linuxdrivers
Learning linux device drivers



1.)Required lib before making linux build
	sudo apt-get install git fakeroot build-essential ncurses-dev xz-utils libssl-dev bc flex libelf-dev bison
2.)Setting up your git to save your work
	sudo apt-get install git
   configuring git in your system.
=====================================
	git config --global user.name "<your user name you already created>"
	git config --global user.email "<your mail-id linked to git>"
	
	setting vi as your git editor
=======================================
	git config --global core.editor "vi"

3.) clone linux-kernel source
	git clone git://git.kernel.org/pub/scm/linux/kernel/git/stable/linux-stable.git
	git checkout <v4.15>

Now your are checking out specific version of kernel source( My system kernel is 4.15 so I checked out v4.15).


Compile the kernel
=================
make menuconfig -------> save the config with out changing anything
make ----------> This will compile the linux kernel
make modules_install ----->This will install the modules to the default modules dir
make install --> This will install the img to /boot/ (dir)





