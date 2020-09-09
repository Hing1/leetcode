/*************************************************************************
# File Name: 01.sql
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Sep  9 23:09:55 2020
 ************************************************************************/

# Write your MySQL query statement below
SELECT Name AS Customers FROM Customers
WHERE Id NOT IN (SELECT CustomerId
                 FROM Orders);
