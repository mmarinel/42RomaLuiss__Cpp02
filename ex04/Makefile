# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/16 17:34:54 by earendil          #+#    #+#              #
#    Updated: 2022/09/03 12:14:28 by mmarinel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RESET		:= "\033[0m"
BLACK		:= "\033[30m"
RED			:= "\033[31m"
GREEN		:= "\033[32m"
YELLOW		:= "\033[33m"
BLUE		:= "\033[34m"
MAGENTA		:= "\033[35m"
CYAN		:= "\033[36m"
WHITE		:= "\033[37m"
BOLDBLACK	:= "\033[1m\033[30m"
BOLDRED		:= "\033[1m\033[31m"
BOLDGREEN	:= "\033[1m\033[32m"
BOLDYELLOW	:= "\033[1m\033[33m"
BOLDBLUE	:= "\033[1m\033[34m"
BOLDMAGENTA	:= "\033[1m\033[35m"
BOLDCYAN	:= "\033[1m\033[36m"
BOLDWHITE	:= "\033[1m\033[37m"

CC:= @clang++
CFLAGS:= -std=c++98 -Wall -Werror -Wextra

NAME := my_sed
FILE_NAME := filetto
OBJS_DIR:= bin
OBJS:= $(addprefix $(OBJS_DIR)/, $(shell find . -name "*.cpp" -print | sed 's/\.cpp/\.o/g' | sed 's/\.\///'))
INCLUDES:= $(shell find . -name "*.hpp" -print)

RMF:= @/bin/rm -rf
MKD:= @mkdir -p
MAKE_REC:= @make --no-print-directory

exercise: .BUILD

run: .RUN
	@echo $(CYAN) "\nTests running\n" $(RESET)
	@./$(NAME)
	@echo "Lorem ipsum dolor sit amet, consectetur adipiscing elit. In suscipit dapibus ultrices. Fusce sagittis, dui vitae volutpat bibendum, est eros blandit dolor, sed facilisis dolor sem non dolor. Donec posuere dolor ac massa tempus semper. Nam tempus sit amet turpis quis auctor. Aliquam nibh libero, tristique quis ultrices at, semper non augue. Nunc pretium eleifend pellentesque. Donec turpis lectus, cursus quis purus quis, commodo tincidunt orci. Aenean eros mauris, imperdiet a volutpat eu, placerat in mi. Pellentesque tempor rutrum tortor nec imperdiet. Cras tincidunt sit amet diam sed interdum. Etiam imperdiet turpis id massa lacinia tristique. Donec suscipit tempus nulla, id vestibulum leo pretium sit amet. Curabitur ut libero et sapien aliquam cursus. Vivamus sed tempor lorem, non sodales neque. Praesent accumsan dapibus massa, nec tristique lacus porttitor ut. Duis vel dolor non libero faucibus viverra.\
\
Aenean porttitor sed odio ac egestas. Suspendisse potenti. Sed auctor molestie risus, in accumsan ligula rutrum sit amet. Fusce ac metus id odio pulvinar rutrum eget eu dolor. Duis eget purus et orci tempus vestibulum a et neque. Mauris elementum ex non ultricies blandit. Morbi sapien odio, tristique eu vehicula quis, dapibus ut eros. In lacus tellus, pretium ac arcu sodales, viverra eleifend arcu. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia curae; Nullam elementum pretium lectus, ac luctus orci sollicitudin non. Vestibulum sollicitudin vehicula arcu, tincidunt euismod orci bibendum a. Sed euismod, tellus et sagittis aliquet, turpis diam porta erat, ut tempor arcu ligula quis dolor. Aenean ex lectus, convallis nec gravida non, lobortis eget risus. Donec pellentesque laoreet imperdiet. Cras eget leo nisl.\
\
Aenean lorem nunc, rutrum vel iaculis imperdiet, rhoncus in massa. Orci varius natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Nam vitae felis at felis sollicitudin fringilla et in augue. Etiam posuere sem metus, sed ornare nisl eleifend a. Maecenas mollis scelerisque enim vel sodales. Aliquam congue commodo nulla, id suscipit urna finibus non. Aenean sit amet tellus eu tortor laoreet mollis et ac ex. Nam consectetur eu lacus semper fringilla.\
\
Curabitur non neque convallis, volutpat ante at, dignissim libero. Maecenas purus elit, pulvinar eget massa sed, interdum ultricies felis. Ut nec accumsan ex. Praesent dapibus arcu elit. Proin eget sodales nisi. Curabitur aliquam finibus elit. Nunc at varius metus. Cras nisl felis, placerat ut bibendum a, dictum ac massa. Duis ligula diam, molestie vel quam condimentum, facilisis ornare arcu. Sed eu pretium risus, vel lobortis purus. Proin mattis venenatis est sit amet vestibulum. Etiam laoreet, sem non feugiat posuere, nibh ante fringilla quam, at ornare tellus lectus ac odio.\
\
Sed at ultricies arcu. Ut at ornare turpis. Phasellus dapibus egestas magna, tincidunt blandit mauris commodo ut. Maecenas pulvinar odio non nulla iaculis pretium. Maecenas hendrerit dapibus leo. Vivamus gravida ante at facilisis rhoncus. Praesent eu auctor sem. Integer metus tellus, hendrerit eget iaculis sit amet, rhoncus eu enim. Sed ornare ullamcorper finibus. In scelerisque, lacus quis tempus aliquam, neque erat egestas eros, id varius risus nisl nec sem. Donec a eros maximus, sollicitudin neque vitae, convallis erat. Praesent diam eros, vestibulum in lectus ac, vulputate consequat mi.\
\
" > $(FILE_NAME) && ./$(NAME) $(FILE_NAME) dolor DinamicaStrutturaleDelFlusso

all:
	@$(MAKE_REC) -C ..

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@printf "\033[0;35mProject done!\n\n\033[0;37m"

$(shell echo $(OBJS_DIR))/%.o: %.cpp $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

fclean: clean
	@printf "removing program executable $(NAME)\n\033[0;37m"
	$(RMF) -f $(NAME)
	@printf "\033[0;35mExecutable removed!\n\n\033[0;37m"

clean:
	@printf "removing Object files $(OBJS)\n\033[0;37m"
	$(RMF) $(OBJS_DIR)
	$(RMF) $(FILE_NAME)
	$(RMF) $(FILE_NAME).replace
	@printf "\033[0;35mObject files removed!\n\n\033[0;37m"

re: fclean all

.BUILD:
	$(MKD) $(OBJS_DIR)
	@printf "\e[1;33mMaking exercise $(NAME) \n\033[0;37m"
	@$(MAKE_REC) $(NAME)

.RUN:
	$(MAKE_REC) -i exercise