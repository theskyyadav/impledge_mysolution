# Longest-Compounded-Word

## Steps to Execute the Given Code

a. Open the provided C++ file in VS Code.
b. Paste the data from the input file into the "Input.txt" section of the IDE.
c. Compile and run the code.
d. The required output will be printed in the "Output.txt" file.

## Overview of the Code

The given problem, finding the longest compounded word, is solved using dynamic programming (DP) data structure.

1. Sort the strings based on their length. If lengths are equal, then sort alphabetically.
2. Starting from the end of the list of strings, check if the current string can be formed with smaller words.
3. If the answer is yes, store the string in 's1' and repeat the process to find the second longest compounded word.
4. Once both strings are found, stop the process and print the output strings.

- n: Number of strings
- k: Maximum length of a string

Time Complexity:
- Best Case: O(k^2)
- Average Case: O(nk)
- Worst Case: O(nk^2)

Space Complexity: O(k)

