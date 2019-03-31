
#----------------------------------------------------------
#         Copyright: MR.Black <demonmikalis@google.com>
#         2018-2019 Engineering Department
#         Main Make File For Machine Learning App         
#                   
#                 
#   Use of this software is governed by a License Agreement   
#    ** See the file License for the Conditions of Use  **    
#    **     This banner notice must not be removed      **    
#                                                             
# ----------------------------------------------------------- 
# File: Makefile.  Generated from Makefile.in by configure.
# ----------------------------------------------------------- 

CPP = g++
CC = gcc

CC_FLAGS = -g -Wall 

CXX_FLAGS = -g -Wall -std=c++11 
CXX_INCLUDES = 


LDFLAGS = -lcaffe

object = test.o main.o 
object2 = apple.o AppleWrapper.o testApple.o

all: testApple 
main.so: $(object) 
	$(CPP) -o $@ $(CXX_FLAGS) $^ $(LDFLAGS) $(CXX_INCLUDES)

testApple: $(object2) 
	$(CC) -o $@ $(CC_FLAGS) $^ $(LDFLAGS) $(CXX_INCLUDES) -lstdc++
%.o: %.cpp
	$(CPP) $(CXX_FLAGS) -c -o $@ $< $(CXX_INCLUDES)

%.o: %.c
	$(CC) $(CC_FLAGS) -c -o $@ $< $(CXX_INCLUDES)
clean:
	rm *.o testApple


.PHONY: all

#lib/libcaffe.so lib/libproto.a \
#libs/libOpenCL.so \


