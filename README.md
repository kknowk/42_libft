# プロジェクトタイトル

42_libft

## 概要

C言語のライブラリである、atoiやstrlcpyなどの再実装をしています。

## 動機

42Tokyoの課題であり、また、
これからプログラミングを学ぶにあたり、限られたライブラリ（write, malloc, free） を使う中で、
関数のアルゴリズム、エッジケースの処理、効率性、およびエラー処理についての深い理解が得られるため作成しました。

## 使用方法

> - **normal**
> ```bash
> #!/bin/bash
> cd 42_libft
> make
> ```

> - **bonus**
> ```bash
> #!/bin/bash
> make bonus
> ```

## 技術スタック

C言語

## 機能

> - **normal**  
> `ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint` `ft_strlen` `ft_memset`  
> `ft_bzero` `ft_memcpy` `ft_memmove` `ft_strlcpy` `ft_strlcat` `ft_toupper` `ft_tolower`  
> `ft_strchr` `ft_strrchr` `ft_strncmp` `ft_memchr` `ft_memcmp` `ft_strnstr`  
> `ft_atoi` `ft_calloc` `ft_strdup`  
> `ft_substr` `ft_strjoin` `ft_strtrim` `ft_split` `ft_itoa` `ft_strmapi` `ft_putchar_fd`  
> `ft_putstr_fd` `ft_putendl_fd` `ft_putnbr_fd`  

> - **bonus**  
> `ft_lstnew` `ft_lstadd_front` `ft_lstsize` `ft_lstlast` `ft_lstadd_back` `ft_lstdelone` `ft_lstclear` `ft_lstiter` `ft_lstmap`  
