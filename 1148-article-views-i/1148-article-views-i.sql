# Write your MySQL query statement below
select distinct author_id as id from Views
where author_id = viewer_id 
order by id;
-- we have to use distinct for the unique value and we have used order by for the asc order