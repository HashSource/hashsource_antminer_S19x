_DWORD *__fastcall sub_15E04(int a1, int a2, int a3, int a4)
{
  _DWORD *result; // r0
  int v9; // r3
  _DWORD *v10; // r4

  result = (_DWORD *)sub_63BA4(0, 48, 0, 1);
  v10 = result;
  result[11] = a3;
  result[2] = a1;
  result[1] = a4;
  if ( a1 == 4 )
  {
    if ( !a2 )
      sub_6ECC0("ntp_io.c", 1207, 0, "((void *)0) != if_name");
    result = (_DWORD *)sub_63D08(a2);
    v10[3] = result;
  }
  else if ( a1 == 5 )
  {
    if ( !a2 )
      sub_6ECC0("ntp_io.c", 1210, 0, "((void *)0) != if_name");
    result = (_DWORD *)sub_64054(a2, 0, result + 4, v9);
    if ( !result )
      sub_6ECC0("ntp_io.c", 1213, 0, "is_ip");
  }
  else if ( a2 )
  {
    sub_6ECC0("ntp_io.c", 1215, 0, "((void *)0) == if_name");
  }
  *v10 = nic_rule_list;
  nic_rule_list = (int)v10;
  return result;
}
