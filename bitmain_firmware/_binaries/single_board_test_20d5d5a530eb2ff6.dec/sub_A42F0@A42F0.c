int __fastcall sub_A42F0(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v3; // r5
  unsigned int v5; // r7
  int v6; // r5
  char **v7; // r0
  unsigned __int16 *v8; // r2
  int v9; // r0
  int v10; // r3
  int v11; // t1
  unsigned __int16 *v12; // [sp+Ch] [bp-8h] BYREF

  CRYPTO_free(a1[994], "ssl/t1_lib.c", 1253);
  v2 = (_DWORD *)a1[31];
  a1[994] = 0;
  a1[995] = 0;
  memset(v2 + 159, 0, 0x24u);
  if ( !v2[155] )
  {
    v5 = v2[154];
    if ( !v5 )
    {
      v6 = sub_A2E74((int)a1, 1, &v12);
      do
      {
        v7 = sub_A3610((int)a1, v5);
        if ( v7 && v6 )
        {
          v8 = v12;
          v9 = *((unsigned __int16 *)v7 + 2);
          if ( *v12 == v9 )
          {
LABEL_19:
            *(_DWORD *)(a1[31] + 4 * v5 + 636) = 2;
          }
          else
          {
            v10 = 0;
            while ( v6 != ++v10 )
            {
              v11 = v8[1];
              ++v8;
              if ( v11 == v9 )
                goto LABEL_19;
            }
          }
        }
        ++v5;
      }
      while ( v5 != 9 );
      return 1;
    }
  }
  if ( sub_A4010(a1) )
  {
    v3 = a1[994];
    if ( !v3 )
    {
      sub_95494(a1, 40, 335, 376, (int)"ssl/t1_lib.c", 1295);
      return v3;
    }
    return 1;
  }
  sub_95494(a1, 80, 335, 68, (int)"ssl/t1_lib.c", 1287);
  return 0;
}
