---
## Front matter
title: "Отчёт по лабораторной работе №3"
subtitle: "Markdown"
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

Научиться оформлять отчёты с помощью легковесного языка разметки Markdown.

# Задание

* Сделать отчёт по предыдущей лабораторной работе в формате Markdown
* В качестве отчёта предоставить отчёты в 3 форматах: pdf, docx и md (в архиве, поскольку он должен содержать скриншоты, Makefile и т.д.)

# Выполнение лабораторной работы

Открываем файл report.md и указываем номер лабораторной работы, её название и имя автора.

![Заполнение титульного листа](image/1.png){ #fig:1 }

Указываем цель работы.

![Указание цели работы](image/2.png){ #fig:2 }

Указываем задачи лабораторной работы.

![Указание заданий](image/3.png){ #fig:3 }

Заполняем раздел Выполнение лабораторной работы, указываем заголовки и добавляем скриншоты с поясняющими подписями.

![Заполнение раздела с выполнением лабораторной работы](image/4.png){ #fig:4 }

Записываем ответы на контрольные вопросы.

![Заполнение ответов на контрольные вопросы](image/5.png){ #fig:5 }

Указываем вывод к лабораторной работе.

![Указание вывода](image/6.png){ #fig:6 }

После заполнения отчёта в файле report.md вводим в консоли команду make, которая формирует отчёт в форматах docx и pdf.

![Отчёт в разных форматах](image/7.png){ #fig:7 }

Создаём архив с отчётом в разных форматах и скриншотами.

![Архив с отчётом в разных форматах и скриншотами](image/8.png){ #fig:8 }

# Выводы

Приобретены навыки оформления отчётов с помощью легковесного языка разметки Markdown.
