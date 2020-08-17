/*************************************************************************
# File Name: 01.sql
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Aug 17 14:41:57 2020
 ************************************************************************/

# Write your MySQL query statement below
SELECT Name AS Employee
FROM Employee AS e1
WHERE e1.Salary > (
    SELECT e2.Salary
    FROM Employee AS e2
    WHERE e1.ManagerId = e2.Id);
