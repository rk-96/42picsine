all: build check

build:
		@echo "--------------";
		@echo "Result:";
		@gcc -Wall -Werror -Wextra *.c && ./a.out;
check:
		@echo "\n";
		@echo "--------------";
		@echo "Check norm";
		@norminette -R CheckForbiddenSourceHeader ft*.c;
		@echo "--------------";
