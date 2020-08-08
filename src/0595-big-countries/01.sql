/*************************************************************************
# File Name: 01.sql
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Fri Aug  7 13:50:26 2020
 ************************************************************************/

# Write your MySQL query statement below
SELECT name, population, area
FROM World
WHERE population > 25000000 OR area > 3000000;
