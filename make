CFLAGS :=./sample.def
sample: sample.c
	gcc $(CFLAGS) $? -o sample 
