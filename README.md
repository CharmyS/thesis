# thesis

## Cache_intel

To know the details of cache latency, the best replacement policy clone this repo

This repo is inspired by nanobench by Andreas where I added the architecture of Kabylake and changed the cache details accordingly.

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

