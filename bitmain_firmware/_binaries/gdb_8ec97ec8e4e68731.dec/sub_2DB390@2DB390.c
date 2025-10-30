int __fastcall sub_2DB390(_DWORD *a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  int v6; // r6
  int v7; // r2
  bool v8; // cc
  const char *v11; // r1
  char *v13; // r0
  char *v14; // r8
  _DWORD *v15; // r7
  int v16; // r10
  bool v17; // zf
  _BOOL4 v18; // r10
  int v19; // r0
  _DWORD *v20; // r11
  int v21; // r9
  signed int v22; // r5
  int v23; // r4
  int v24; // r7
  size_t v25; // r0
  int v26; // r2
  size_t v27; // r0
  int v28; // r4
  _DWORD *v29; // r0
  _DWORD *v30; // r7
  char *v31; // r1
  int v32; // r9
  int v33; // r8
  char *v34; // r5
  char *v35; // r4
  int v36; // r10
  int *v37; // r11
  int *v38; // lr
  int v39; // r0
  int v40; // r1
  int v41; // r2
  int v42; // r3
  _DWORD *v43; // lr
  int v44; // r1
  int v45; // r1
  int v46; // r2
  const char *v47; // r11
  size_t v48; // r10
  char *v49; // r3
  char *v50; // r11
  char *v51; // r4
  int v52; // t1
  size_t v53; // r10
  void *v54; // r0
  _DWORD *v55; // [sp+4h] [bp-38h]
  int v56; // [sp+4h] [bp-38h]
  int v57; // [sp+8h] [bp-34h]
  char *v58; // [sp+10h] [bp-2Ch]
  int v59; // [sp+10h] [bp-2Ch]
  char s[36]; // [sp+18h] [bp-24h] BYREF

  v6 = *(_DWORD *)(a1[1] + 444);
  *a6 = 0;
  v7 = (a1[10] >> 5) & 0x42;
  v8 = v7 == 0;
  if ( v7 )
    v8 = a4 <= 0;
  if ( v8 || !*(_DWORD *)(v6 + 336) )
    return 0;
  v11 = *(const char **)(v6 + 380);
  if ( !v11 )
  {
    v11 = ".rel.plt";
    if ( (*(_BYTE *)(v6 + 464) & 0x20) != 0 )
      v11 = ".rela.plt";
  }
  v13 = sub_2AD7AC((int)a1, v11);
  v14 = v13;
  if ( !v13 )
    return 0;
  v15 = (_DWORD *)*((_DWORD *)v13 + 35);
  if ( v15[7] != *(_DWORD *)(a1[40] + 2324) )
    return 0;
  v16 = v15[1];
  v17 = v16 == 9;
  if ( v16 != 9 )
    v17 = v16 == 4;
  v18 = !v17;
  if ( !v17 )
    return 0;
  v58 = sub_2AD7AC((int)a1, ".plt");
  if ( !v58 )
    return 0;
  if ( !(*(int (__fastcall **)(_DWORD *, char *, int, int))(*(_DWORD *)(*(_DWORD *)(a1[1] + 444) + 392) + 40))(
          a1,
          v14,
          a5,
          1) )
    return -1;
  v19 = sub_347418(*((_DWORD *)v14 + 9), v15[10]);
  v20 = (_DWORD *)*((_DWORD *)v14 + 17);
  v21 = 6 * v19;
  if ( v19 <= 0 )
  {
    v54 = sub_2AB368(24 * v19);
    *a6 = v54;
    if ( !v54 )
      return -1;
    return 0;
  }
  v55 = a1;
  v22 = 24 * v19;
  v23 = v19;
  v24 = v18;
  do
  {
    ++v24;
    v25 = strlen(*(const char **)(*(_DWORD *)*v20 + 4));
    v26 = v20[2];
    v27 = v25 + v22;
    v22 = v27 + 16;
    v20 += 4 * *(unsigned __int8 *)(*(_DWORD *)(v6 + 392) + 9);
    if ( !v26 )
      v22 = v27 + 5;
  }
  while ( v23 != v24 );
  v57 = v24;
  v28 = (int)v55;
  v29 = sub_2AB368(v22);
  v30 = v29;
  *a6 = v29;
  if ( !v29 )
    return -1;
  v31 = (char *)&v29[v21];
  v32 = 0;
  v56 = 0;
  v33 = *((_DWORD *)v14 + 17);
  v34 = v58;
  v59 = v28;
  v35 = v31;
  do
  {
    v36 = (*(int (__fastcall **)(int, char *, int))(v6 + 336))(v32, v34, v33);
    if ( v36 != -1 )
    {
      v37 = *(int **)v33;
      v38 = **(int ***)v33;
      v39 = *v38;
      v40 = v38[1];
      v41 = v38[2];
      v42 = v38[3];
      v43 = v38 + 4;
      *v30 = v39;
      v30[1] = v40;
      v30[2] = v41;
      v30[3] = v42;
      v44 = v43[1];
      if ( (v42 & 1) == 0 )
        v42 |= 2u;
      v30[4] = *v43;
      v30[5] = v44;
      v45 = *((_DWORD *)v34 + 7);
      v30[5] = 0;
      v46 = *v37;
      v30[1] = v35;
      v30[3] = v42 | 0x200000;
      v47 = *(const char **)(v46 + 4);
      v30[2] = v36 - v45;
      v30[4] = v34;
      v48 = strlen(v47);
      memcpy(v35, v47, v48);
      v49 = &v35[v48];
      if ( *(_DWORD *)(v33 + 8) )
      {
        v50 = s;
        *(_WORD *)&v35[v48] = 12331;
        v51 = v49 + 3;
        v49[2] = 120;
        sub_2A7C80(v59, s, *(_DWORD *)(v33 + 8));
        if ( s[0] == 48 )
        {
          do
            v52 = (unsigned __int8)*++v50;
          while ( v52 == 48 );
        }
        v53 = strlen(v50);
        memcpy(v51, v50, v53);
        v49 = &v51[v53];
      }
      v30 += 6;
      v35 = v49 + 5;
      ++v56;
      strcpy(v49, "@plt");
    }
    ++v32;
    v33 += 16 * *(unsigned __int8 *)(*(_DWORD *)(v6 + 392) + 9);
  }
  while ( v32 != v57 );
  return v56;
}
