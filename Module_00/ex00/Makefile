# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/08 23:12:53 by fbelotti          #+#    #+#              #
#    Updated: 2024/07/08 23:30:02 by fbelotti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
AUTHOR = Florent Belotti

CXX = c++
RM = rm -f
RMDIR = rm -rf

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

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
	@echo "\nmegaphone: Creating executable..."
	@$(CXX) $(CXXFLAGS) $(OBJ) $(LIBS) $(INCLUDES) -o $@
	@echo "megaphone: Executable $@ created."

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(dir $@)
	@echo "megaphone: Src: compiling file $@"
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
