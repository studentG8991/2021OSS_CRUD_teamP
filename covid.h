typedef struct{
    char name[20];  // 지역이름
    int confirm;    // 확진자 수
    int date;       // 마지막 확진자 날짜 // format: yyyymmdd
    int healer;     // 완치자 수
} covid;

int addCovid(covid*);       // 데이터 추가
void readCovid(covid*);     // 데이터 조회
int updateCovid(covid*);    // 데이터 수정
int deleteCovid(covid*);    // 데이터 삭제