int __fastcall sub_2876DC(int a1)
{
  int v1; // r1
  int v2; // r4
  bool v3; // zf
  int v4; // r6
  int v5; // r0
  const char *v6; // r5
  int v7; // r0
  void *v9; // r0
  _DWORD *v10; // r0
  int (__fastcall *v11)(const char *, signed int); // r9
  int v12; // r2
  int v13; // r3
  const char *v14; // r0
  int v15; // r2
  int v16; // r1
  const char **v17; // r0
  int v18; // r1
  int v19; // r0
  int v20; // r1
  void *v22; // r0
  void *v23; // r0
  int v24; // r3
  int *v25; // lr
  int v26; // r3
  int *v27; // r2
  int v28; // r3
  int v29; // t1
  int v30; // r12
  int v31; // r3
  char v33; // r0
  void *v34; // r0
  int v35; // r2
  const char *v36; // r5
  size_t v37; // r0
  const char *v38; // r2
  int v39; // r12
  void *v40; // r0
  void *v41; // r0
  int v42; // [sp+0h] [bp-14h]
  int v43; // [sp+4h] [bp-10h]
  int v44; // [sp+Ch] [bp-8h] BYREF

  v1 = dword_48AAD0;
  LOWORD(v2) = (unsigned __int16)&dword_48ACB4;
  v3 = dword_48AAD0 == (_DWORD)sub_2876DC;
  if ( (int (*)())dword_48AAD0 != sub_2876DC )
    v3 = dword_48AAD0 == (_DWORD)sub_287B78;
  v4 = a1;
  HIWORD(v2) = (unsigned int)&dword_48ACB4 >> 16;
  if ( v3 && !*(_DWORD *)(v2 + 0xAC) )
    goto LABEL_6;
  v9 = *(void **)(v2 + 0xB0);
  if ( v9 )
    free(v9);
  v10 = *(_DWORD **)(v2 + 0xB4);
  if ( v10 )
    sub_286184(v10);
  v11 = *(int (__fastcall **)(const char *, signed int))(v2 + 0x98);
  dword_4900EC = *(_DWORD *)(v2 + 0x80);
  dword_48AAA0 |= 0x4000u;
  dword_47074C = 1;
  dword_470740 = 32;
  *(_DWORD *)(v2 + 0x7C) = 37;
  *(_DWORD *)(v2 + 0xB8) = 0;
  *(_DWORD *)(v2 + 0xBC) = 0;
  *(_DWORD *)(v2 + 0xB4) = 0;
  *(_DWORD *)(v2 + 0xAC) = 0;
  *(_DWORD *)(v2 + 0xC) = 0;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 8) = 0;
  if ( !v11 )
  {
    v11 = *(int (__fastcall **)(const char *, signed int))(v2 + 0x84);
    if ( !v11 )
      v11 = (int (__fastcall *)(const char *, signed int))sub_284C1C;
  }
  *(_DWORD *)(v2 + 0xC4) = 0;
  v12 = dword_4900D8;
  v44 = 0;
  *(_BYTE *)(v2 + 0xC8) = 0;
  *(_DWORD *)(v2 + 0xC0) = v12;
  if ( v12 )
  {
    v33 = sub_286230(&v44, &dword_48AD78);
    v12 = dword_4900D8;
    *(_BYTE *)(v2 + 0xC8) = v33;
    v13 = *(_DWORD *)(v2 + 0xC0);
  }
  else
  {
    v13 = 0;
  }
  *(_DWORD *)(v2 + 0xCC) = v12;
  dword_4900D8 = v13;
  v14 = (const char *)sub_2912A8(v12, v13);
  v15 = *(_DWORD *)(v2 + 0xC0);
  v16 = *(_DWORD *)(v2 + 0xCC);
  v42 = v44;
  v43 = *(unsigned __int8 *)(v2 + 0xC8);
  *(_DWORD *)(v2 + 0xB0) = v14;
  v17 = (const char **)sub_286D08(v14, v16, v15, v11, v42, v43);
  *(_DWORD *)(v2 + 0xB4) = v17;
  if ( !v17 )
  {
    *(_DWORD *)(v2 + 0xD0) = 0;
LABEL_27:
    sub_2945C8(0, v18);
    v22 = *(void **)(v2 + 0xB4);
    if ( v22 )
      free(v22);
    v23 = *(void **)(v2 + 0xB0);
    *(_DWORD *)(v2 + 0xB4) = 0;
    if ( v23 )
      free(v23);
    v24 = dword_48AAA0;
    *(_DWORD *)(v2 + 0xB0) = 0;
    *(_DWORD *)(v2 + 0x50) = 0;
    dword_48AAA0 = v24 & 0xFFFFBFFF;
    return 0;
  }
  v19 = strcmp(*(const char **)(v2 + 0xB0), *v17);
  v20 = *(_DWORD *)(v2 + 0xC);
  if ( v19 )
  {
    *(_DWORD *)(v2 + 0xD0) = 1;
    if ( !sub_285C20((const char ***)&dword_48AD68, v20) )
      goto LABEL_27;
  }
  else
  {
    *(_DWORD *)(v2 + 0xD0) = 0;
    if ( !sub_285C20((const char ***)&dword_48AD68, v20) )
      goto LABEL_27;
  }
  v25 = *(int **)(v2 + 0xB4);
  v26 = dword_48AAA0;
  *(_DWORD *)(v2 + 0xB8) = 0;
  a1 = *v25;
  dword_48AAA0 = v26 & 0xFFFFBFFF;
  if ( !a1 )
  {
    sub_2945C8(0, v18);
    v40 = *(void **)(v2 + 0xB4);
    if ( v40 )
      free(v40);
    *(_DWORD *)(v2 + 0xB4) = 0;
    *(_DWORD *)(v2 + 0xBC) = 0;
    *(_DWORD *)(v2 + 0x50) = 0;
    return 0;
  }
  v27 = v25;
  v28 = 1;
  do
  {
    v29 = v27[1];
    ++v27;
    v1 = v29;
    v30 = v28++;
  }
  while ( v29 );
  v31 = *(unsigned __int8 *)a1;
  *(_DWORD *)(v2 + 0xB8) = v30;
  if ( v31 )
  {
    if ( v25[1] )
      v35 = 2;
    else
      v35 = 1;
    sub_285F80((const char *)a1, *(_DWORD *)(v2 + 0xCC), v35, &byte_48AD7C);
    v36 = **(const char ***)(v2 + 0xB4);
    v37 = strlen(v36);
    v38 = *(const char **)(v2 + 0xB0);
    v1 = *(unsigned __int8 *)v36;
    v39 = *(unsigned __int8 *)v38;
    *(_DWORD *)(v2 + 0xC0) = *(_DWORD *)(v2 + 0xCC) + v37;
    a1 = v39 != v1 || strcmp(v38, v36) != 0;
    v30 = *(_DWORD *)(v2 + 0xB8);
    *(_DWORD *)(v2 + 0x50) = a1;
  }
  if ( v30 <= 1 )
  {
    sub_2849A0(
      **(_DWORD **)(v2 + 0xB4),
      *(_DWORD *)(v2 + 0xC4),
      *(unsigned __int8 *)(v2 + 0xC8),
      *(_DWORD *)(v2 + 0xD0));
    *(_DWORD *)(v2 + 0xAC) = 1;
    return 0;
  }
  if ( *(_DWORD *)(v2 + 0x54) )
  {
    a1 = sub_286AA8(*(_DWORD *)(v2 + 0xB4));
    if ( dword_470768 > 0 && dword_470768 <= *(_DWORD *)(v2 + 0xB8) )
    {
      sub_2945C8(a1, v1);
      v41 = *(void **)(v2 + 0xB4);
      if ( v41 )
        free(v41);
      *(_DWORD *)(v2 + 0xB4) = 0;
      *(_DWORD *)(v2 + 0xAC) = 1;
      return 0;
    }
  }
  else if ( *(_DWORD *)(v2 + 0xD4) )
  {
    sub_2945C8(a1, v1);
    return 0;
  }
LABEL_6:
  if ( *(_DWORD *)(v2 + 0xB4) && (v1 = *(_DWORD *)(v2 + 0xB8)) != 0 )
  {
    v5 = v4 + *(_DWORD *)(v2 + 0xBC);
    if ( v5 < 0 )
    {
      do
      {
        v5 += v1;
        if ( v5 >= 0 )
          break;
        v5 += v1;
      }
      while ( v5 < 0 );
    }
    else
    {
      sub_347924(v5, v1);
      v5 = v1;
    }
    *(_DWORD *)(v2 + 0xBC) = v5;
    if ( v5 || *(int *)(v2 + 0xB8) <= 1 )
    {
      sub_285F80(*(const char **)(*(_DWORD *)(v2 + 0xB4) + 4 * v5), *(_DWORD *)(v2 + 0xCC), 1, &byte_48AD7C);
      v6 = *(const char **)(*(_DWORD *)(v2 + 0xB4) + 4 * *(_DWORD *)(v2 + 0xBC));
      v7 = strcmp(*(const char **)(v2 + 0xB0), v6);
      sub_2849A0((int)v6, *(_DWORD *)(v2 + 0xC4), *(unsigned __int8 *)(v2 + 0xC8), v7);
    }
    else
    {
      sub_2945C8(0, v1);
      sub_285F80(**(const char ***)(v2 + 0xB4), *(_DWORD *)(v2 + 0xCC), 2, &byte_48AD7C);
    }
    *(_DWORD *)(v2 + 0x50) = 1;
    return 0;
  }
  else
  {
    sub_2945C8(a1, v1);
    v34 = *(void **)(v2 + 0xB4);
    if ( v34 )
      free(v34);
    *(_DWORD *)(v2 + 0xB4) = 0;
    *(_DWORD *)(v2 + 0x50) = 0;
    return 0;
  }
}
