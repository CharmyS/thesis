


## Installation

### User-space Version

    sudo apt install msr-tools
    git clone https://github.com/CharmyS/thesis.git
    cd thesis/Cache_Intel
    make user


### Kernel Module
*Note: The following is not necessary if you would just like to use the user-space version.*

    git clone https://github.com/CharmyS/thesis.git
    cd thesis/Cache_Intel
    make kernel

To load the kernel module, run:

    sudo insmod kernel/nb.ko # this is necessary after every reboot


