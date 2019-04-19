src=$(wildcard *.c)
obj=$(src:.c=.o)
target=test

$(target):$(obj)
	$(CC) -o $@ $<

.PHONY:clean
clean:
	@rm -rf $(target) $(obj)
