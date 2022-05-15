# Exercise 5: Odd or Even, Positive or Negative
### Description
Write a program that takes as input any value between -10 and 10 and outputs (1) whether the value is positive or negative and (2) whether it is odd or even.
<br/><br/>
### Pseudocode
- Prompt user for a value between `-10` and `10`, save as `userNum`.
- Output warning and exit if `userNum` is not between `-10` and `10`.
- Output that the value is positive if `userNum < 0`, else negative.
- Output that the value is even if `userNum mod 2 = 0`, else odd.

Note: a function like `fmod` is required to compute the modulus of a floating-point value.
<br/><br/>
### Flowchart
``` mermaid
flowchart LR

STR([Start])
IN[/Input<br>userNum/]
IF1{userNum < -10<br>or<br>userNum > 10}
IF2{userNum % 2 == 0}
OUT1[/Output<br>Error/]
OUT2[/Output<br>Even/]
OUT3[/Output<br>Odd/]
STP([Stop])

STR --> IN
IN --> IF1
IF1 -->|true| OUT1 -->|exit| STP
IF1 -->|false| IF2
IF2 -->|true| OUT2 --> STP
IF2 -->|else| OUT3 --> STP

```
<br/><br/>
### Output
```
C:\****\Week-2\Exercise 5>a

Enter a value between -10 and 10: 5.3

Value is positive

Value is odd

C:\****\Week-2\Exercise 5>a

Enter a value between -10 and 10: -2

Value is negative

Value is even

C:\****\Week-2\Exercise 5>a

Enter a value between -10 and 10: 10.0001

Invalid value

C:\****\Week-2\Exercise 5>a

Enter a value between -10 and 10: -10.0001

Invalid value
```
