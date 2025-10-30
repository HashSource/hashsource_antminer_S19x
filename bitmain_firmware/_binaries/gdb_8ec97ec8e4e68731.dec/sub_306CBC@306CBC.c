int __fastcall sub_306CBC(_DWORD *a1, unsigned int a2, int a3, int a4, int a5, unsigned int a6, _BYTE *a7, int a8)
{
  bool v10; // zf
  _BOOL4 v11; // r3
  int v13; // r1
  int v14; // r3
  bool v15; // zf
  bool v16; // cc
  _BOOL4 v17; // r11
  int v18; // r0
  int v19; // r4
  int v20; // r0
  int (__fastcall *v21)(_DWORD, int, int); // r3
  int v22; // r0
  int (__fastcall *v23)(_DWORD, _DWORD, int); // r3
  int v24; // r0
  int (__fastcall *v25)(_DWORD, _DWORD, int); // r3
  int (__fastcall *v26)(_DWORD); // r3
  int v27; // r0
  int v28; // r3
  int v29; // r1
  bool v30; // zf
  int v32; // [sp+0h] [bp-Ch]

  if ( !a7 )
    return -6;
  v10 = a8 == 56;
  if ( a8 == 56 )
    v10 = *a7 == 49;
  v11 = !v10;
  if ( !v10 )
    return -6;
  if ( !a1 )
    return -2;
  v13 = a1[8];
  a1[6] = v11;
  if ( v13 )
  {
    if ( a1[9] )
      goto LABEL_12;
  }
  else
  {
    a1[10] = 0;
    a1[8] = zcalloc;
    if ( a1[9] )
      goto LABEL_12;
  }
  a1[9] = zcfree;
LABEL_12:
  if ( a2 == -1 )
    a2 = 6;
  if ( a4 >= 0 )
  {
    if ( a4 <= 15 )
    {
      v14 = 1;
    }
    else
    {
      a4 -= 16;
      v14 = 2;
    }
  }
  else
  {
    a4 = -a4;
    v14 = 0;
  }
  if ( (unsigned int)(a5 - 1) > 8 )
    return -2;
  v15 = a4 == 15;
  if ( (unsigned int)(a4 - 8) <= 7 )
    v15 = a3 == 8;
  if ( !v15 )
    return -2;
  v16 = a2 > 9;
  if ( a2 <= 9 )
    v16 = a6 > 4;
  if ( v16 )
    return -2;
  v32 = v14;
  v17 = a4 == 8;
  if ( v14 == 1 )
    v17 = 0;
  if ( v17 )
    return -2;
  v18 = a1[10];
  if ( a4 == 8 )
    a4 = 9;
  v19 = ((int (__fastcall *)(int, int, int))a1[8])(v18, 1, 5828);
  if ( !v19 )
    return -4;
  a1[7] = v19;
  *(_DWORD *)(v19 + 24) = v32;
  v20 = 1 << (a5 + 7);
  *(_DWORD *)(v19 + 52) = (1 << a4) - 1;
  *(_DWORD *)(v19 + 44) = 1 << a4;
  *(_DWORD *)(v19 + 84) = v20 - 1;
  *(_DWORD *)(v19 + 48) = a4;
  *(_DWORD *)(v19 + 88) = (a5 + 9) / 3u;
  *(_DWORD *)(v19 + 80) = a5 + 7;
  *(_DWORD *)(v19 + 76) = v20;
  *(_DWORD *)(v19 + 4) = 42;
  *(_DWORD *)v19 = a1;
  v21 = (int (__fastcall *)(_DWORD, int, int))a1[8];
  *(_DWORD *)(v19 + 28) = 0;
  v22 = v21(a1[10], 1 << a4, 2);
  v23 = (int (__fastcall *)(_DWORD, _DWORD, int))a1[8];
  *(_DWORD *)(v19 + 56) = v22;
  v24 = v23(a1[10], *(_DWORD *)(v19 + 44), 2);
  v25 = (int (__fastcall *)(_DWORD, _DWORD, int))a1[8];
  *(_DWORD *)(v19 + 64) = v24;
  *(_DWORD *)(v19 + 68) = v25(a1[10], *(_DWORD *)(v19 + 76), 2);
  v26 = (int (__fastcall *)(_DWORD))a1[8];
  *(_DWORD *)(v19 + 5788) = 1 << (a5 + 6);
  *(_DWORD *)(v19 + 5824) = 0;
  v27 = v26(a1[10]);
  v28 = *(_DWORD *)(v19 + 5788);
  v29 = *(_DWORD *)(v19 + 56);
  *(_DWORD *)(v19 + 8) = v27;
  *(_DWORD *)(v19 + 12) = 4 * v28;
  if ( !v29 || !*(_DWORD *)(v19 + 64) )
    goto LABEL_43;
  v30 = v27 == 0;
  if ( v27 )
    v30 = *(_DWORD *)(v19 + 68) == 0;
  if ( !v30 )
  {
    *(_DWORD *)(v19 + 5784) = v27 + 3 * v28;
    *(_DWORD *)(v19 + 5796) = v27 + (v28 & 0xFFFFFFFE);
    *(_DWORD *)(v19 + 132) = a2;
    *(_DWORD *)(v19 + 136) = a6;
    *(_BYTE *)(v19 + 36) = 8;
    return sub_3054B0(a1);
  }
  else
  {
LABEL_43:
    *(_DWORD *)(v19 + 4) = 666;
    a1[6] = "insufficient memory";
    sub_306BE8(a1);
    return -4;
  }
}
