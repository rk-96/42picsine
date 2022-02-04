all: check  run

check:
	@echo "check norminette -R CheckForbiddenSourceHeader"
	@norminette -R CheckForbiddenSourceHeader

run:	
	@echo "============="
	@gcc -Wall -Werror -Wextra ft*.c && ./a.out
