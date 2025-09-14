# Write your MySQL query statement below
select id, count(*) as num
from(
    select requester_id as id from RequestAccepted 
    union all -- union all allows duplicates
    select accepter_id  from RequestAccepted 
) as frr
group by id -- count based on id
order by num desc -- max cnt come top
limit 1;
