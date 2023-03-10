---
## Front matter
lang: ru-RU
title: Презентация №2
subtitle: Первоначальная настройка git
author:
  - Аскеров А. Э.
institute:
  - Российский университет дружбы народов, Москва, Россия
date: 19 февраля 2023

## i18n babel
babel-lang: russian
babel-otherlangs: english

## Formatting pdf
toc: false
toc-title: Содержание
slide_level: 2
aspectratio: 169
section-titles: true
theme: metropolis
header-includes:
 - \metroset{progressbar=frametitle,sectionpage=progressbar,numbering=fraction}
 - '\makeatletter'
 - '\beamer@ignorenonframefalse'
 - '\makeatother'
---

# Вступление

## Цель работы

- Изучить идеологию и применение средств контроля версий
- Освоить умения по работе с git

## Задачи

- Создать базовую конфигурацию для работы с git
- Создать ключ SSH
- Создать ключ PGP
- Настроить подписи git
- Зарегистрироваться на Github
- Создать локальный каталог для выполнения заданий по предмету

# Выполнение лабораторной

## Базовая настройка git

Для базовой настройки git нам требуется открыть терминал и указать имя и email владельца репозитория. Также следует указать формат вывода изображений и имя начальной ветки, называемой master.

![Создание предварительной конфигурации git](image/1.png){}

## Создание SSH-ключа

Для последующей идентификации пользователя на сервере репозиториев необходимо сгенерировать пару ключей (приватный и открытый) и указать их в GitHub-аккаунте.

![Генерация ключей](image/2.png){ width=60% }

## Установка и настройка gh

Установим и настроим GitHub на нашем устройстве для последующей работы с ним.

![Настройка gh](image/3.png){ width=60% }

## Настройка автоматических подписей коммитов git

Сделаем так, чтобы Git применял указанный ранее email при подписи коммитов.

![Настройка автоматических подписей коммитов git](image/4.png){}

## pgp ключ

Создадим и добавим на GitHub приватный ключ pgp

![Генерация pgp ключа](image/5.png){}

## Создание репозитория курса на основе шаблона

Для дальнейшей работы нам понадобится репозиторий. Для этого создадим каталог для будущих работ, перейдём в него и введём команду для создания в нём шаблона с GitHub и одновременно создания репозитория в нашем GitHub-аккаунте в соответствии с использованным шаблоном.

![Создание репозитория](image/6.png){}

## Настройка каталога курса

Для того чтобы настроить каталог курса нам потребуется перейти в него. Нужно будет удалить лишние файлы, а именно json. После этого создадим необходимые каталоги и отправим файлы на сервер.

![Создание необходимых каталогов](image/7.png){}

![Отправка файлов на сервер](image/8.png){}

# Заключение

Изучены идеология и применение средств контроля версий и приобретены
умения по работе с git.


