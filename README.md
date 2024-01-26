# プロジェクトタイトル

42_libft

## 概要

C言語のライブラリである、atoiやstrlcpyなどの再実装をしています。

## プロジェクトの目的

42Tokyoの課題であり、また、  
これからプログラミングを学ぶにあたり、限られたライブラリ（write, malloc, free） を使い、  
atoiやstrlcpyなどのよく使うCの標準ライブラリの再実装をする事で、  
ライブラリの内部構造を理解する事。

## チャレンジした点

メモリ管理、ポインタ操作、データ構造などを学びつつ、  
関数のアルゴリズム、エッジケースの処理、効率性、およびエラー処理について対処しました。  
特にatoiは内部では一度LONGで処理を行い、intにキャストされたLONG_MIN, LONG_MAXでエラーを知り、  
またその実装を再現しようとするのには苦労をしました。

## 学んだこと
よく使うライブラリ関数を再実装する事で、man（マニュアル）を読むことの大切さ、  
エラーの見つけ方、およびその処理を学ぶことができました。  

## 使用方法

> - **normal**
> ```bash php
> #!/bin/bash
> cd 42_libft
> make
> ```

> - **bonus**
> ```bash php
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
