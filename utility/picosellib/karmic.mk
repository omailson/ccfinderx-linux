DEFS = -DOS_UBUNTU -DLITTLE_ENDIAN -DCXLM_NO_ENC -DCODE_CONVERSION_SUPPORT -DWSTRING_CONVERSION_SUPPORT -DREQUIRE_RNR -DBUILD_PICOSELLIB

OPTS = -O2 -fpermissive -I/usr/lib/jvm/java-6-openjdk/include/ -I/usr/lib/jvm/java-6-openjdk/include/linux/
#OPTS = -O2 -fpermissive

LIBS = -licule -licutu -licuio -licuuc -liculx -licudata -licui18n -lboost_thread

OBJS = picosel.o

CC = g++

../../ubuntu32/libpicosellib.so: $(OBJS)
	$(CC) $(LIBS) -shared -o $@ $(OBJS)

.cpp.o:
	$(CC) $(DEFS) $(OPTS) -c $< -o $@

picosel.o: ../../picosel/picosel.cpp
	$(CC) $(DEFS) $(OPTS) -c $< -o $@

clean:
	@rm -f *.o
	@rm -f ../../ubuntu32/libpicosellib.so

.PHONY : clean

