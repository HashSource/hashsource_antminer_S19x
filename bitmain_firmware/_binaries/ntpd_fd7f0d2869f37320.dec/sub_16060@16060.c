_DWORD *__fastcall sub_16060(int a1, int a2, int a3, int a4)
{
  _DWORD *result; // r0
  _DWORD *v9; // r4

  result = (_DWORD *)sub_64B04(0, 48, 0, 1);
  v9 = result;
  result[11] = a3;
  result[2] = a1;
  result[1] = a4;
  if ( a1 == 4 )
  {
    if ( !a2 )
      sub_6FC54("ntp_io.c", 1207, 0, "((void *)0) != if_name");
    result = (_DWORD *)sub_64C8C(a2);
    v9[3] = result;
  }
  else if ( a1 == 5 )
  {
    if ( !a2 )
      sub_6FC54("ntp_io.c", 1210, 0, "((void *)0) != if_name");
    result = (_DWORD *)sub_64FD8(a2, 0, result + 4);
    if ( !result )
      sub_6FC54("ntp_io.c", 1213, 0, "is_ip");
  }
  else if ( a2 )
  {
    sub_6FC54("ntp_io.c", 1215, 0, "((void *)0) == if_name");
  }
  *v9 = nic_rule_list;
  nic_rule_list = (int)v9;
  return result;
}
