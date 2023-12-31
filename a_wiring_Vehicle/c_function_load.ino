

//적재 함수
//인자 값 load_cmd의 구성 >> (적재공간/1번) : (환자코드/XX) : (리얼타임)
//문자열에서 필요 데이터 추출
//문자 열 인덱스
//적재 공간 - num
//적재 공간 코드 추출을 위한 인덱스 - Sp_num
//환자 코드 추출을 위한 인덱스 - P_num
//리얼 타임 추출을 위한 인덱스 - T_num
//환자 코드 - code
//환자 코드 + 리얼타임 - code_str
//적재시 아두이노 클락시간 - Lt
//적재시 리얼 타임 - Rt
void Load(String load_cmd, int len) {

  int num, Sp_num, P_num;
  String code, code_str;


  //적재 공간 추출
  Sp_num = load_cmd.indexOf(":");
  num = load_cmd.substring(0, Sp_num).toInt();

  //환자 코드 추출
  P_num = load_cmd.indexOf(":", Sp_num + 1);
  code = load_cmd.substring(Sp_num + 1, P_num);


  //적재 공간 1 세팅
  if (num == 1) {
    P1.set_Space(code, true);

    LCD_print_S("One Load!", 2, 0);
    
  }

  //적재 공간 2 세팅
  else if (num == 2) {
    LCD_print_S("Two Load!", 2, 1);

    P2.set_Space(code, true);

  }
}



