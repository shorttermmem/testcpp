# Makefile for a project with a subdirectory

# List of subdirectories
SUBDIRS = circular_dependency
SUBDIRS += multiple_inheritance

$(VERBOSE).SILENT:

# Targets
all:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir; \
	done

clean:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir clean; \
	done
