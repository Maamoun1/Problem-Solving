--TO GET All Employees
SELECT * FROM Employees

--TO GET All Employees with other solutions
SELECT Employees.* FROM Employees

--To Get ID,FirstName,LastName,MonthSalary From Employyes
Select ID, FirstName, LastName,MonthlySalary From Employees;

--Get All Departments
Select * from Departments;

--Get All Countries
Select * from Countries;

--Get All DepartmentID
Select DepartmentID from Employees;

--Get All DepartmentID without duplicated
Select Distinct DepartmentID from Employees;

--Get All FirstName and DepartmentID 
Select FirstName, DepartmentID from Employees;

--Get All FirstName and DepartmentID without duplicated
Select distinct FirstName, DepartmentID from Employees;

--Get All Employees that Gendor female
Select * from Employees where Gendor='F';

--Get All Employees that MonthlySalary less than or equal 700
Select * from Employees where  MonthlySalary<=700;

--Get All Employees that MonthlySalary less than or equal 700 using Not
Select * from Employees where NOT MonthlySalary>=700;

--Get All Employess that Salary less than 700 and Genor is female
Select * from Employees where MonthlySalary<700 and Gendor='F';

--Get All Employess that Salary less than 700 and Genor is female using Not
Select * from Employees where NOT MonthlySalary>700 and NOT Gendor='M';

--Get All Employees that CountryID not equal one 
select * from Employees where CountryID>1;

--Get All Employees that CountryID not equal one
select * from Employees where   CountryID <>1;

--Get All Employees that CountryID not equal one.
select * from Employees where NOT CountryID=1;
--**********************************************
--Get All Employees that DepartmentID  equal one.
select * from Employees where DepartmentID=1;

--Get All Employees that DepartmentID  equal one and Genor Male
select * from Employees where DepartmentID=1 and Gendor='M';

--Get All Employees that DepartmentID  equal and quale 2
select * from Employees where DepartmentID=1 Or DepartmentID=2;

--Get All Employees that work now
Select * from Employees where ExitDate is Null;

--Get All Employees that not work now.
Select * from Employees where ExitDate  is Not Null;


