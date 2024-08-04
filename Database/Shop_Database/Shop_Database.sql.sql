
USE Shop_Database;

-- Get all Customers
SELECT * FROM Customers

-- Get all Orders
SELECT * FROM Orders

SELECT Customers.CustomerID, Customers.Name, Orders.amount FROM Customers INNER JOIN Orders
ON Customers.CustomerID = Orders.CustomerID

Where Orders.Amount > 500;


