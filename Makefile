CC = gcc
CFLAGS = -I$(INC_DIR) -Wall -Wextra -Werror
AR = ar rcs

INC_DIR = includes
SRC_DIR = src
TEST_DIR = test
BUILD_DIR = build
LIB_DIR = lib

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
TEST_FILES = $(wildcard $(TEST_DIR)/*.c)

OBJECTS = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRC_FILES))
TEST_OBJECTS = $(patsubst $(TEST_DIR)/%.c, $(BUILD_DIR)/%.o, $(TEST_FILES))

NAME = $(BUILD_DIR)/notlibft
LIBRARY = $(LIB_DIR)/notlibft.a

all: $(NAME) $(LIBRARY)
	@rm -f $(OBJECTS) $(TEST_OBJECTS)

$(NAME): $(OBJECTS) $(TEST_OBJECTS) | $(BUILD_DIR)
	$(CC) -o $@ $^
	
$(LIBRARY): $(OBJECTS) | $(LIB_DIR)
	$(AR) $@ $^

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) -c -o $@ $< $(CFLAGS)

$(BUILD_DIR)/%.o: $(TEST_DIR)/%.c | $(BUILD_DIR)
	$(CC) -c -o $@ $< $(CFLAGS)
	
$(BUILD_DIR):
	mkdir -p $@
	
$(LIB_DIR):
	mkdir -p $@

clean:
	rm -rf $(BUILD_DIR) $(LIB_DIR)
