int __fastcall sub_BF3C0(int a1)
{
  int result; // r0
  int v2; // r0
  int v3; // [sp+Ch] [bp-8h] BYREF

  v3 = 0;
  result = sub_BF328(a1, &v3);
  if ( result )
  {
    v2 = v3;
    if ( (v3 & 1) != 0 )
    {
      sub_D0048(5, 122, 117, "crypto/dh/dh_check.c", 31);
      v2 = v3;
      if ( (v3 & 8) == 0 )
        return v2 == 0;
    }
    else if ( (v3 & 8) == 0 )
    {
      return v2 == 0;
    }
    sub_D0048(5, 122, 120, "crypto/dh/dh_check.c", 33);
    v2 = v3;
    return v2 == 0;
  }
  return result;
}
