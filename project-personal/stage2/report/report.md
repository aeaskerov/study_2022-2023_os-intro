---
## Front matter
title: "Индивидуальный проект"
subtitle: "Этап 2"
author: "Аскеров Александр Эдуардович"

## Generic otions
lang: ru-RU
toc-title: "Содержание"

## Bibliography
bibliography: bib/cite.bib
csl: pandoc/csl/gost-r-7-0-5-2008-numeric.csl

## Pdf output format
toc: true # Table of contents
toc-depth: 2
lof: true # List of figures
lot: false # List of tables
fontsize: 12pt
linestretch: 1.5
papersize: a4
documentclass: scrreprt
## I18n polyglossia
polyglossia-lang:
  name: russian
  options:
	- spelling=modern
	- babelshorthands=true
polyglossia-otherlangs:
  name: english
## I18n babel
babel-lang: russian
babel-otherlangs: english
## Fonts
mainfont: PT Serif
romanfont: PT Serif
sansfont: PT Sans
monofont: PT Mono
mainfontoptions: Ligatures=TeX
romanfontoptions: Ligatures=TeX
sansfontoptions: Ligatures=TeX,Scale=MatchLowercase
monofontoptions: Scale=MatchLowercase,Scale=0.9
## Biblatex
biblatex: true
biblio-style: "gost-numeric"
biblatexoptions:
  - parentracker=true
  - backend=biber
  - hyperref=auto
  - language=auto
  - autolang=other*
  - citestyle=gost-numeric
## Pandoc-crossref LaTeX customization
figureTitle: "Рис."
tableTitle: "Таблица"
listingTitle: "Листинг"
lofTitle: "Список иллюстраций"
lotTitle: "Список таблиц"
lolTitle: "Листинги"
## Misc options
indent: true
header-includes:
  - \usepackage{indentfirst}
  - \usepackage{float} # keep figures where there are in the text
  - \floatplacement{figure}{H} # keep figures where there are in the text
---

# Цель работы

Добавить к сайту данные о себе.

# Задание

- Список добавляемых данных
    - Разместить фотографию владельца сайта
    - Разместить краткое описание владельца сайта (Biography)
    - Добавить информацию об интересах (Interests)
    - Добавить информацию об образовании (Education)
- Сделать пост по прошедшей неделе
- Добавить пост на тему по выбору:
    - Управление версиями Git
    - Непрерывная интеграция и непрерывное развертывание (CI/CD)

# Теоретическое введение

Команда hugo server служит для запуска локального сервера

Команда hugo служит для сборки сайта

Команда ~/bin/hugo new \<название и расположение нового поста\> служит для создания каталога с файлом _index.md для нового поста на сайте

# Выполнение лабораторной работы

Добавим данные о себе. Для этого откроем файл _index.md в каталоге ~/work/blog/content/authors/admin.

Укажем краткое описание владельца сайта.

![Краткое описание владельца сайта](image/1.png){ #fig:1 }

Добавим фото профиля.

![Фото профиля](image/2.png){ #fig:2 }

Добавим информацию об интересах.

![Информация об интересах](image/3.png){ #fig:3 }

Добавим информацию об образовании.

![Информация об образовании](image/4.png){ #fig:4 }

Теперь создадим два новых поста.

![Создание поста по прошедшей неделе](image/5.png){ #fig:5 }

![Создание поста на тему по выбору](image/6.png){ #fig:6 }

Запустим локальный сервер для просмотра вносимых на сайт изменений.

![Запуск hugo server](image/7.png){ #fig:7 }

После того, как мы создали посты, заполним их. Укажем заголовок, подзаголовок, краткую сводку, автора.

![Указываем информацию о посте](image/8.png){ #fig:8 }

И укажем сам текст статьи.

![Текст статьи о прошлой неделе](image/9.png){ #fig:9 }

![Текст статьи про CI/CD](image/10.png){ #fig:10 }

Мы можем увидеть результат своих действий.

![Новые посты в списке постов](image/11.png){ #fig:11 }

![Содержимое первого поста на сайте](image/12.png){ #fig:12 }

![Содержимое второго поста на сайте](image/13.png){ #fig:13 }

Теперь соберём сайт с помощью команды hugo.

![Собираем сайт командой hugo](image/14.png){ #fig:14 }

Добавим все изменения на GitHub. Для этого перейдйм в каталог blog, введём команды git add .; git commit –am “feat(main): blog updated”; git push, и после них перейдём в каталог blog/public/ и повторим команды: git add .; git commit –am “feat(main): public updated”; git push.

# Выводы

Были внесены изменения на сайте – добавлена информация о владельце и два новых поста.
