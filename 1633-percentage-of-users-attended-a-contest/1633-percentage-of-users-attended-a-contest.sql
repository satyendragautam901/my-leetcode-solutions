# Write your MySQL query statement below
select R.contest_id, round(count(R.contest_id) * 100.0 / (select count(*) from Users), 2) as percentage from Users as C join Register as R on
C.user_id = R.user_id group by contest_id order by percentage desc, contest_id asc;