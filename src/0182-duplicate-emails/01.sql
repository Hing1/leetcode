/*************************************************************************
# File Name: 01.sql
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Fri Aug  7 16:03:43 2020
 ************************************************************************/

# Write your MySQL query statement below
SELECT Email
FROM Person
GROUP BY Email
HAVING count(Email) > 1;
