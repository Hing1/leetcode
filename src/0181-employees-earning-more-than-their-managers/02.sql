/*************************************************************************
# File Name: 02.sql
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Aug 17 14:43:39 2020
 ************************************************************************/

# Write your MySQL query statement below
SELECT a.NAME AS Employee
FROM Employee AS a JOIN Employee AS b
    ON a.ManagerId = b.Id
    AND a.Salary > b.Salary;
