int __fastcall sub_92434(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r8
  int v7; // r4
  int v9; // r0
  int v10; // r1
  int v11; // r3
  void (__fastcall *v12)(_DWORD *, _DWORD, int, int, int); // r11
  int *v13; // r5
  int v14; // r3
  int (__fastcall *v15)(_DWORD *, _DWORD, int, int *, int *, int, int, int *, int); // r11
  int v17; // r3
  int v18; // [sp+18h] [bp-34h]
  int v21; // [sp+24h] [bp-28h]
  int v22; // [sp+28h] [bp-24h]
  int v24; // [sp+3Ch] [bp-10h] BYREF
  int v25; // [sp+40h] [bp-Ch] BYREF
  int v26; // [sp+44h] [bp-8h] BYREF

  v6 = a1[257];
  if ( !*(_DWORD *)(v6 + 244) )
    return 1;
  v22 = a2 & 0x1F00;
  v21 = a2 & 0x80;
  v7 = 0;
  while ( 1 )
  {
    v18 = *(_DWORD *)(v6 + 240);
    v13 = (int *)(v18 + 36 * v7);
    v25 = 0;
    v26 = 0;
    if ( !sub_8F6EC(a1, v13[2], a2, a6) )
      goto LABEL_16;
    if ( v22 )
    {
      v14 = v13[3];
      v10 = v14 << 31;
      if ( (v14 & 1) == 0 )
        goto LABEL_16;
    }
    v15 = (int (__fastcall *)(_DWORD *, _DWORD, int, int *, int *, int, int, int *, int))v13[4];
    if ( !v21 )
      break;
    if ( v15 )
      goto LABEL_4;
LABEL_6:
    if ( !sub_A8450(a3, v10, *(unsigned __int16 *)(v18 + 36 * v7), 0, 2)
      || !sub_A8398(a3, 2)
      || v26 && !sub_A851C(a3)
      || !sub_A7EDC(a3) )
    {
      v17 = 225;
LABEL_25:
      sub_95494(a1, 80, 554, 68, "ssl/statem/extensions_cust.c", v17);
      return 0;
    }
    if ( v21 )
    {
      v11 = v13[3];
      if ( (v11 & 2) != 0 )
      {
        v17 = 234;
        goto LABEL_25;
      }
      v13[3] = v11 | 2;
    }
    v12 = (void (__fastcall *)(_DWORD *, _DWORD, int, int, int))v13[5];
    if ( v12 )
      v12(a1, *(unsigned __int16 *)(v18 + 36 * v7), a2, v25, v13[6]);
LABEL_16:
    if ( *(_DWORD *)(v6 + 244) <= (unsigned int)++v7 )
      return 1;
  }
  if ( !v15 )
    goto LABEL_16;
LABEL_4:
  v9 = v15(a1, *(unsigned __int16 *)(v18 + 36 * v7), a2, &v25, &v26, a4, a5, &v24, v13[6]);
  if ( v9 >= 0 )
  {
    if ( !v9 )
      goto LABEL_16;
    goto LABEL_6;
  }
  sub_95494(a1, v24, 554, 234, "ssl/statem/extensions_cust.c", 213);
  return 0;
}
