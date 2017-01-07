//GetYear.c
/*
 * 파일 명칭 : GetYear.c
 * 함수 명칭 : main
 * 기    능 : 1996년부터 시작해서 H도시의 인구수가 K도시의 인구수 보다 클때, 그떄 해당연도를 출력한다.
 * 입    력 : 없음
 * 출    력 : 연도
 * 작 성 자 : Joey
 * 작성일자 : 2017/01/08
 */

//외부 함수 포함기능
#include <stdio.h>

//매크로들
#define HRATEOFINCRESE 3.6F
#define KRATEOFINCRESE 4.2F

//사용자 정의 자료형 선언
typedef unsigned long int ULong;
typedef unsigned short int UShort;

//메인 함수 선언
int main(int argc, char* argv[]);

//메인 함수 정의
int main(int argc, char* argv[]) {
	//자동변수 선언들
	auto UShort year = 1996;
	auto ULong hCityPopulation = 2500000;
	auto ULong kCityPopulation = 1800000;

	//1.K시의 인구수가 H시의 인구수보다 작거나 같은동안 반복한다.
	while(kCityPopulation <= hCityPopulation) {
		//1.4. 연도, H시의 인구수, K시의 인구수를 출력한다.
		printf("%d %ld %ld\n", year, hCityPopulation, kCityPopulation);

		//1.1. 연도를 세다.
		year++;

		//1.2. H시의 인구수를 구한다.
		hCityPopulation += (((hCityPopulation * (ULong)(HRATEOFINCRESE * 10)) / 10) / 100);

		//1.3. K시의 인구수를 구한다.
		kCityPopulation += (((kCityPopulation * (ULong)(KRATEOFINCRESE * 10)) / 10) / 100);
	}

	//2. 연도, H시의 인구수, K시의 인구수를 출력한다.
	printf("%d %ld %ld\n", year, hCityPopulation, kCityPopulation);

	//3. 끝내다.
	return 0;
}

//result
1996 2500000 1800000
1997 2590000 1875600
1998 2683240 1954375
1999 2779836 2036458
2000 2879910 2121989
2001 2983586 2211112
2002 3090995 2303978
2003 3202270 2400745
2004 3317551 2501576
2005 3436982 2606642
2006 3560713 2716120
2007 3688898 2830197
2008 3821698 2949065
2009 3959279 3072925
2010 4101813 3201987
2011 4249478 3336470
2012 4402459 3476601
2013 4560947 3622618
2014 4725141 3774767
2015 4895246 3933307
2016 5071474 4098505
2017 5254047 4270642
2018 5443192 4450008
2019 5639146 4636908
2020 5842155 4831658
2021 6052472 5034587
2022 6270360 5246039
2023 6496092 5466372
2024 6729951 5695959
2025 6972229 5935189
2026 7223229 6184466
2027 7483265 6444213
2028 7752662 6714869
2029 8031757 6996893
2030 8320900 7290762
2031 8620452 7596974
2032 8930788 7916046
2033 9252296 8248519
2034 9585378 8594956
2035 9930451 8955944
2036 10287947 9332093
2037 10658313 9724040
2038 11042012 10132449
2039 11439524 10558011
2040 11851346 11001447
2041 12277994 11463507
2042 12720001 11944974
2043 13177921 12446662
2044 13652326 12969421
2045 14143809 13514136
2046 14652986 14081729
2047 15180493 14673161
2048 15726990 15289433
2049 16293161 15931589
2050 16879714 16600715
2051 17487383 17297945
2052 18116928 18024458
2053 18769137 18781485
