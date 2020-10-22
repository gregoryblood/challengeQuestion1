# challengeQuestion1

You are tasked with creating buildings that have a percent (p) of rooms are on the outside.

By designing a MxN layout, you must create a program that gives the MINIMUM amount of rooms required to satisfy a percent (p) given.

For example both the 4x4 and the 3x8 layouts have 75% (p) of the rooms on the outside (marked with x's) but the 4x4 has less rooms, so 16 is the correct solution.

4x4 16 rooms total, 12 on the outside, 12/16 = 0.75 => 75%
| x | x | x | x |
| x |   |   | x |
| x |   |   | x |
| x | x | x | x |  

3x8 24 rooms total, 18 on the outside, 18/24 = 0.75 => 75%
| x | x | x | x | x | x | x | x |
| x |   |   |   |   |   |   | x |
| x | x | x | x | x | x | x | x |

Example input (p) / output (minimum rooms required):
50 / 48
