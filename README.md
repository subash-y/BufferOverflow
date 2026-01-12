🛑 Disclaimer

⚠️ This project is strictly for educational and learning purposes.

It is not intended for exploitation, malicious activity, or use in production systems. The goal is to understand why buffer overflows are dangerous and how they occur. Demonstrated stack-based buffer overflow vulnerability in C and analyzed its impact on memory corruption and undefined behavior.

Project Objectives

=> Demonstrate how buffer overflow occurs in fixed-size arrays

=> Observe memory corruption caused by unchecked input

=> Understand stack memory layout conceptually

=> Explain undefined behavior resulting from buffer overflow

=> Highlight common pitfalls in C input handling

⚠️ What Is Being Demonstrated

The program:

=> Declares fixed-size character arrays

=> Accepts user input without enforcing strict bounds

=> Allows input exceeding the allocated buffer size

=> May overwrite adjacent stack memory

=> Produces unexpected or corrupted output

=> This behavior is a classic buffer overflow vulnerability.

🧠 Key Concepts Covered

=> Fixed-size buffers in stack memory

=> How unchecked input causes memory overwrite

=> Why buffer overflow leads to undefined behavior

=> Difference between buffer overflow and stdin input buffering

=> System- and compiler-dependent behavior

🔍 Expected Behavior

=> When input length exceeds the buffer size:

=> Extra characters may overwrite adjacent memory

=> Printed output may include unexpected characters

=> Program behavior may vary across systems

=> In some environments, the program may crash or behave unpredictably

=> The observed behavior is not guaranteed and may differ depending on compiler, operating system, and runtime protections.

🚨 Important Notes

=> This program intentionally contains unsafe coding practices

=> The memory layout assumed in the demonstration is not guaranteed by the C standard

=> Results may vary across different executions or machines
