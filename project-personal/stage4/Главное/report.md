---
## Front matter
title: "Индивидуальный проект"
subtitle: "Этап 4"
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

Добавить к сайту ссылки на научные и библиометрические ресурсы.

# Задание

- Зарегистрироваться на соответствующих ресурсах и разместить на них ссылки на сайте:
    1. eLibrary : https://elibrary.ru/;
    2. Google Scholar : https://scholar.google.com/;
    3. ORCID : https://orcid.org/;
    4. Mendeley : https://www.mendeley.com/;
    5. ResearchGate : https://www.researchgate.net/;
    6. Academia.edu : https://www.academia.edu/;
    7. arXiv : https://arxiv.org/;
    8. github : https://github.com/.
- Сделать пост по прошедшей неделе.
- Добавить пост на тему по выбору:
    1. Оформление отчёта.
    2. Создание презентаций.
    3. Работа с библиографией.

# Теоретическое введение

Команда hugo server служит для запуска локального сервера

Команда hugo служит для сборки сайта

Команда ~/bin/hugo new \<название и расположение нового поста\> служит для создания каталога с файлом _index.md для нового поста на сайте

# Выполнение лабораторной работы

Переходим в каталог ~/work/blog и запускаем hugo server.

![Запуск hugo server](image/1.png){ #fig:1 }

Открываем файл _index.md в каталоге authors, и указываем ссылки на сайты.

![Ссылки на сайты](image/2.png){ #fig:2 }

Теперь создадим статью по прошедшей неделе.

![Создание каталога со статьёй по прошедшей неделе](image/3.png){ #fig:3 }

Заполняем её текстом.

![Фрагмент файла со статьей по прошедшей неделе](image/4.png){ #fig:4 }

Теперь создадим статью на тему по выбору.

![Создание каталога со статьёй на тему по выбору](image/5.png){ #fig:5 }

Заполняем её текстом.

![Фрагмент файла со статьёй на тему по выбору](image/6.png){ #fig:6 }

Собираем сайт.

![Сборка сайта](image/7.png){ #fig:7 }

Загрузим всё на GitHub.

![Загрузка на GitHub из каталога blog](image/8.png){ #fig:8 }

![Загрузка на GitHub из каталога public](image/9.png){ #fig:9 }

# Выводы

К сайту были добавлены ссылки на научные и библиометрические ресурсы.
