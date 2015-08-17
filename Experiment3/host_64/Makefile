NACL_ROOT=/home/yjy/project/nacl_root
LIBPATH=$(NACL_ROOT)/native_client/scons-out/opt-linux-x86-64/lib
LIBS=-L$(LIBPATH) \
    -lsel \
    -lnacl_error_code \
    -lenv_cleanser \
    -lsimple_service \
    -lthread_interface \
    -lnonnacl_srpc \
    -lnrd_xfer \
    -lnacl_perf_counter \
    -lnacl_base \
    -limc \
    -lnacl_fault_inject \
    -lnacl_interval \
    -lplatform_qual_lib \
    -lvalidators \
	-ldfa_validate_caller_x86_64 \
    -lcpu_features \
    -lvalidation_cache \
    -lplatform \
    -lgio \
    -lnccopy_x86_64 \
    -lrt \

#NONEXEC= -Wl,-z,noexecstack 
CFLAGS= -I$(NACL_ROOT) -g -O0  -pthread -static $(NONEXEC) 
CC=gcc
TARGET=nexe_loader
SRC=main.c
all:
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC) $(LIBS)
clean:	
	rm $(TARGET)
