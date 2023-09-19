# Project Push_swap

## Introduction

The Push_swap project is a straightforward algorithm project: data must be sorted. You have at your disposal a set of integer values, 2 stacks, and a set of instructions to manipulate both stacks. Your goal? Write a program in C called push_swap which calculates and displays on the standard output the smallest program, made of Push_swap language instructions, that sorts the integers received as arguments.

Is it easy? We'll see...

## Objectives

Writing a sorting algorithm is always a very important step in a developer’s journey. It is often the first encounter with the concept of complexity. Sorting algorithms and their complexity are part of the classic questions discussed during job interviews. It’s probably a good time to look at these concepts since you’ll have to face them at some point. The learning objectives of this project are rigor, use of C, and use of basic algorithms, especially focusing on their complexity. Sorting values is simple. To sort them the fastest way possible is less simple. Especially because from one integers configuration to another, the most efficient sorting solution can differ.

## Common Instructions

Before we delve into the project specifics, let's review some common instructions that apply to this project:

- **Language**: Your project must be written in C.

- **Norm Compliance**: Your project must adhere to the Norm. Norm errors, including those in bonus files/functions, will result in a score of 0.

- **Stability**: Your functions should not quit unexpectedly (e.g., segmentation fault, bus error, double free) apart from undefined behaviors. Unexpected crashes will lead to a non-functional evaluation.

- **Memory Management**: Properly free all heap allocated memory space. No leaks will be tolerated.

- **Makefile**: If required by the subject, include a Makefile to compile your source files with the flags -Wall, -Wextra, and -Werror using cc. Ensure your Makefile does not relink and includes the rules $(NAME), all, clean, fclean, and re.

- **Bonuses**: If applicable, create a bonus rule in your Makefile to include headers, libraries, or functions forbidden in the main part of the project. Store bonus code in separate _bonus.{c/h} files.

- **Libft Integration**: If permitted, integrate your libft by copying its sources and associated Makefile into a libft folder with its own Makefile. Your project’s Makefile should compile the library via its Makefile, then compile the project.

- **Testing**: Develop test programs for your project, although they won't be submitted or graded. These tests will assist in verifying your work and evaluating your peers' work during the defense.

- **Submission**: Submit your work to your assigned git repository. Deepthought may grade your work after peer evaluations, and any errors during Deepthought’s grading will halt the evaluation.
