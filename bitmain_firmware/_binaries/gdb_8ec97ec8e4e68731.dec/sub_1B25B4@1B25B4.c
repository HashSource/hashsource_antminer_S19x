int __fastcall sub_1B25B4(int *a1, char *s1, size_t a3, int a4, int a5, int a6, __int16 a7)
{
  char *v8; // r9
  int v11; // r4
  int v12; // r3
  int v13; // r2
  int v14; // r4
  int v15; // r5
  _DWORD *v16; // r8
  int v17; // r6
  int v18; // r6
  _DWORD *v19; // r5
  int v20; // r1
  char v21; // r3
  char v22; // r0
  int v24; // r3
  int v25; // r0
  _DWORD *v26; // r0
  int v27; // r1
  int v28; // [sp+Ch] [bp-8h]

  v8 = s1;
  v11 = (unsigned __int8)*s1;
  if ( a6 == 8 && v11 == 103 )
  {
    v25 = strcmp(s1, "gcc_compiled.");
    if ( !v25 )
      return v25;
    v25 = strcmp(v8, "gcc2_compiled.");
    if ( !v25 )
      return v25;
  }
  v12 = *a1;
  v13 = *(_DWORD *)(*a1 + 36);
  if ( v13 || (v13 = *(_DWORD *)(dword_487D2C + 32)) != 0 && (v13 = *(_DWORD *)(v13 + 36)) != 0 )
    v13 = *(unsigned __int8 *)(*(_DWORD *)(v13 + 4) + 24);
  if ( v11 == v13 )
  {
    ++v8;
    --a3;
  }
  if ( a6 == 8 )
  {
    v28 = *a1;
    v25 = strncmp(v8, "__gnu_compiled", 0xEu);
    v12 = v28;
    if ( !v25 )
      return v25;
    v14 = a1[2];
    if ( v14 != 127 )
      goto LABEL_8;
LABEL_19:
    v26 = sub_93094(1u, 0x17D8u);
    v27 = a1[1];
    v16 = v26;
    v12 = *a1;
    v14 = 0;
    v15 = 0;
    a1[1] = (int)v26;
    v17 = 8;
    a1[2] = 0;
    *v26 = v27;
    goto LABEL_9;
  }
  v14 = a1[2];
  if ( v14 == 127 )
    goto LABEL_19;
LABEL_8:
  v15 = 2 * v14;
  v16 = (_DWORD *)a1[1];
  v17 = 48 * v14 + 8;
LABEL_9:
  v18 = (int)v16 + v17;
  ((void (__fastcall *)(int, int, _DWORD))loc_21AEC4)(v18, 1, *(_DWORD *)(v12 + 40));
  v19 = &v16[4 * v15 + 4 * v14];
  sub_21AF48(v18, v8, a3, a4, *a1);
  v20 = *(_DWORD *)(*a1 + 40);
  v21 = *((_BYTE *)v19 + 40);
  v19[4] = a5;
  v22 = *(_BYTE *)(v20 + 92);
  v19[8] = 0;
  *((_WORD *)v19 + 15) = a7;
  *((_BYTE *)v19 + 40) = v21 & 0x90 | a6 & 0xF;
  v19[11] = 0;
  v16[12 * v14 + 12] = 0;
  if ( (v22 & 1) == 0 )
  {
    v24 = *(_DWORD *)(v20 + 88) + 1;
    ++a1[2];
    *(_DWORD *)(v20 + 88) = v24;
  }
  ++a1[3];
  return v18;
}
