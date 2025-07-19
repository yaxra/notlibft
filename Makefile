CC = gcc
CFLAGS = -I$(INC_DIR) -Wall -Wextra -Werror

INC_DIR = includes
SRC_DIR = src
TEST_DIR = test
BUILD_DIR = build

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
TEST_FILES = $(wildcard $(TEST_DIR)/*.c)

OBJECTS = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRC_FILES)) \
          $(patsubst $(TEST_DIR)/%.c, $(BUILD_DIR)/%.o, $(TEST_FILES))

NAME = $(BUILD_DIR)/notlibft

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) -o $@ $^
	rm -f $(OBJECTS)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) -c -o $@ $< $(CFLAGS)

$(BUILD_DIR)/%.o: $(TEST_DIR)/%.c | $(BUILD_DIR)
	$(CC) -c -o $@ $< $(CFLAGS)
	
$(BUILD_DIR):
	mkdir -p $@

clean:
	rm -rf $(BUILD_DIR)
