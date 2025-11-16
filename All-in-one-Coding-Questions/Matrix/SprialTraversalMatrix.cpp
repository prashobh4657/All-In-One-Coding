// GFG Link : https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1
// Just see latest submission
// Leetcode Link : https://leetcode.com/problems/spiral-matrix/
// Just see latest submission

// Both submission have exactly same code

// Short Notes;
/*
   1. Just declare 4 variables  low_row, high_row, low_col, high_col.
   2. INTUTION: just apply these 4 loops inituitively (think as if you traversing first outer most loop of spiral)
      (write their bodies of loop intituively, you can easily iterate these loops from proper index to proper index
       and print proper element by intuition)
   3. Just apply row condition (z1) in 3rd loop and col condition (z2) in 4th loop where z1==low_row<=high_row and z2=low_col<=high_col
      (equality is v.imp)
   4. Just make a outer while loop having AND of both condition z1&&z2
*/

// See Leetcode Spiral Matrix I,II,III,IV