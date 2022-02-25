# Number-Gusser
This is an implimintation of an Algorithm that ask you to think of a number between 2 values (0 and 2^n), then it shows 
what seems to be a collection of random numbers, The user say weather his number is among those numbers or not, and deppending
on his answer, The algorithm shows another collection of numbers but with half the size of the last collection, In the end the
only number left is the one that the user was thinking of.
## The Algorithm functionality 
The algorithm depends on the binary form of the number with the folowing steps:
  1. Shows all the numbers with the first bit being 0 for example
  2. If the user found his number among these numbers, Then the number he thought of is a number the has 0 as the first bit, 
    so we fix the first bit as 0, And continue to show all the numbers with first bit as 0, and second bit as 0
  3. In case the user's number wasn't among those numbers, Then the user's number is a number that has it's first bit as 1
    rather than 0, So we fix the first bit as 1 and show all the numbers with 1 as the first bit and 0 as the second
  4. We keep doing this process unitl we have all the bits known, And that's the user's number
