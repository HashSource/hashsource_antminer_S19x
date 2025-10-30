int __fastcall sub_9D174(int a1)
{
  int result; // r0
  int v3; // r3
  int v4; // r3
  unsigned int *v5; // r3
  unsigned int v6; // r2
  unsigned int *v7; // r3
  unsigned int v8; // r2
  int v9; // r2
  int v10; // r1
  int v11; // r2
  int v12; // r6
  __int64 v13; // r0
  int v14; // r2
  int v15; // r5
  int v16; // r3
  int v17; // r3
  int v18; // r3
  unsigned int *v19; // r3
  unsigned int v20; // r2
  int v21; // r2
  unsigned int *v22; // r3
  unsigned int v23; // r2
  int v24; // [sp+8h] [bp-8h] BYREF
  int v25; // [sp+Ch] [bp-4h] BYREF

  result = sub_A915C();
  if ( !result )
    return result;
  v3 = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a1 + 1300) = 0;
  *(_DWORD *)(a1 + 1304) = 0;
  *(_DWORD *)(a1 + 1308) = 0;
  *(_DWORD *)(a1 + 1312) = 0;
  *(_DWORD *)(a1 + 1316) = 0;
  *(_DWORD *)(a1 + 1320) = 0;
  *(_WORD *)(a1 + 1324) = 0;
  if ( !v3 )
  {
    v4 = *(_DWORD *)(a1 + 124);
    if ( *(_DWORD *)(v4 + 384) && *(_DWORD *)(v4 + 516) )
    {
      v5 = (unsigned int *)(*(_DWORD *)(a1 + 1504) + 60);
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    else
    {
      v7 = (unsigned int *)(*(_DWORD *)(a1 + 1504) + 56);
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
    }
    memset((void *)(*(_DWORD *)(a1 + 124) + 172), 0, 0x20u);
    v9 = *(_DWORD *)(a1 + 4);
    v10 = *(_DWORD *)(a1 + 124);
    result = 1;
    *(_DWORD *)(a1 + 140) = 0;
    v11 = *(_DWORD *)(v9 + 100);
    *(_DWORD *)(v10 + 536) = 0;
    if ( (*(_DWORD *)(v11 + 48) & 8) != 0 )
      *(_DWORD *)(a1 + 92) = 1;
    return result;
  }
  v12 = sub_89910(a1);
  v15 = sub_9CFC8(a1, &v24, &v25, 0);
  if ( !v15 )
  {
    while ( 1 )
    {
      if ( v15 >= sub_10C010(v12, HIDWORD(v13), v14) )
      {
        sub_95494((_DWORD *)a1, 40, 508, 181, (int)"ssl/statem/statem_lib.c", 128);
        sub_D1240(1, "No ciphers enabled for max supported SSL/TLS version", v21);
        return 0;
      }
      v13 = sub_10C01C(v12, v15);
      if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 48) & 8) != 0 )
      {
        v14 = v25;
        v16 = *(_DWORD *)(v13 + 40);
        if ( v25 == 256 )
        {
          if ( v16 == 256 )
            goto LABEL_32;
          HIDWORD(v13) = 65280;
        }
        else
        {
          HIDWORD(v13) = v25;
          if ( v16 == 256 )
            v16 = 65280;
        }
        if ( v16 < SHIDWORD(v13) )
          goto LABEL_19;
        if ( v25 == 256 )
        {
LABEL_32:
          v17 = *(_DWORD *)(v13 + 44);
          if ( v17 == 256 )
          {
LABEL_25:
            v18 = *(_DWORD *)(a1 + 124);
            if ( *(_DWORD *)(v18 + 384) && *(_DWORD *)(v18 + 516) )
            {
              v22 = (unsigned int *)(*(_DWORD *)(a1 + 1232) + 72);
              do
                v23 = __ldrex(v22);
              while ( __strex(v23 + 1, v22) );
              *(_DWORD *)(*(_DWORD *)(a1 + 124) + 580) = 0;
            }
            else
            {
              v19 = (unsigned int *)(*(_DWORD *)(a1 + 1504) + 68);
              do
                v20 = __ldrex(v19);
              while ( __strex(v20 + 1, v19) );
            }
            return 1;
          }
          v14 = 65280;
          goto LABEL_24;
        }
        v17 = *(_DWORD *)(v13 + 44);
        if ( v17 == 256 )
          v17 = 65280;
      }
      else
      {
        v17 = v25;
        v14 = *(_DWORD *)(v13 + 32);
        if ( v14 > v25 )
          goto LABEL_19;
        v14 = *(_DWORD *)(v13 + 36);
      }
LABEL_24:
      if ( v17 <= v14 )
        goto LABEL_25;
LABEL_19:
      ++v15;
    }
  }
  sub_95494((_DWORD *)a1, 80, 508, 68, (int)"ssl/statem/statem_lib.c", 110);
  return 0;
}
