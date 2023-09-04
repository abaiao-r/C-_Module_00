# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 21:29:43 by abaiao-r          #+#    #+#              #
#    Updated: 2023/09/04 21:42:26 by abaiao-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler settings	
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g 

# Directories
OBJDIR = objs

# Source Files
SRCS = Account.cpp tests.cpp
OBJS = $(SRCS:%.cpp=$(OBJDIR)/%.o)

# Targets
NAME = account

all: $(NAME)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

run: fclean all
	./$(NAME)

re: fclean all

test: fclean all
	./$(NAME) Too many arguments
	./$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) $(CXXFLAGS) -o $(NAME)

%.o: %.cpp
	$(CXX) -Wall -Wextra -Werror -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: all clean fclean re run test
