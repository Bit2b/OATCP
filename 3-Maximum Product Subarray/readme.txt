Iterate through the array.
. Update left_product by multiplying the current element with the previous product 
  if it's non-zero, else set it to the current element.
. Update right_product by multiplying the current element from the end with the 
  previous product if it's non-zero, else set it to the current element.
. Update max_product with the maximum of max_product, left_product, and right_product.
. After the iteration, max_product holds the maximum product of a subarray.