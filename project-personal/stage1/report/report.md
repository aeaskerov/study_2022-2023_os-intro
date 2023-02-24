---
## Front matter
title: "Индивидуальный проект"
subtitle: "Этап 1"
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

Размещение на Github pages заготовки для персонального сайта.

# Задание

* Установить необходимое программное обеспечение.
* Скачать шаблон темы сайта.
* Разместить его на хостинге git.
* Установить параметр для URLs сайта.
* Разместить заготовку сайта на Github pages.

# Выполнение этапа 1

Скачиваем Hugo на сайте GitHub.

![Установка Hugo](image/1.png){ #fig:1 }

Переходим в загрузки. Разархивируем скачанный файл. Переходим в него. Вырезаем файл hugo. Переходим в Домашнюю папку и создаём в ней каталог bin. Переходим в bin. Вставляем вырезанный файл hugo.

![Размещение файла hugo в каталоге bin](image/2.png){ #fig:2 }

Сделаем клон репозитория для будущего сайта.

![Создание репозитория blog](image/3.png){ #fig:3 }

Клонируем репозиторий на устройство.

![Клонирование репозитория blog](image/4.png){ #fig:4 }

Перейдём в каталог blog и посмотрим на загрузившиеся файлы.

![Файлы в каталоге blog](image/5.png){ #fig:5 }

Теперь выполним файл hugo.

![Выполнение файла hugo](image/6.png){ #fig:6 }

Удалим создавшийся каталог public.

![Удаление каталога public](image/7.png){ #fig:7 }

Выполним команду ~/bin/hugo server, после чего откроем страничку нашего сайта, пока что локального.

![Получение ссылки для перехода на Web Server](image/8.png){ #fig:8 }

Открываем наш сайт.

![Просмотр сайта](image/9.png){ #fig:9 }

Создадим репозиторий для нашего сайта.

![Создание репозитория для сайта](image/10.png){ #fig:10 }

Клонируем на устройстве репозиторий для сайта рядом с каталогом blog.

![Клонирование репозитория для сайта](image/11.png){ #fig:11 }

Переключимся на ветку main.

![Переключение на ветку main](image/12.png){ #fig:12 }

Создадим файл README.md, чтобы активировать репозиторий.

![Создание файла README.md](image/13.png){ #fig:13 }

Загрузим новые файлы на GitHub.

![Загрузка новых файлов на GitHub](image/14.png){ #fig:14 }

Выполним команду, которая подключит новый репозиторий к каталогу public внутри каталога blog.

![Подключение нового репозитория к каталогу public](image/15.png){ #fig:15 }

Отредактируем файл .gitignore, закомментировав строчку public/,чтобы избавиться от ошибки. Удостоверимся в выполнении внесённых изменений.

![Просмотр содержимого файла .gitignore](image/16.png){ #fig:16 }

Повторно выполним команду, которая подключит новый репозиторий к каталогу public внутри каталога blog.

![Повторное подключение нового репозитория к каталогу public](image/17.png){ #fig:17 }

Теперь всё, что будет добавляться в папку public, будет показываться в репозитории сайта.

Находясь в каталоге blog, выполним команду ~/bin/hugo, чтобы обновить файлы в каталоге.

![Обновим файлы в каталоге blog](image/18.png){ #fig:18 }

После этой команды в каталоге появились файлы для нашего сайта.

Убедимся, что каталог подключён к репозиторию.

![Проверка правильности подключения](image/19.png){ #fig:19 }

Теперь синхронизируем файлы с репозиторием. Перейдём в каталог public. И введём команды git add, git commit –am, git push.

Обновим страницу репозитория на сайте GitHub и убедимся, что всё отображается.

![Проверка наличия необходимых файлов в репозитории](image/20.png){ #fig:20 }

Посмотрим, загрузится ли наш сайт в интернете, если ввести его адрес в адресную строку. Видим, что всё отображается.

![Проверка работы сайта](image/21.png){ #fig:21 }

# Выводы

Был приобретён навык размещения на Github pages заготовки для персонального сайта.
