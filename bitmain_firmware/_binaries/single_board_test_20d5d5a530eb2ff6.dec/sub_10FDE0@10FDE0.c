int __fastcall sub_10FDE0(int *a1)
{
  char *v2; // r0
  int result; // r0
  int v4; // r1
  unsigned int v5; // r3
  int (__fastcall *v6)(int *, int *, int *); // r3
  int v7; // r2
  char *v8; // r0
  int v9; // r0
  int v10; // r3
  int v11; // [sp+0h] [bp-8h] BYREF
  unsigned int v12; // [sp+4h] [bp-4h] BYREF

  a1[26] = -1;
  a1[24] = 0;
  a1[25] = 0;
  a1[27] = 0;
  v2 = sub_EAC84(a1[18]);
  result = sub_EB3A8((int)v2, &v12, &v11);
  if ( result )
  {
    v4 = v11;
    if ( v11 )
    {
      v5 = v12;
      a1[25] = v11;
      if ( v5 )
      {
        v7 = a1[27];
        a1[24] = v5;
        a1[27] = v7 | 1;
        v8 = sub_EAAB4(v5);
        result = sub_D99DC((int)v8);
        if ( result )
        {
          v9 = sub_D8C78(result);
          v10 = v12;
          result = 4 * v9;
          a1[26] = result;
          if ( v10 == 64 || v10 >= 64 && (unsigned int)(v10 - 672) <= 2 )
            a1[27] |= 2u;
        }
      }
      else
      {
        result = sub_AD928(0, v4);
        if ( result )
        {
          v6 = *(int (__fastcall **)(int *, int *, int *))(result + 112);
          if ( v6 )
          {
            result = v6(a1 + 24, a1 + 18, a1 + 20);
            if ( result )
              a1[27] |= 1u;
          }
        }
      }
    }
  }
  return result;
}
