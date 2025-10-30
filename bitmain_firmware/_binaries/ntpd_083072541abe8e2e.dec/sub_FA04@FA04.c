_DWORD *__fastcall sub_FA04(int a1, int a2, int a3)
{
  int v4; // r2
  _DWORD *result; // r0

  v4 = a2;
  if ( a2 )
    v4 = 1;
  if ( a1 )
    v4 = 1;
  if ( !v4 )
    sub_6ECC0("ntp_config.c", 1688, 0, "match_class != 0 || if_name != ((void *)0)");
  result = (_DWORD *)sub_63BA4(0, 16, 0, 1);
  result[1] = a1;
  result[2] = a2;
  result[3] = a3;
  return result;
}
