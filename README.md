# OpeningAllUtilitiesFile
Using Window command, reading all filenames in the working directory into a string. using number (1,2,3,4) to open those file faster!

When writing this C++ program
I utilize the code online.

Some part about windows and handle are complicated. Probably worth researching later.
the program use unistd library for change directory (chdir)

By pressing number, It is very fast to change between program and program when needed.

The logic behind the program basically is to having all filenames into a vector of string.
Reprinting it to the screen and ask for decision from user.
the program take the decision from user and open the name of the file as co-ordinate with the number


Nice thing to learn: can do the system(some char) command and append string together, which can save time for later use.
A little bit struggle with program: Opening program with space, which have to use different command and system. Therefore I will name of the file without space.
