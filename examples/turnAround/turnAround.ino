#include "BiWheel.h" //подключение библиотеки

biWheel4 chassis = biWheel4(11,3,9,10); //создание объекта класса biWheel
//аргументы - цифровые пины Arduino, к которым подключены IN1, IN2, IN3, IN4 H-моста

void setup(){} //остаётся пустым

// Основной метод drive вращает заданный мотор с заданной скоростью.
// LM - левый мотор, RM - правый мотор.
// Скорость указывается от 0 до 100 по модулю:
// 0 - стоп, 100 - максимальная скорость.
// Отрицательная скорость - мотор вращается назад.
// Мотор может не крутиться при указании маленькой скорости - это зависит от конкретной модели мотора.
// После использования метода drive мотор будет продолжать крутиться в указанную сторону с указанной скоростью,
// пока не будет вызван новый метод с новыми значениями. 

void loop(){
	chassis.drive(LM,100); 	//левый мотор вращается вперед с максимальной скоростью
	chassis.drive(RM,-100);	//правый мотор вращается назад с максимальной скоростью
	delay(2000);		//пауза 2 секунды
	chassis.drive(LM,-80);	//левый мотор вращается назад со скоростью 80% от максимальной
	chassis.drive(RM,80);	//правый мотор вращается вперед со скоростью 80% от максимальной
	delay(3000);		//пауза 3 секунды
	chassis.drive(LM,0);	//стоп левого мотора
	chassis.drive(RM,0);	//стоп правого мотора
	delay(1000);		//пауза 1 секунда
}
