# Write your MySQL query statement below
-- select actor_id, director_id from ActorDirector
-- where timestamp =0;
select actor_id, director_id from ActorDirector
group by actor_id, director_id 
having count(timestamp) >=3
-- group by actor_id, director_id ... this is used because we are considering both this 