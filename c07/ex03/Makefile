all: check compile run

check:
		@echo "Norm";
		@norminette -R CheckForbiddenSourceHeader ft*.c 

compile:		
		@echo "===CHECK===";
		@gcc -Wall -Werror -Wextra *.c
		@echo "/n";

run:
		@echo "===RUN==="
		@./a.out HOW ARE YOU TODAY ?
