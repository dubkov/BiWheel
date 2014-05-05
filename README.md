biWheel
=======
Библиотека для двухколесного шасси, управляемого H-мостом типа L298 или L293. 

Библиотека предназначена для Arduino IDE 1.0 и старше.

Установка библиотеки
-------
Скачайте архив с библиотекой, кликнув на кнопку Download ZIP справа от этой записи. 

Распакуйте содержимое и переименуйте папку biWheel-master в biWheel. Папку поместите в Arduino/libraries. 

После запуска Arduino IDE в примерах (Файл->примеры) появится строчка biWheel с примером использования библиотеки. 
Описание методов содержится в примере.

Подключение двигателей
-------

Для того, чтобы библиотека заработала с ходу для вашего шасси, следует подключать провода от моторов следующим образом:

нижний провод правого мотора к OUT1,

верхний провод правого мотора к OUT2,

нижний провод левого мотора к OUT3,

верхний провод левого мотора к OUT4.

Подключение H-моста
-------

Библиотека предусматривает два способа подключения H-моста к Arduino:

1 - подключение 4-х проводов к входам H-моста IN1, IN2, IN3, IN4;

2 - подключение 6-и проводов к входам H-моста IN1, IN2, IN3, IN4, ENA, ENB.

Поведение шасси будет идентичным, разница лишь в количестве используемых пинов Arduino и используемых каналов ШИМ. При 1-м способе подключения занято 4 пина, причём все 4 должны уметь генерировать ШИМ-сигнал, таким образом подключение второго H-моста к плате Arduino представляется затруднительным. При втором способе подключения занято 6 пинов, из которых всего 2 должны уметь генерировать ШИМ-сигнал, и при желании можно подключить до 3-х мостов на одну плату.



Свяжитесь с нами
-------
[Официальный сайт](http://www.skbrii.ru)

[Группа Вконтакте](https://www.vk.com/skbrii)






