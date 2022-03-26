# Computer Architecture

It is the design of computers, including their instruction sets, hardware components and system organization.

**ISA** Instruction Set Architecture
How machine language programs will interact with the computer.

**HSA** Hardware System Architecture
CPU, Storage, I/O...
Logical design and data flow organization

X = 2 + 3

ISA = 
MOV R1, 02H
MOV R1, 03H
ADD R1, R2
STORE X, R1

HSA = 
R1 R2 ADDER

## History

Analytical Engine
First mechanical general purpose computer -> Charles Babbage - Ada Lovelace
Ada was a student of DeMorgan 

Alan Turing
Johann Von Neumann

## Classification

### **Von Neumann Architecture** *Princeton architecture*
CPU
Main Memory
I/O Peripherals

Von Neumann Bottleneck
### **Non-Von Neumann Architecture** *Harvard architecture*

**Harvard Architecture**
Instruction memory
I/O Peripherals
Data Memory

Solves Von Neumann's bottleneck, the processor can perform an instruction and perform memory access at the same time
These computers are faster because Instruction fetches and Data access are not competing for the single memory pathway

**Modified Harvard Architecture**

+Cache   

**Flynn's Taxonomy**
SISD Single Instruction Stream Single Data Stream - Von Neumman
SIMD Single Instruction Stream Multiple Data Stream
MISD Multiple Instruction Stream Single Data Stream
MIMD Multiple Instruction Stream Multiple Data Stream

## Memory

Memory is the faculty of the brain by which data or information is encoded, stored, and retrieved  when needed.

Access time is exponentially related to Size

2GHZ 

Time = 1/Frequency
Time 1/ 2x10⁹ seconds
1/2 x 10-⁹ seconds
1/2 nano second

1 kilo<unit> 10³
1 mega<unit> 10³ x 10³
1 giga<unit> 10³ x 10³ x 10³

**Volatile**
Primary memory -> inmediate tasks -> Dynamic + Random Access Memory
Static + Random Access Memory -> cache
Cache memory mappingis how Primary memory comunicates with cache memory
Words

**Permanent**
Secondary memory -> storage
Semi-random access
Virtual memory Mapping is how Secondary memory interacts with Primary Memory
Pages