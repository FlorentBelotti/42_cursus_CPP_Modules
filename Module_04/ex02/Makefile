# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/17 16:56:14 by fbelotti          #+#    #+#              #
#    Updated: 2024/10/01 16:34:24 by fbelotti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Abstract
AUTHOR = Florent Belotti

CXX = c++
RM = rm -f
RMDIR = rm -rf

CXXFLAGS = -Wall -Wextra -Werror -std=c++98
INCLUDES = -I./Includes -I/opt/homebrew/Cellar/readline/8.2.10/include

SRCDIR = .
OBJDIR = obj

SRC = $(shell find $(SRCDIR) -name \*.cpp -type f -print)
OBJ = $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SRC))

DEPS = $(OBJ:.o=.d)

all: announce intro $(NAME)

announce:
	@echo "\n==================================="
	@echo "Project: $(NAME)\n"
	@echo "Author: $(AUTHOR)"
	@echo "===================================\n"

intro:
	@echo "Starting the build process...\n"

$(NAME): $(OBJ)
	@echo "\n$(NAME): Creating executable..."
	@$(CXX) $(CXXFLAGS) $(OBJ) $(LIBS) $(INCLUDES) -o $@
	@echo "$(NAME): Executable $@ created."

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(dir $@)
	@echo "$(NAME): Src: compiling file $@"
	@$(CXX) $(CXXFLAGS) $(INCLUDES) -MMD -c $< -o $@

-include $(DEPS)

clean:
	@$(RM) $(OBJ)
	@$(RMDIR) $(OBJDIR)
	@echo "Cleaned."

fclean: clean
	@$(RM) $(NAME)
	@echo "Fully cleaned."

re: fclean all

debug: CXXFLAGS += $(DEBUG_FLAGS)
debug: re

.PHONY: all clean fclean re announce intro
