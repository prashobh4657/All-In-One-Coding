// Leetcode Link : https://leetcode.com/problems/search-a-2d-matrix/ 
// Submission 1 : 08/24/2021 07:40	Accepted ==> Z1 submission (Brute force);
// Submission 2 : Just see latest submission ==> Z2 submission

/* Read below points
   Following are the ways discussed in article ( https://www.geeksforgeeks.org/search-element-sorted-matrix/ )
   1. Compare one by one  (using nested loop)      ==> See Z1 submission     ==> Time : O(nm)
   2. Typecast 2d array into 1d array and then apply binary search   ==> (no need to code this approach)
      ==> Space : O(mn) and Time : O(log(mn));
   3. 3rd approach disussed in article : 
      Don't read this approach : "Another efficient approach that doesn’t require typecasting"
      Directly see 4th point
   4. 2D-Binary search (Same approach i though by myself also)    ==> Best approach

      4.1  First find the row in which key can be present using binary search. If in that row key exists return true else return false;
      4.2  After searching the row in which key can be present, in that row key can be searched in two ways
         Linear search : Time : O(log(n) + m)          ==> (no need to code this approach as well)
         {because logn time is to search that row, once that row is searched then O(m) time is for searching the element within that row}
         Binary search : Time : O(log(n) + log(m))      ==> See Z2 submission
         {because logn time is to search that row, once that row is search O(m) time is for searching the element within that row}
*/