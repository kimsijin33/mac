// 하루 10분 SQL 학습 
// 20250111
// oracle 기반

//95p
SELECT CLASS_CD,
	SUM(KOR) AS TOT_KOR,
	AVG(KOR) AS AVG_KOR,
	MIN(KOR) AS MIN_KOR,
	MAX(KOR) AS MAX_KOR,
	COUNT(*) AS COUNT
FROM TB_GRADE
GROUP BY CLASS_CD;


