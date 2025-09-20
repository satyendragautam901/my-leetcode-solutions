# Write your MySQL query statement below
(select name as results from Users U
inner join MovieRating M on u.user_id = M.user_id
group by U.user_id -- group by user, ki kaun kitna rating diya hai
order by count(M.rating) desc, U.name -- agar do user same rating diya hai to pehle wale ko....
limit 1)

union all

(select title as results from Movies M
inner join MovieRating MR on MR.movie_id  = M.movie_id

where Month(MR.created_at) = '02' and year(MR.created_at) = '2020'
group by M.title 
order by avg(MR.rating) desc, M.title
limit 1)