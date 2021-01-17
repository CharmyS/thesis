
# Tools

## cacheSeq.py

This tool can be used to measure how many cache hits and misses executing an access sequence generates.
As an example, consider the following call:

    sudo ./cacheSeq.py -level 2 -sets 10-14,20,35 -seq "A B C D A? C! B?" 

The tool will make memory accesses to four different blocks in all of the specified sets of the second-level cache. Elements of the sequence that end with a `?` will be included in the performance counter measurements; the other elements will be accessed, but the number of hits/misses they generate will not be recorded. Elements that end with a `!` will be flushed (using the `CLFLUSH` instruction) instead of being accessed. The order of the accesses is as follows: First, block `A` will be accessed in all of the specified sets, then block `B` will be accessed in all of the specified sets, and so on.

Between every two accesses to the same set in a lower-level cache, the tool automatically adds enough accesses to the higher-level caches (that map to different sets and/or slices in the lower-level cache) to make sure that the corresponding lines are evicted from the higher-level cache and the access actually reaches the lower-level cache. These additional accesses are excluded from the performance counter measurements.

By default, the `wbinvd` instruction is called before executing the access sequence. This can be disabled with the `-noWbinvd` option. It is also possible to execute the `wbinvd` instruction between specific elements of an access sequence by inserting `<wbinvd>` at the corresponding location in the access sequence.

The tool has the following command-line options:

| Option                       | Description |
|------------------------------|-------------|
| `-seq <sequence>`            | Main access sequence. |
| `-loop <n>`                  | Number of times the main access sequence is executed. `[Default: n=1]` |
| `-seq_init <sequence>`       | Access sequence that is executed once in the beginning before the main sequence. |
| `-level <n>`                 | Cache level. `[Default: n=1]` |
| `-sets <sets>`               | Cache sets in which the access sequence will be executed. By default all cache sets are used, except number of sets of the higher level cache, which are needed for clearing the higher level cache. |
| `-cBox <n>`                  | CBox in which the access sequence will be executed. `[Default: n=1]` |
| `-noClearHL`                 | Do not clear higher level caches between accesses to the same set in a lower level cache. |
| `-noWbinvd`                  | Do not call `WBINVD` before each run. |
| `-sim <policy>`              | Simulate the given policy instead of running the experiment on the hardware. For a list of available policies, see `cacheSim.py`. |
| `-simAssoc <n>`              | Associativity of the simulated cache. `[Default: n=8]` |

## hitMiss.py

Similar to `cacheSeq.py`, but only outputs whether the last access of a sequence is a hit or a miss.

## cacheGraph.py

Generates an HTML file with a graph that shows the *ages* of all cache blocks after executing an access sequence. The *age* of a block B is the number of fresh blocks that need to be accessed before B is evicted.

The tool supports all of the command-line options of `cacheSeq.py`, except the `-loop` option. In addition to that, the following options are supported:

| Option                       | Description |
|------------------------------|-------------|
| `-blocks <blocks>`           | Only determine the ages of the blocks in the given list. `[Default: consider all blocks in the access sequence]` |
| `-maxAge <n>`                | The maximum age to consider. `[Default: 2*associativity]` |
| `-output <file>`             | File name of the HTML file. `[Default: graph.html]` |

## replPolicy.py

Determines the replacement policy by generating random access sequences and comparing the number of hits on the actual hardware to the number of hits in simulations of different policies. By default, a number of commonly used policies are simulated. With the `-allQLRUVariants` option, a more comprehensive list of more than 300 QLRU variants is tested.

The tool outputs all results in the form of an HTML table.

If the `-findCtrEx` option is used, it will try to find a small counterexample for each policy.

It supports the following additional command-line parameters:

| Option                       | Description |
|------------------------------|-------------|
| `-level <n>`                 | Cache level. `[Default: n=1]` |
| `-sets <sets>`               | Cache sets for which the replacement policy will be tested. |
| `-cBox <n>`                  | CBox for which the replacement policy will be tested. `[Default: n=0]` |
| `-policies <policies>`       | Only consider the policies in the given comma-separated list |
| `-useInitSeq <seq>`          | Adds a fixed prefix to each randomly generated sequence. This can be used to initialize the cache to a specific state. |
| `-nRandSeq <n>`              | Number of random sequences. `[Default: n=100]` |
| `-lRandSeq <n>`              | Length of random sequences. `[Default: n=50]` |
| `-output <file>`             | File name of the HTML file. `[Default: replPolicy.html]` |

## permPolicy.py

If the replacement policy is a permutation policy  this tool determines the permutation vectors. In addition to that, it outputs a set of age graphs for the access sequences generated by the permutation policy inference algorithm. These graphs can be a useful starting point for analyzing policies that are not permutation policies.

## strideGraph.py

Generates graphs that show the number of core cycles and the number of hits/misses (per access) when accessing memory areas of different sizes repeatedly using a given stride (which can be specified with the `-stride` option). 
## cacheInfo.py

Combines information obtained by executing the `CPUID` instruction with information on the number of slices of the L3 cache that is obtained through measurements.


## cacheLib.py

Library containing helper functions used by the other tools.

## cacheSim.py

This file contains the implementations of the simulated policies used by some of the other tools.


