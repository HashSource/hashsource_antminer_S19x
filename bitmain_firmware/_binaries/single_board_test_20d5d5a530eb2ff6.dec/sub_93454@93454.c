int __fastcall sub_93454(int a1, int *a2)
{
  int v2; // r11
  unsigned int v4; // r3
  unsigned __int8 *v5; // r3
  int v6; // r0
  int v7; // r9
  int v8; // r7
  unsigned int v9; // r7
  int v10; // r3
  unsigned __int8 *v12; // r3
  unsigned __int8 *v13; // r3
  unsigned int v14; // r1
  int v15; // r2
  unsigned __int8 *v16; // r3
  __int64 v17; // r0
  int v18; // r6
  int v19; // r2
  int v20; // r5
  int v21; // r8
  int v22; // r4
  int v23; // r0

  if ( !((int (*)(void))sub_A7D64)() )
    return 1;
  v4 = a2[1];
  if ( v4 <= 1
    || (v5 = (unsigned __int8 *)(v4 - 2),
        v6 = *(unsigned __int8 *)*a2,
        v7 = *a2 + 2,
        v8 = *(unsigned __int8 *)(*a2 + 1),
        *a2 = v7,
        a2[1] = (int)v5,
        v9 = v8 | (v6 << 8),
        (v9 & 1) != 0)
    || v9 > (unsigned int)v5 )
  {
    v10 = 520;
LABEL_6:
    sub_95494(a1, 50, 465, 353, "ssl/statem/extensions_srvr.c", v10);
    return 0;
  }
  a2[1] = (int)&v5[-v9];
  *a2 = v7 + v9;
  v17 = sub_A7D64(a1);
  *(_DWORD *)(a1 + 1512) = v9 & 1;
  v18 = v17;
  v20 = sub_10C010(v17, HIDWORD(v17), v19);
LABEL_13:
  v21 = v7 + 2;
  while ( v9 )
  {
    if ( v9 == 1 )
    {
      v10 = 532;
      goto LABEL_6;
    }
    v9 -= 2;
    v7 = v21;
    if ( v20 > 0 )
      v2 = 0;
    v22 = *(unsigned __int8 *)(v21 - 1) | (*(unsigned __int8 *)(v21 - 2) << 8);
    if ( v20 > 0 )
    {
      while ( 1 )
      {
        v23 = sub_10C01C(v18, v2);
        if ( *(_DWORD *)(v23 + 4) == v22 )
          break;
        if ( v20 == ++v2 )
          goto LABEL_23;
      }
      v20 = v2;
      *(_DWORD *)(a1 + 1512) = v23;
      goto LABEL_13;
    }
LABEL_23:
    v21 += 2;
  }
  v12 = (unsigned __int8 *)a2[1];
  if ( v12 )
  {
    v13 = v12 - 1;
    v15 = *a2 + 1;
    v14 = *(unsigned __int8 *)*a2;
    *a2 = v15;
    a2[1] = (int)v13;
    if ( v14 > (unsigned int)v13 || (v16 = &v13[-v14], *a2 = v15 + v14, (a2[1] = (int)v16) != 0) )
    {
      sub_95494(a1, 50, 465, 352, "ssl/statem/extensions_srvr.c", 564);
      return 0;
    }
    return 1;
  }
  sub_95494(a1, 50, 465, 353, "ssl/statem/extensions_srvr.c", 557);
  return 0;
}
