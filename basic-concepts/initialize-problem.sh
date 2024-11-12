#!/bin/bash

echo "Please enter problem number: "
read problem_number

mkdir "problem-${problem_number}"
cd "problem-${problem_number}"
touch "main.c"

printf "#include <stdio.h> \n\nint main(){\n\n\n\n\treturn 0;\n}" >> main.c

code "main.c"