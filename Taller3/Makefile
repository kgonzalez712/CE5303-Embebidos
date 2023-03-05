DIRS = lib src

all: $(DIRS)

$(DIRS):
		$(MAKE) -C $@
		chmod +x dynamic.sh
		chmod +x static.sh
.PHONY: $(DIRS)
