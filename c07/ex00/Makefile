all: check run

check:
		@echo "\n";
		@echo "--------------";
		@echo "Check norm";
		@norminette -R CheckForbiddenSourceHeader ft*.c;
		@echo "--------------";
run:
		@echo "\n";
		@echo "-------------";
		@echo "RUNING FILE :D ";
		@@gcc -Wall -Werror -Wextra *.c && ./a.out
