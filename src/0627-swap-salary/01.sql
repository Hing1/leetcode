/*************************************************************************
# File Name: 01.sql
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Aug  8 21:27:36 2020
 ************************************************************************/

# Write your MySQL query statement below

UPDATE salary 
SET sex = CASE sex 
    WHEN 'm' 
        THEN 'f' 
        ELSE 'm' 
    END;
