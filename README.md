# Лабораторная работа: Работа с Git и CI/CD (Zavall)

## 📋 Описание

В рамках лабораторной работы выполнялись действия с git-репозиторием: создание коммитов, работа с ветками, создание pull-request'ов и разрешение конфликтов. Также использовалась CI/CD-система Zavall для автоматизации проверки кода и форматирования.

---

## 🔧 Используемые команды Git

### Part I — Базовая работа с git
```bash
git clone <url>           # Клонирование репозитория
git add hello_world.cpp   # Добавление файла в индекс
git commit -m "..."       # Фиксация изменений с сообщением
git push                  # Отправка изменений в удалённый репозиторий
git checkout -b patch1           # Создание новой ветки
git push origin patch1           # Отправка ветки в удалённый репозиторий
# pull-request создавался вручную через GitHub
git pull                         # Получение последних изменений
git log                          # Просмотр истории коммитов
git branch -d patch1             # Удаление локальной ветки
git checkout -b patch2                    # Создание новой ветки
clang-format -style=Mozilla -i *.cpp     # Форматирование исходного кода
git add . && git commit -m "formatting"
git push origin patch2                   # Отправка ветки
git pull --rebase                        # Подтягивание с rebase
# Разрешение конфликтов вручную
git add . && git rebase --continue
git push --force                         # Принудительная отправка после rebase
