# Thesis

## Cache_Intel

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


## Cache_ARM

To know the details of cache latency, the best replacement policy clone this repo

This repo is inspired by ccBench by Christopher where I added the architecture of Cortex A-35 and changed the cache details accordingly where the replacmentpolicy is set to default to PLRU as manufacturer does not allow to change the policy.

## Installation

### User-space Version

    sudo apt install msr-tools
    git clone https://github.com/CharmyS/thesis.git
    cd thesis/Cache_ARM
    make user

## Results

## Intel
https://teams.microsoft.com/l/entity/com.microsoft.teamspace.tab.wiki/tab::e453f2db-c305-4e14-ba2d-a5757c634d97?context=%7B%22subEntityId%22%3A%22%7B%5C%22pageId%5C%22%3A2%2C%5C%22sectionId%5C%22%3A11%2C%5C%22origin%5C%22%3A2%7D%22%2C%22channelId%22%3A%2219%3A90c18f79f2ee4fc1824cba1af8184310%40thread.skype%22%7D&tenantId=0ecff5a9-4bef-4a7b-96ec-a96579b4ac37

## ARM
https://teams.microsoft.com/l/entity/com.microsoft.teamspace.tab.wiki/tab::e453f2db-c305-4e14-ba2d-a5757c634d97?context=%7B%22subEntityId%22%3A%22%7B%5C%22pageId%5C%22%3A2%2C%5C%22sectionId%5C%22%3A13%2C%5C%22origin%5C%22%3A2%7D%22%2C%22channelId%22%3A%2219%3A90c18f79f2ee4fc1824cba1af8184310%40thread.skype%22%7D&tenantId=0ecff5a9-4bef-4a7b-96ec-a96579b4ac37

## Running the RT kernel on intel kaby lake
https://teams.microsoft.com/l/entity/com.microsoft.teamspace.tab.wiki/tab::e453f2db-c305-4e14-ba2d-a5757c634d97?context=%7B%22subEntityId%22%3A%22%7B%5C%22pageId%5C%22%3A2%2C%5C%22sectionId%5C%22%3A12%2C%5C%22origin%5C%22%3A2%7D%22%2C%22channelId%22%3A%2219%3A90c18f79f2ee4fc1824cba1af8184310%40thread.skype%22%7D&tenantId=0ecff5a9-4bef-4a7b-96ec-a96579b4ac37
