SELECT ROUND(
    COUNT(DISTINCT player_id) / (SELECT COUNT(DISTINCT player_id) FROM Activity),
    2
) AS fraction
FROM Activity