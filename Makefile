all:
	$(MAKE) -C ccfx -f karmic.mk
	$(MAKE) -C picosel -f karmic.mk
	$(MAKE) -C torq/pyeasytorq -f karmic.mk
	$(MAKE) -C utility/picosellib -f karmic.mk
	$(MAKE) -C ccfx/CCFinderXLib -f karmic.mk
	$(MAKE) -C GemX -f mailson.mk

clean:
	$(MAKE) -C ccfx -f karmic.mk clean
	$(MAKE) -C picosel -f karmic.mk clean
	$(MAKE) -C torq/pyeasytorq -f karmic.mk clean
	$(MAKE) -C utility/picosellib -f karmic.mk clean
	$(MAKE) -C ccfx/CCFinderXLib -f karmic.mk clean
	$(MAKE) -C GemX -f mailson.mk clean-all
