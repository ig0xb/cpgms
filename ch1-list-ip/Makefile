# PROJECT_ROOT = $(dir $(abspath $(lastword $(MAKEFILE_LIST))))

# OBJS = ch1-list-ip.o

# ifeq ($(BUILD_MODE),debug)
# 	CFLAGS += -g
# else ifeq ($(BUILD_MODE),run)
# 	CFLAGS += -O2
# else ifeq ($(BUILD_MODE),linuxtools)
# 	CFLAGS += -g -pg -fprofile-arcs -ftest-coverage
# 	LDFLAGS += -pg -fprofile-arcs -ftest-coverage
# 	EXTRA_CLEAN += ch1-list-ip.gcda ch1-list-ip.gcno $(PROJECT_ROOT)gmon.out
# 	EXTRA_CMDS = rm -rf ch1-list-ip.gcda
# else
#     $(error Build mode $(BUILD_MODE) not supported by this Makefile)
# endif

default:
	gcc listip.c -o list1

# all:	ch1-list-ip

# ch1-list-ip:	$(OBJS)
# 	$(CXX) $(LDFLAGS) -o $@ $^
# 	$(EXTRA_CMDS)

# %.o:	$(PROJECT_ROOT)%.cpp
# 	$(CXX) -c $(CFLAGS) $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

# %.o:	$(PROJECT_ROOT)%.c
# 	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

# clean:
# 	rm -fr ch1-list-ip $(OBJS) $(EXTRA_CLEAN)
