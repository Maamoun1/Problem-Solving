#include<iostream>
using namespace std;

/*
Write a program to calculate the task duration in seconds and print it on screen
 ?Given the time duration of a task in the number of days, hours, minutes, and seconds,
*/

int ReadPostiveNumber(string message)
{
	int number{ 0 };

	do
	{

		cout << message;
		cin >> number;

	} while (number < 0);

	return number;
}

struct stTaskDuration
{
	float Days;
	float Hours;
	float Minutes;
	float Seconds;
};

stTaskDuration ReadTaskDuration()
{
	stTaskDuration TaskDuration;

	TaskDuration.Days    = ReadPostiveNumber("Please Enter Number of Days? ");
	TaskDuration.Hours   = ReadPostiveNumber("Please Enter Number of Hours? "); 
	TaskDuration.Minutes = ReadPostiveNumber("Please Enter Number of Miutes? ");	 
	TaskDuration.Seconds = ReadPostiveNumber("Please Enter Number of Seconds? ");

	return TaskDuration;
}

int TaskDurationInSeconds(stTaskDuration TaskDuration)
{
	int TaskDurationPerSecond;

	TaskDurationPerSecond = TaskDuration.Days * 24 * 60 * 60;
	TaskDurationPerSecond += TaskDuration.Hours * 60 * 60;
	TaskDurationPerSecond += TaskDuration.Minutes * 60;
	TaskDurationPerSecond += TaskDuration.Seconds;

	return TaskDurationPerSecond;
}


int main()
{

	cout << "Result = " << TaskDurationInSeconds(ReadTaskDuration());

	return 0;
}