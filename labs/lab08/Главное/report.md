---
## Front matter
title: "Отчёт по лабораторной работе №8"
subtitle: "Текстовый редактор vi"
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

Познакомиться с операционной системой Linux. Получить практические навыки работы с редактором vi, установленным по умолчанию практически во всех дистрибутивах.

# Задание

1. Создание нового файла с использованием vi

2. Редактирование существующего файла

# Теоретическое введение

В большинстве дистрибутивов Linux в качестве текстового редактора по умолчанию устанавливается интерактивный экранный редактор vi (Visual display editor).

Редактор vi имеет три режима работы:

– командный режим — предназначен для ввода команд редактирования и навигации по редактируемому файлу;

– режим вставки — предназначен для ввода содержания редактируемого файла;

– режим последней (или командной) строки — используется для записи изменений в файл и выхода из редактора.

Для вызова редактора vi необходимо указать команду vi и имя редактируемого файла: vi \<имя_файла\>.

Переход в командный режим осуществляется нажатием клавиши Esc. Для выхода из редактора vi необходимо перейти в режим последней строки: находясь в командном режиме, нажать Shift-:, затем:

– набрать символы wq, если перед выходом из редактора требуется записать изменения в файл;

– набрать символ q (или q!), если требуется выйти из редактора без сохранения.

Редактор vi различает прописные и строчные буквы при наборе (восприятии) команд.

# Выполнение лабораторной работы

## Задание 1. Создание нового файла с использованием vi

1. Создадим каталог с именем ~/work/os/lab06.

![Создание каталога ~/work/os/lab06](image/1.png){ #fig:1 }

2. Перейдём во вновь созданный каталог.

![Переход в созданный каталог](image/2.png){ #fig:2 }

3. Вызовем vi и создадим файл hello.sh.

![Вызов vi и создание файла hello.sh](image/3.png){ #fig:3 }

4. Нажмём клавишу i и введём следующий текст.

![Ввод текста](image/4.png){ #fig:4 }

5. Нажмём клавишу Esc для перехода в командный режим после завершения ввода текста.

6. Нажмём “:” для перехода в режим последней строки и внизу экрана появится приглашение в виде двоеточия.

![Приглашение в виде двоеточия](image/5.png){ #fig:5 }

7. Нажмём w (записать) и q (выйти), а затем нажмём клавишу Enter для сохранения текста и завершения работы.

![Команды “w” и “q”](image/6.png){ #fig:6 }

8. Сделаем файл исполняемым с помощью команды chmod.

![Делаем файл исполняемым](image/7.png){ #fig:7 }

## Задание 2. Редактирование существующего файла

1. Вызовем vi на редактирование файла.

![Вызов vi на редактирование файла](image/8.png){ #fig:8 }

2. Установим курсор в конце слова HELL второй строки.

![Положение курсора](image/9.png){ #fig:9 }

3. Перейдём в режим вставки и заменим HELL на HELLO. Нажмём Esc для возврата в командный режим.

![Изменённая строка](image/10.png){ #fig:10 }

4. Установим курсор на четвёртую строку и сотрём слово LOCAL.

![Сотрём слово LOCAL](image/11.png){ #fig:11 }

5. Перейдём в режим вставки и наберём следующий текст: local. Нажмём Esc для возврата в командный режим.

![Слово local маленькими буквами](image/12.png){ #fig:12 }

6. Установим курсор на последней строке файла. Вставим после неё строку, содержащую следующий текст: echo $HELLO.

![Вставка текста](image/13.png){ #fig:13 }

7. Нажмём Esc для перехода в командный режим.

8. Удалим последнюю строку.

![Строка удалена](image/14.png){ #fig:14 }

9. Введём команду отмены изменений “u” для отмены последней команды.

![Возврат удалённой строки](image/15.png){ #fig:15 }

10. Введём символ “:” для перехода в режим последней строки. Запишем произведённые изменения и выйдем из vi.

![Запись произведённых изменений](image/16.png){ #fig:16 }

## Контрольные вопросы

1. Дайте краткую характеристику режимам работы редактора vi.

Редактор vi имеет три режима работы:

- командный режим: предназначен для ввода команд редактирования и навигации по редактируемому файлу;
- режим вставки: предназначен для ввода содержания редактируемого файла;
- режим последней (или командной) строки: используется для записи изменений в файл и выхода из редактора. 

2. Как выйти из редактора, не сохраняя произведённые изменения?

Чтобы выйти из редактора, не сохраняя произведённые изменения, нужно в режиме командной строки нажать клавиши «:» «q» «!» 

3. Назовите и дайте краткую характеристику командам позиционирования.

Команды позиционирования:

- «0» (ноль): переход в начало строки;
- «$»: переход в конец строки;
- «G»: переход в конец файла;
- n«G»: переход на строку с номером n. 

4. Что для редактора vi является словом?

При использовании прописных W и B под разделителями понимаются только пробел, табуляция и возврат каретки. При использовании строчных w и b под разделителями понимаются также любые знаки пунктуации. 

5. Каким образом из любого места редактируемого файла перейти в начало (конец) файла?

Чтобы из любого места редактируемого файла перейти в начало (конец) файла, нужно в режиме командной строки нажать клавиши «1» «G» («G»). 

6. Назовите и дайте краткую характеристику основным группам команд редактирования.

Команды редактирования:

Вставка текста:

- «а»: вставить текст после курсора;
- «А»: вставить текст в конец строки;
- «i»: вставить текст перед курсором;
- n «i»: вставить текст n раз;
- «I»: вставить текст в начало строки.

Вставка строки:

- «о»: вставить строку под курсором;
- «О»: вставить строку над курсором.

Удаление текста:

- «x»: удалить один символ в буфер;
- «d» «w»: удалить одно слово в буфер;
- «d» «$»: удалить в буфер текст от курсора до конца строки;
- «d» «0»: удалить в буфер текст от начала строки до позиции курсора;
- «d» «d»: удалить в буфер одну строку;
- n «d» «d»: удалить в буфер n строк.

Отмена и повтор произведённых изменений:

- «u»: отменить последнее изменение;
- «.»: повторить последнее изменение.

Копирование текста в буфер:

- «Y»: скопировать строку в буфер;
- n «Y»: скопировать n строк в буфер;
- «y» «w»: скопировать слово в буфер.

Вставка текста из буфера:

- «p»: вставить текст из буфера после курсора;
- «P»: вставить текст из буфера перед курсором.

Замена текста:

- «c» «w»: заменить слово;
- n «c» «w»: заменить n слов;
- «c» «$»: заменить текст от курсора до конца строки;
- «r»: заменить слово;
- «R»: заменить текст.

Поиск текста:

- «/» текст: произвести поиск вперёд по тексту указанной строки символов текст;
- «?» текст: произвести поиск назад по тексту указанной строки символов текст.

Копирование и перемещение текста:

- «:» n,m «d»: удалить строки с n по m;
- «:» i,j «m» k: переместить строки с i по j, начиная со строки k;
- «:» i,j «t» k: копировать строки с i по j в строку k;
- «:» i,j «w» имя-файла: записать строки с i по j в файл с именем имя-файла. 

7. Необходимо заполнить строку символами $. Каковы ваши действия?

Чтобы заполнить строку символами, необходимо для начала перейти на эту строку, нажав клавиши n «G», где n – номер строки, далее нажать «0» для перехода в начало строки. Теперь необходимо нажать «c» «$», чтобы заменить текст от курсора до конца строки, и ввести символы $. 

8. Как отменить некорректное действие, связанное с процессом редактирования?

Чтобы отменить по одному предыдущему действию последовательно, необходимо нажать «u». Чтобы отменить все изменения, произведённые со времени последней записи, нужно нажать «:» «e» «!». 

9. Назовите и дайте характеристику основным группам команд режима последней строки.

Команды редактирования в режиме командной строки

Копирование и перемещение текста:

- «:»n,m «d»: удалить строки с n по m;
- «:»i,j «m» k: переместить строки с i по j, начиная со строки k;
- «:»i,j «t» k: копировать строки с i по j в строку k;
- «:»i,j «w» имя-файла: записать строки с i по j в файл с именем имя-файла.

Запись в файл и выход из редактора:

- «:» «w»: записать изменённый текст в файл, не выходя из vi;
- «:» «w» имя-файла: записать изменённый текст в новый файл с именем имя-файла;
- «:» «w» «!» имя-файла: записать изменённый текст в файл с именем имя-файла;
- «:» «w» «q»: записать изменения в файл и выйти из vi;
- «:» «q»: выйти из редактора vi;
- «:» «q» «!»: выйти из редактора без записи;
- «:» «e» «!»: вернуться в командный режим, отменив все изменения, произведённые со времени последней записи.

Опции:

Опции редактора vi позволяют настроить рабочую среду. Для задания опций используется команда set (в режиме последней строки):

- «:»set all: вывести полный список опций;
- «:»set nu: вывести номера строк;
- «:»set list: вывести невидимые символы;
- «:»set ic: не учитывать при поиске, является ли символ прописным или строчным.
Если вы хотите отказаться от использования опции, то в команде set перед именем опции надо поставить no. 

10. Как определить, не перемещая курсора, позицию, в которой заканчивается строка?

Чтобы определить, не перемещая курсора, позицию, в которой заканчивается строка, нужно в командном режиме находясь на нужной строке нажать «$» и посмотреть на число после запятой в правом нижнем углу экрана.

11. Выполните анализ опций редактора vi (сколько их, как узнать их назначение и т.д.).

Опции редактора vi позволяют настроить рабочую среду. Для задания опций используется команда set (в режиме командной строки). Если вы хотите отказаться от использования опции, то в команде set перед именем опции надо поставить no. Чтобы просмотреть опции редактора vi, необходимо нажать «:» set all. Нажав «:» help “название_опции”, можно узнать назначение конкретной опции.

12. Как определить режим работы редактора vi?

В режиме командной строки внизу редактора присутствует «:», в режиме ввода – «–ВСТАВКА–», в командном режиме внизу ничего нет. 

13. Постройте граф взаимосвязи режимов работы редактора vi.
- Командный режим: это режим по умолчанию, когда вы открываете файл в vi. В этом режиме вы можете перемещаться по файлу, искать текст, удалять текст, копировать и вставлять текст, а также выполнять различные команды с помощью сочетаний клавиш.
- Режим вставки: в этом режиме вы можете вставить новый текст в файл. Чтобы войти в режим вставки, нажмите клавишу «i» в командном режиме. Чтобы выйти из режима вставки и вернуться в командный режим, нажмите клавишу Esc.
- Визуальный режим: в этом режиме вы можете визуально выделять текст с помощью различных сочетаний клавиш. Этот режим полезен для выполнения операций над определенным блоком текста, таких как его копирование или удаление. Чтобы войти в визуальный режим, нажмите клавишу «v» в командном режиме. Чтобы выйти из визуального режима и вернуться в командный режим, нажмите клавишу Esc.

# Выводы

Произведено ознакомление с операционной системой Linux. Получены практические навыки работы с редактором vi, установленным по умолчанию практически во всех дистрибутивах.
