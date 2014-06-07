To compile
----------

	./autogen.sh
	./configure
	make

To run
------

	./src/main

To clean
--------

	make clean

To remove autotools unneeded files
----------------------------------

Note: should be done only after commiting all the changes to git!

	git ls-files --exclude-standard --others | xargs rm

