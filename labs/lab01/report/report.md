---
## Front matter
title: "Отчёт по лабораторной работе №1"
subtitle: "Установка и конфигурация операционной системы на виртуальную машину"
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

Целью данной работы является приобретение практических навыков установки операционной системы на виртуальную машину, настройки минимально необходимых для дальнейшей работы сервисов.

# Выполнение лабораторной работы

## Создание виртуальной машины

Создадим виртуальную машину.

Укажем её имя и тип.

![Указание имени и типа ВМ](image/1.png){ #fig:1 }

Укажем объём памяти ВМ.

![Указание объёма памяти ВМ](image/2.png){ #fig:2 }

Создадим новый виртуальный жёсткий диск.

![Создание нового виртуального жёсткого диска](image/3.png){ #fig:3 }

Укажем тип виртуального жёсткого диска.

![Указание типа виртуального жёсткого диска](image/4.png){ #fig:4 }

Укажем имя виртуального жёсткого диска и максимальный размер файловых данных, хранимых на этом диске.

![Указание имени и размера создаваемого файла](image/5.png){ #fig:5 }

Добавим виртуальный оптический привод Fedora i3.

![Настройка виртуального оптического привода](image/6.png){ #fig:6 }

## Установка операционной системы

Выберем в качестве модификатора клавишу Win (она же клавиша Super).

![Выбор Win как клавиши модификатора](image/7.png){ #fig:7 }

Включим терминал и запустим установку Liveinst.

![Запуск установки Liveinst](image/8.png){ #fig:8 }

В открывшемся «обзоре установки» проведём настройку.

![Открывшийся обзор установки](image/9.png){ #fig:9 }

Выберем место установки. Включим автоматическое разбиение диска.

![Выбор места установки](image/10.png){ #fig:10 }

Установим имя узла.

![Установка имени узла](image/11.png){ #fig:11 }

Установим учётную запись root.

![Установка учётной записи root](image/12.png){ #fig:12 }

### Обновления

Обновим все пакеты.

![Обновление всех пакетов](image/13.png){ #fig:13 }

### Повышение комфорта работы

Установим программы (tmux и MidnightCommander) для удобства работы в консоли.

![Установка tmux и Midnight Commander](image/14.png){ #fig:14 }

### Автоматическое обновление системы

Установим автоматическое обновление системы.

![Установка автоматического обновления системы](image/15.png){ #fig:15 }

![Включим автообновление системы по таймеру](image/16.png){ #fig:16 }

### SElinux

Откроем файл config. Найдём строчку SELinux=enforcing, и заменим enforcing на permissive.

![Смена режима работы SELinux](image/17.png){ #fig:17 }

## Установка драйверов VirtualBox

Установим пакет dkms.

![Установка пакета dkms](image/18.png){ #fig:18 }

Подключим образ диска Дополнительной гостевой ОС.

![Подключение образа диска Дополнительной гостевой ОС](image/19.png){ #fig:19 }

Подмонтируем диск.

![Монтировка диска](image/20.png){ #fig:20 }

Установим драйвера.

![Установка драйверов](image/21.png){ #fig:21 }

Перезагрузим устройство.

![Перезагрузка устройства](image/22.png){ #fig:22 }

## Установка раскладки клавиатуры

Переключимся на суперпользователя и отредактируем следующий конфигурационный файл: /etc/X11/xorg.conf.d/00-keyboard.conf. После чего перезагрузим устройство.

![Отредактированный конфигурационный файл для раскладки клавиатуры](image/23.png){ #fig:23 }

## Установка имени пользователя и названия хоста

Так как эти параметры изначально установлены верно, просто выведем их описание для просмотра.

![Просмотр имени пользователя и названия хоста](image/24.png){ #fig:24 }

## Установка программного обеспечения для создания докуметации

Установим pandoc.

![Установка pandoc](image/25.png){ #fig:25 }

Установим TeXlive.

![Установка TeXlive](image/26.png){ #fig:26 }

После того как установка завершилась, проверим наличие необходимых инструментов.

Во-первых, luatex.

![Проверка наличия luatex](image/27.png){ #fig:27 }

Во-вторых, pdflatex.

![Проверка наличия pdflatex](image/28.png){ #fig:28 }

И, в-третьих, xelatex.

![Проверка наличия xelatex](image/29.png){ #fig:29 }

## Домашнее задание

Проанализируем последовательность загрузки системы, выполнив команду dmesg | less.

![Просмотр последовательности загрузки системы](image/30.png){ #fig:30 }

Получим следующую информацию.

Версия ядра Linux (Linux version).

![Версия ядра Linux](image/31.png){ #fig:31 }

Частота процессора (Detected Mhz processor).

![Частота процессора](image/32.png){ #fig:32 }

Модель процессора (CPU0).

![Модель процессора](image/33.png){ #fig:33 }

Объём доступной оперативной памяти (Memory available).

![Объём доступной оперативной памяти](image/34.png){ #fig:34 }

Тип обнаруженного гипервизора (Hypervisor detected).

![Тип обнаруженного гипервизора](image/35.png){ #fig:35 }

Тип файловой системы корневого раздела.

![Тип файловой системы корневого раздела](image/36.png){ #fig:36 }

Последовательность монтирования файловых систем.

![Последовательность монтирования файловых систем](image/37.png){ #fig:37 }

## Контрольные вопросы

1) Логин и пароль

2)

* -h или -help. Пример: wget –help или wget -h.

* cd. Пример: cd /Gallery.

* ls. Пример: ls /Gallery.

* du. Пример: sudo du -h /Gallery.

* Создать файл touch. Пример: touch ~/newdir/dir1/dir2/test.txt

* Создать каталог mkdir. Пример: mkdir ~/dir/newdir

* Удалить файл rm. Пример: rm ~/newdir/test.txt

* Удалить каталог rm -r. Пример: rm -r ~/dir/newdir

* chmod. Пример: chmod g-w file.txt

* history. Пример: history

3) Файловая система - способ организации, хранения и именования данных на носителях информации. Примеры: Ext2, Ext3, Ext4 (Extended Filesystem) - стандартная файловая система для Linux. FAT32 (от англ. File Allocation Table — «таблица размещения файлов») — файловая система, разработанная компанией Microsoft, разновидность FAT. NTFS (аббревиатура от англ. new technology file system — «файловая система новой технологии») — стандартная файловая система для семейства операционных систем Windows.

4) Команда findmnt для просмотра смонтированных файловых систем в Linux.

5) Команда kill принимает в качестве параметра PID процесса. Пример: kill (PID процесса)


# Выводы

Приобретены практические навыки установки операционной системы на виртуальную машину, настройки минимально необходимых для дальнейшей работы сервисов.
