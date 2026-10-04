# Subset Sum — Recursive Pattern

## Core Idea
Har element ke paas 2 choices:
- Take the element
- Skip the element

Target `m` mil gaya → `true`
Sum `m` se exceed ho gaya / elements khatam → `false`

## Pattern
helper(index, sum)

Take:
    helper(index + 1, sum + notes[index])

Skip:
    helper(index + 1, sum)

## Base Cases
if (sum == m) return true;
if (sum > m || index == n) return false;

## Recognition Trigger
"Can I select some elements to make the sum exactly X?"

→ **Subset Sum / Take-or-Skip**

⚠️ Subset ≠ contiguous. Elements can be selected from anywhere.

## Complexity
Time:  O(2^N)
Space: O(N)   // recursion stack

## One-liner
Every element → TAKE or SKIP → recursively search all possible subsets.
