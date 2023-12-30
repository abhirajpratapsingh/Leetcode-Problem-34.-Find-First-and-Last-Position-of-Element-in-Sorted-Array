# Abhiraj Pratap Singh

---


# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
- The code appears to search for a target element in a sorted array (nums) and return the indices of the first and last occurrences of the target. If the target is not found, it returns [-1, -1].

---



# Approach
<!-- Describe your approach to solving the problem. -->
1. Iterate through the array from the beginning to find the index of the first occurrence of the target.
2. If the target is not found, add -1 to the result vector twice and return it.
3. If the target is found, iterate through the array from the end to find the index of the last occurrence of the target.
4. If the last occurrence is found, add its index to the result vector.
5. If the last occurrence is not found (i < 0), add -1 to the result vector.


---


# Complexity

---


- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- **Time complexity: O(n),** *where n is the size of the input array nums. In the worst case, it iterates through the array twice.*

---


- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- **Space complexity: O(1),** *as the additional space used is constant (result vector of size at most 3).*

---
