# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/10 23:06:19 by fbelotti          #+#    #+#              #
#    Updated: 2024/09/19 22:20:15 by fbelotti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Hi_this_is_brain
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
