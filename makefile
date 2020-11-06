src = $(wildcard *.c)
target = $(patsubst %.c, %, $(src))
inc_path = /usr/include/mysql/
lib_path = /usr/lib64/mysql/
all: $(target)
%:%.c
	gcc $< -o $@ -I$(inc_path) -L$(lib_path) -lmysqlclient -lstdc++ -lpthread -ldl -lrt
clean:
	-rm -rf $(target)
.PHONY: all clean
