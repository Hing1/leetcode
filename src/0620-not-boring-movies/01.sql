/*************************************************************************
# File Name: 01.sql
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sun Aug  9 16:24:30 2020
 ************************************************************************/

# Write your MySQL query statement below
SELECT *
FROM cinema
WHERE description != "boring" 
# AND id % 2 != 0
  AND MOD(id, 2) = 1
ORDER BY rating DESC;
