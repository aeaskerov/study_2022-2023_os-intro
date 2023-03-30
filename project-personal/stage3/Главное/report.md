---
## Front matter
title: "Индивидуальный проект"
subtitle: "Этап 3"
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

Добавить к сайту достижения

# Задание

- Список достижений.
    - Добавить информацию о навыках (Skills).
    - Добавить информацию об опыте (Experience).
    - Добавить информацию о достижениях (Accomplishments).
- Сделать пост по прошедшей неделе.
- Добавить пост на тему по выбору:
    - Легковесные языки разметки.
    - Языки разметки. LaTeX.
    - Язык разметки Markdown.

# Теоретическое введение

Команда hugo server служит для запуска локального сервера

Команда hugo служит для сборки сайта

Команда ~/bin/hugo new \<название и расположение нового поста\> служит для создания каталога с файлом _index.md для нового поста на сайте

# Выполнение лабораторной работы


## Информация о навыках

Запускаем localhost командой hugo server, запущенной из ~/work/blog.

![Запуск localhost](image/1.png){ #fig:1 }

Переходим в каталог blog/content, открываем файл _index.md и добавляем информацию о навыках.

![Навыки](image/2.png){ #fig:2 }

## Информация об опыте

В том же файле указываем информацию об опыте.

![Опыт](image/3.png){ #fig:3 }

## Информация о достижениях

В том же файле указываем информацию о достижениях.

![Достижения](image/4.png){ #fig:4 }

## Пост по прошедшей неделе

Для создания постов из каталога blog в консоли выполним следующую команду, чтобы создать каталог, в котором будет храниться файл с текстом поста.

![Создание каталога с постом по прошедшей неделе](image/5.png){ #fig:5 }

Теперь откроем файл index.md в созданном каталоге и введём в него текст поста.

![Файл с текстом по прошедшей неделе](image/6.png){ #fig:6 }

## Пост на тему по выбору

Теперь создадим второй пост на тему по выбору. Сохраним файл с первым постом и создадим новый каталог для второго поста.

![Создание каталога с постом на тему по выбору](image/7.png){ #fig:7 }

Повторим те же действия. Откроем файл index.md в каталоге второго поста и заполним его.

![Файл с текстом на тему по выбору](image/8.png){ #fig:8 }

Сохраним внесённые изменения.

Теперь мы можем увидеть новые посты на локальном сайте.

![Посты, отображающиеся на сайте](image/9.png){ #fig:9 }

Теперь соберём сайт с помощью команды hugo.

![Сборка сайта](image/10.png){ #fig:10 }

И загрузим всё на GitHub. Вначале из каталога blog и потом из каталога public.

![Загрузка внесённых изменений на GitHub из каталога blog](image/11.png){ #fig:11 }

![Загрузка внесённых изменений на GitHub из каталога public](image/12.png){ #fig:12 }


# Выводы

К сайту успешно добавлена новая информация, такая как достижения и новые посты.
