# Write your MySQL query statement below
-- in this question we need to join the same table with itself to know the starting and ending time
SELECT
machine_id,
ROUND(
AVG(CASE WHEN activity_type = 'end' THEN timestamp ELSE NULL END) -
AVG(CASE WHEN activity_type = 'start' THEN timestamp ELSE NULL END),
3
) as processing_time

from activity
group by machine_id