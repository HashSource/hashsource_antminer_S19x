int __fastcall sub_C34A0(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int v5; // r5
  unsigned int v6; // r0
  unsigned int v7; // r9
  int v8; // r8
  int v9; // r10
  _DWORD *v10; // r4
  int v11; // r3
  int v12; // r2
  int *v13; // r0
  unsigned int *v14; // r3
  unsigned int v15; // r1
  int v16; // r12
  unsigned int v17; // r2
  int v18; // r12
  int v19; // r2
  int v20; // r3
  unsigned int v21; // r3
  bool v22; // zf
  int v23; // r3
  char v24; // r3
  int v25; // r12
  __int64 v27; // r0
  int v28; // r2
  int v29; // r3
  int v34; // [sp+18h] [bp-Ch] BYREF
  int v35; // [sp+1Ch] [bp-8h]

  v5 = sub_214838(a1);
  if ( !v5 )
    v5 = ((int (__fastcall *)(int))loc_1B7C78)(a1);
  v6 = sub_214778(a1, v5);
  v7 = v6;
  if ( dword_478254 <= v6 && dword_478258 > v6 && dword_478260 == v5 )
    goto LABEL_21;
  sub_1B23BC(&v34, v6, v5);
  v8 = v34;
  v9 = v35;
  v10 = *(_DWORD **)(dword_487D2C + 36);
  if ( !v10 )
    goto LABEL_15;
  while ( 1 )
  {
    v11 = v10[33];
    if ( v11 )
    {
      v12 = *(_DWORD *)(v11 + 40);
      v34 = v8;
      v35 = v9;
      if ( (*(int (__fastcall **)(_DWORD *, int, int, unsigned int, int, _DWORD))(v12 + 52))(v10, v8, v9, v7, v5, 0) )
        break;
    }
    v10 = (_DWORD *)*v10;
    if ( !v10 )
      goto LABEL_15;
  }
  v13 = sub_C3448(v7, v5);
  if ( !v13 )
  {
LABEL_15:
    v22 = v5 == 0;
    if ( v5 )
      v22 = v8 == 0;
    if ( v22 )
      goto LABEL_35;
    v23 = *(__int16 *)(v8 + 22);
    if ( v23 != -1 )
    {
      v17 = *(_DWORD *)(v8 + 8) + *(_DWORD *)(*(_DWORD *)(v9 + 144) + 4 * v23);
      goto LABEL_20;
    }
    sub_94700((int)"blockframe.c", 274, "Section index is uninitialized");
LABEL_48:
    v27 = sub_94700((int)"blockframe.c", 240, "Section index is uninitialized");
    return sub_C37B8(v27, HIDWORD(v27), v28, v29);
  }
  v14 = (unsigned int *)v13[2];
  v15 = *v14;
  if ( !v8 )
  {
LABEL_14:
    v18 = v14[1];
    v19 = *v13;
    v20 = *(_DWORD *)(v13[6] + 24);
    dword_478254 = v15;
    dword_478258 = v18;
    dword_478260 = v5;
    v21 = *(unsigned __int8 *)(v20 + 2);
    dword_47825C = v19;
    dword_478264 = (v21 >> 2) & 1;
LABEL_21:
    if ( a3 )
    {
      if ( sub_2145E4(a1, v5) )
        *a3 = sub_214714(dword_478254, v5);
      else
        *a3 = dword_478254;
    }
    if ( a2 )
      *a2 = dword_47825C;
    if ( a4 )
    {
      if ( sub_2145E4(a1, v5) )
        *a4 = sub_214714(dword_478258 - 1, v5) + 1;
      else
        *a4 = dword_478258;
    }
    if ( a5 )
      *a5 = dword_478264;
    return 1;
  }
  v16 = *(__int16 *)(v8 + 22);
  if ( v16 == -1 )
    goto LABEL_48;
  v17 = *(_DWORD *)(v8 + 8) + *(_DWORD *)(*(_DWORD *)(v9 + 144) + 4 * v16);
  if ( v17 <= v15 )
    goto LABEL_14;
  if ( v5 )
  {
LABEL_20:
    v24 = *(_BYTE *)(v8 + 32);
    v25 = *(_DWORD *)v8;
    v34 = v8;
    v35 = v9;
    dword_478254 = v17;
    dword_478260 = v5;
    dword_47825C = v25;
    dword_478264 = (v24 & 0xF) == 2;
    dword_478258 = ((int (__fastcall *)(int, int))loc_1B2B18)(v8, v9);
    goto LABEL_21;
  }
LABEL_35:
  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  return 0;
}
