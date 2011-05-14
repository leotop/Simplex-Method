/*
 * Этот заголовочный файл содержаит
 * различные классы, объекты и функции которых
 * необходимы для реализации алгоритма
 * поставленной задачи. В данном содержатся
 * только прототипы функций-членов, сами же
 * функции находятся в файле simplex.cpp,
 * которых находится в этой же диррекстории
*/

/*
 * Этот класс содержит объекты, хранящие
 * в себе исходные данные задачи, такие как
 * Функция цели и система неравенств.
*/

#ifndef _SOURCE_DATA_H_
#define _SOURCE_DATA_H_ 1

class InputData {

	public:
	
		/* 
		 * Данная функция дает пользователю возможность
		 * выбора метода ввода (с клавиатуры и из файла).
		*/
		
		bool selectInputMethod();
		
		/*
		 * Данная функция задает име входного файла.
		 * Если пользователь выбрал метод ввода с клавиатуры,
		 * то задается значение -1
		*/

		void setInputFile();

		/*
		 * Данная функция объединяет все функции
		 * данного класса, т.е. принимает и задает
		 * Входные данные для последующего решения
		 * Задачи.
		*/

		void getAndSetInputData();

		/*
		 * Данная функция принимает все свободные члены
		 * системы неравенств и возвращает их значения
		 * в качестве указателя.
		*/

		double * getFreeMembersOfSystem();
		
		/*
		 * Данная функция присваивает закрытому члену freeMembersOfSystem
		 * (Свободные члены системы неравенств) значения, полученные из
		 * функции getFreeMembersOfSystem
		*/

		void setFreeMembersOfSystem ();

		/*
		 * Данная функция принимает все коэффициенты
		 * переменных системы неравенств и возвращает
		 * их значения в качестве указателя.
		*/

		double ** getFactorsOfSystemVars();

		/*
		 * Данная функция присваивает закрытому члену factorOfSystemVars
		 * (Коэффициенты переменных в системе неравенств) значение
		 * полученное из функции getFactorsOfSystemVars/
		*/

		void setFactorsOfSystemVars();

		/*
		 * Данная функция принимает коэффициенты
		 * переменных Целевой функции, введенные
		 * пользователем с клавиатуры и возвращает
		 * Указатель на эти значения.
		*/

		double * getFactorsOfTargetFunctionVars();

		/*
		 * Данная функция задает значение, полученное из
		 * функции getFactorsOfTargetFunctionVars()
		 * закрытому члену factorsOfTargetFunctionVars.
		*/

		void setFactorsOfTargetFunctionVars();

		/*
		 * Данная фукнция принимает количество
		 * основных переменных задачи, введенное 
		 * пользователем с клавиатуры 
		 * и возвращает это значение.
		*/

		int getNumOfSourceVars();

		/*
		 * Данная функция задает закрытому члену класса
		 * NumOfSourceVars (Количество основных переменных
		 * задачи) Значение, которая возвращает функция
		 * getNumOfSourceVars()/
		*/

		bool setNumOfSourceVars();

		/*
		 * Данная функция принимает значение
		 * направления целевой функции поставленной
		 * задачи, проверяет его на корректность, если
		 * все верно возвращает 1 или 0 в зависимости от
		 * введенного пользователя значения. 
		*/

		bool getWayOfTargetFunction();

		/*
		 * Данная функция задает направаление
		 * целевой функции поставленной задачи.
		*/
		
		void setWayOfTargetFunction();

		/*
		 * Данная фукнция принимает целочисленный аргумент
		 * и возвращает пользователю ошибку, соответствующую
		 * этому аргументу.
		*/

		void error(int numberOfError);

	protected:
	
		/*
		 * Метод ввода данных (вручную/из файла).
		*/

		bool inputMethod;

		/*
		 * Имя входного текстового файла.
		 * если пользователь выбрал ручной метод
		 * ввода, то значение данного члена
		 * будет равно -1
		*/

		char * inputFileName;

		/*
		 * Количество исходных переменных
		 * целевой функции и системы неравенств
		*/

		int numOfSourceVars; 

		/*
		 * Коэффициенты переменных
		 * целевой функции
		*/

		double *  factorsOfTargetFunctionVars;
	
		/*
		 * Направление целевой функции
		 * (минимум/максимум).
		*/

		bool wayOfTargetFunction;
		
		/*
		 * Коэффициенты переменных при
		 * системе неравенств
		*/

		double ** factorsOfSystemVars;

		/*
		 * Значения свободных членов
		 * про системе неравенств
		*/

		double * freeMembersOfSystem;
};
#endif
