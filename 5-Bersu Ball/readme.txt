1.Sort Dancing Skills:
   . Sort the dancing skills of boys and girls in non-decreasing order.

2.Pairing Process:
  . Initialize variables 'i' and 'j' to track the current position in the sorted lists 
  . of boys' and girls' dancing skills, respectively.
  . Initialize a variable 'res' to count the number of pairs formed.
  . Iterate while 'i' is less than the number of boys and 'j' is less than the number 
    of girls.
   Within the loop:
     . Check if the absolute difference between the dancing skill of boy 'b[i]' and girl 'g[j]' is at most 1.
        If it is, increment both 'i' and 'j' to move to the next boy and girl, 
        respectively, and increment 'res' to count the formed pair.
     . If the dancing skill of boy 'b[i]' is less than that of girl 'g[j]', increment 'i'.
     . If the dancing skill of girl 'g[j]' is less than that of boy 'b[i]', increment 'j'.

3.Output:
   . Output the value of 'res', representing the largest possible number of pairs formed.