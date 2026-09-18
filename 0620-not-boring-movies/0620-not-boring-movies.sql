# Write your MySQL query statement below
-- select id , movie, description, rating from Cinema
-- * is used to get all the column values and c we have used just form the alice name 
select * from Cinema c  
where c.description !='boring' AND c.id %2 =1
order by c.rating desc;