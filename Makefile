.PHONY: help
help:             ## Show the help.
	@echo "Usage: make <target>"
	@echo ""
	@echo "Targets:"
	@fgrep "##" Makefile | fgrep -v fgrep

.PHONY: clean
clean:            ## Clean unused files.
	@find ./ -name 'user_exe' -print -exec rm -f {} \;
	@find ./ -name '*.out' -print -exec rm -f {} \;
	@find ./ -name '*~' -print -exec rm -f {} \;