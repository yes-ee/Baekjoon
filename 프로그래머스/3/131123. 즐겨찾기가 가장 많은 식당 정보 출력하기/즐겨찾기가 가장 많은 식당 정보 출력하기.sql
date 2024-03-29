-- 코드를 입력하세요
# SELECT FOOD_TYPE, REST_ID, REST_NAME, FAVORITES
# FROM REST_INFO
# WHERE FAVORITES = (SELECT )

SELECT F.FOOD_TYPE, R.REST_ID, R.REST_NAME, R.FAVORITES
FROM REST_INFO AS R,
(SELECT FOOD_TYPE, MAX(FAVORITES) AS MF
FROM REST_INFO
GROUP BY FOOD_TYPE) AS F
WHERE R.FOOD_TYPE = F.FOOD_TYPE AND R.FAVORITES = F.MF
ORDER BY FOOD_TYPE DESC