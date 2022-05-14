# Exercise 1: Find Min and Max
## **Description**

Write a program that asks the user to input 4 numbers and displays the minimum and maximum values.
## **Pseudocode**
- Prompt user for four numbers, save as `a, b, c, d`.

- Find min, starting with whether `a < b, c, d`. Save as `smallest` if true.

- Eliminate the previous variable from the comparison each time a smaller number is found.

- Find max by mirroring the algorithm for finding min.

- Output smallest and largest numbers.
## Flowchart
```mermaid

flowchart LR

S([Start]) --> A{Is a < b, c, d?}

A --> |true| Smallest

A --> |else| B{Is b < c, d?}

B --> |true| Smallest

B --> |else| C{Is c < d?}

C --> |true| Smallest

C --> |else| d --> Smallest

Smallest --> ST([Stop])

```
```mermaid

flowchart LR

S([Start]) --> A{Is a > b, c, d?}

A --> |true| Largest

A --> |else| B{Is b > c, d?}

B --> |true| Largest

B --> |else| C{Is c > d?}

C --> |true| Largest

C --> |else| d --> Largest

Largest --> ST([Stop])

```
## **Output**
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
