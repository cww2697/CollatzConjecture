# Collatz Conjecture

Version 1.0

### Background

Collatz Conjecture states that starting with any positive value *n* the solution of the following rules will eventually 
reach one. <br/>

1. *n* is even: *n*/2.
2. *n* is odd: 3*n*+1.

These rules shall repeat until reaching 1. Once the solution reaches 1 there will be an infinite loop of values 4,2,1.

Full background of the Collatz Conjecture can be found [here](https://en.wikipedia.org/wiki/Collatz_conjecture).

### Implementation

This implementation works by asking for a starting and ending number to calculate the number of steps required before
reaching one. The results of the calculation are output following completion of all executions, and are displayed as 
1. Total program execution time
2. Average calculation time for each value.
3. Average steps completed for each execution.

### Limitations

Currently, this program has the following limitations:
1. Not storing the values of the calculation with steps required.
2. Single threaded which leads to longer run time on slower systems.

#### Notes

Develop branch will contain recent code, however only code pushed to release will be tested and fully functional.