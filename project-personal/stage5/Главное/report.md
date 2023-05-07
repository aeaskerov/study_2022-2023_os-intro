---
## Front matter
title: "Индивидуальный проект"
subtitle: "Этап 5"
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

Добавить к сайту все остальные элементы.

# Задание

1. Сделать записи для персональных проектов.
2. Сделать пост по прошедшей неделе.
3. Добавить пост на тему по выбору.
  - Языки научного программирования.

# Теоретическое введение

Команда hugo server служит для запуска локального сервера

Команда hugo служит для сборки сайта

Команда ~/bin/hugo new \<название и расположение нового поста\> служит для создания каталога с файлом _index.md для нового поста на сайте

# Выполнение лабораторной работы

Создадим проект для первого задания. Идём в каталог blog, и из него выполняем следующую команду.

![Команда для создания персонального проекта](image/1.png){ #fig:1 }

После этого мы идём в каталог с созданным проектом, открываем файл index.md и заполняем его.

Теперь создадим пост по прошедшей неделе для второго задания. Идём в каталог blog, и из него выполняем следующую команду.

![Команда для создания поста по прошедшей неделе](image/2.png){ #fig:2 }

После этого мы идём в каталог с созданным постом, открываем файл index.md и заполняем его.

И напишем пост про языки научного программирования для третьего задания. Идём в каталог blog, и из него выполняем следующую команду.

![Команда для создания поста о языках научного программирования](image/3.png){ #fig:3 }

После этого мы идём в каталог с созданным постом, открываем файл index.md и заполняем его.

# Выводы

К сайту добавлен ряд элементов, таких как два поста и один проект.
