int __fastcall sub_FB6C(__int64 a1, int a2)
{
  int result; // r0

  if ( !a1 )
    sub_6FC54("ntp_config.c", 1688, 0, "match_class != 0 || if_name != ((void *)0)");
  result = sub_64B04(0, 16, 0, 1);
  *(_QWORD *)(result + 4) = a1;
  *(_DWORD *)(result + 12) = a2;
  return result;
}
