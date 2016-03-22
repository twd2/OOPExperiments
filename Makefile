SHELL = /bin/bash
EXPERIMENTS := $(shell ls -F | grep "/$$" | sed "s/\/$$//")

.PHONY: all
all:
	for ex in $(EXPERIMENTS); \
	do \
		pushd $$ex; \
		make all; \
		popd; \
	done

.PHONY: clean
clean:
	for ex in $(EXPERIMENTS); \
	do \
		pushd $$ex; \
		make clean; \
		rm OUTPUT*.md; \
		popd; \
	done

.PHONY: test
test: all
	for ex in $(EXPERIMENTS); \
	do \
		OUTPUT_FILE=OUTPUT_`uname -ms | sed "s/ /_/g"`.md; \
		pushd $$ex; \
		echo ==========$$ex==========; \
		echo '```' > $$OUTPUT_FILE; \
		./main | tee -a $$OUTPUT_FILE; \
		echo '```' >> $$OUTPUT_FILE; \
		echo ==========`echo $$ex | sed "s/./=/g"`==========; \
		popd; \
	done
