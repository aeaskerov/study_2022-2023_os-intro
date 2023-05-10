---
## Front matter
title: "Индивидуальный проект"
subtitle: "Этап 6"
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

Размещение двуязычного сайта на Github.

# Задание

Сделать поддержку английского и русского языков.

Разместить элементы сайта на обоих языках.

Разместить контент на обоих языках.

Сделать пост по прошедшей неделе.

Добавить пост на тему по выбору (на двух языках).

# Теоретическое введение

Команда hugo server служит для запуска локального сервера

Команда hugo служит для сборки сайта

Команда ~/bin/hugo new \<название и расположение нового поста\> служит для создания каталога с файлом _index.md для нового поста на сайте

# Выполнение лабораторной работы

Для того, чтобы сайт поддерживал два языка, перейдём в каталог content и создадим два новых каталога: en, ru. Переместим все другие каталоги в них.

![Каталоги для английского и русского языков](image/1.png){ #fig:1 }

Также пропишем русский язык в файле languages.yaml.

![Указываем второй язык](image/2.png){ #fig:2 }

После этого заходим в каталог ru, и переводим весь материал в нём на русский.

![Фрагмент русскоязычной версии сайта](image/3.png){ #fig:3 }

После этого переходим к следующему заданию – создаём пост по прошедшей неделе.

![Пост по прошедшей неделе](image/4.png){ #fig:4 }

После этого создаём пост на тему по выбору.

![Пост на тему по выбору](image/5.png){ #fig:5 }

Оба поста публикуем в двух версиях – английской и русской.

# Выводы

Сайт стал доступен на двух языках. Появилось два новых поста.
