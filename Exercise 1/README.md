# Exercise 1: Find Min and Max
### Description
Write a program that asks the user to input 4 numbers and displays the minimum and maximum values.
<br/><br/>
### Pseudocode
- Prompt user for four numbers, save as `a, b, c, d`.
- Find min, starting with whether `a < b, c, & d`. Save as `smallest` if true.
  - Eliminate the previous variable from the comparison each time a smaller number is found.
  - Find max by mirroring the algorithm for finding min.
- Output `smallest` and `largest`.
<br/><br/>
### Flowchart
```mermaid
flowchart LR
START([Start])
INPUT[/Input<br>a, b, c, d/]
A{a < b, c, & d}
B{b < c, & d}
C{c < d}
d
SMALL[Smallest]
OUT[/Output result/]
STOP([Stop])

START --> INPUT
INPUT --> A
A --> |true|SMALL
A -->|else| B
B --> |true|SMALL
B -->|else| C
C --> |true|SMALL
C -->|else| d
d --> SMALL
SMALL --> OUT
OUT --> STOP
```

```mermaid
flowchart LR
START([Start])
INPUT[/Input<br>a, b, c, d/]
A{a > b, c, & d}
B{b > c, & d}
C{c > d}
d
LARGE[Largest]
OUT[/Output result/]
STOP([Stop])

START --> INPUT
INPUT --> A
A --> |true|LARGE
A -->|else| B
B --> |true|LARGE
B -->|else| C
C --> |true|LARGE
C -->|else| d
d --> LARGE
LARGE --> OUT
OUT --> STOP
```
<br/><br/>
### Output
```

C:\****>a

Enter 4 numbers: 4 5 3 9

  

The smallest number is: 3

The largest number is: 9

  

C:\****>a

Enter 4 numbers: -5.3 10.95 -1 1

  

The smallest number is: -5.3

The largest number is: 10.95

```
