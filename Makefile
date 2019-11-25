all 	:
	make -C src/

test 	: all
	./compil.sh test/test.myc

clean	:
	make -C src/ clean