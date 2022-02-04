all: build check play

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
play:
		@echo "\n"
		@echo "insert number 13131313 "
		@echo "result must be C85E31 "
		@echo "\n"
		@./a.out 13131313
		@echo "--------------";
