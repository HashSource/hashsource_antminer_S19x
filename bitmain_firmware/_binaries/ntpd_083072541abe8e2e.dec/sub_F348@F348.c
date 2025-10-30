int __fastcall sub_F348(int a1, int a2)
{
  __int16 v3; // r4
  bool v4; // zf
  int result; // r0

  if ( !a1 )
    sub_6ECC0("ntp_config.c", 1267, 0, "((void *)0) != addr");
  v3 = a2;
  v4 = (a2 & 0xFFFFFFFD) == 0;
  if ( (a2 & 0xFFFFFFFD) != 0 )
    v4 = a2 == 10;
  if ( !v4 )
    sub_6ECC0("ntp_config.c", 1268, 0, "2 == type || 10 == type || 0 == type");
  result = sub_63BA4(0, 12, 0, 1);
  *(_DWORD *)(result + 4) = a1;
  *(_WORD *)(result + 8) = v3;
  return result;
}
