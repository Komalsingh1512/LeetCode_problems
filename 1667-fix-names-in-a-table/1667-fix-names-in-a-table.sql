# Write your MySQL query statement below
select user_id, CONCAT(upper(substring(name, 1,1)),lower(substring(name,2))) as name from Users

order by user_id;

-- SUBSTRING(name,1,1) gets the first character
-- UPPER() converts first character to uppercase
-- SUBSTRING(name,2) gets all characters from position 2 to end
-- LOWER() converts the rest to lowercase
-- CONCAT() combines the uppercase first letter with lowercase rest