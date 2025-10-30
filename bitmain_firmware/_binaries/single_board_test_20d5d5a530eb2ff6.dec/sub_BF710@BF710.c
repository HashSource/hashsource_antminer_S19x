int __fastcall sub_BF710(int a1, int *a2)
{
  int result; // r0
  int v3; // r0
  int v4; // [sp+Ch] [bp-8h] BYREF

  v4 = 0;
  result = sub_BF658(a1, a2, &v4);
  if ( result )
  {
    v3 = v4;
    if ( (v4 & 1) != 0 )
    {
      sub_D0048(5, 123, 124, "crypto/dh/dh_check.c", 171);
      v3 = v4;
      if ( (v4 & 2) == 0 )
      {
LABEL_4:
        if ( (v3 & 4) == 0 )
          return v3 == 0;
LABEL_7:
        sub_D0048(5, 123, 122, "crypto/dh/dh_check.c", 175);
        v3 = v4;
        return v3 == 0;
      }
    }
    else if ( (v4 & 2) == 0 )
    {
      goto LABEL_4;
    }
    sub_D0048(5, 123, 123, "crypto/dh/dh_check.c", 173);
    v3 = v4;
    if ( (v4 & 4) == 0 )
      return v3 == 0;
    goto LABEL_7;
  }
  return result;
}
