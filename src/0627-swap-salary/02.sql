/*************************************************************************
# File Name: 02.sql
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Aug  8 21:28:21 2020
 ************************************************************************/

# Write your MySQL query statement below

UPDATE salary
SET sex = IF(sex = 'm', 'f', 'm');
