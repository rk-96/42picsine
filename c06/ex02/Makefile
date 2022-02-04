all: check run play

check:
	@echo "check norminette -R CheckForbiddenSourceHeader"
	@norminette -R CheckForbiddenSourceHeader

run:	
	@echo "============="
	@gcc -Wall -Werror -Wextra ft*.c && ./a.out

play:
	@echo "============"
	@./a.out string1 string2 string3 '/0'
