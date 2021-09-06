TARGET_GCC = /usr/bin/arm-none-eabi-gcc
TARGET_AR = /usr/bin/arm-none-eabi-ar
CFLAGS = -mcpu=cortex-m33  -mthumb  -mabi=aapcs  -mfpu=fpv5-sp-d16

lib.a: lib.o
	$(TARGET_AR) rcs $@ $^

lib.o: lib.c
	$(TARGET_GCC) -c -o $@ lib.c -lm $(CFLAGS)

clean:
	rm -f *.o *.a $(TARGET)
