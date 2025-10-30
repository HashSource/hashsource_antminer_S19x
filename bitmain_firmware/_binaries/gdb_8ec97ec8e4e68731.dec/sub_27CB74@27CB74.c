int __fastcall sub_27CB74(int result, int a2, int *a3)
{
  const char **v5; // r5
  int v6; // r3
  int v7; // r7
  int v8; // r12
  int v9; // r5
  int i; // r3
  int v11; // r2
  char v12; // r1
  unsigned int v13; // r1
  unsigned int v14; // r3
  unsigned int v15; // r2
  int v16; // r3
  char v17; // r1
  int v18; // r0
  _DWORD *v19; // r8
  int v20; // r9
  _DWORD *v21; // r0
  int v22; // r3
  int v23; // r0
  char *v24; // r4
  int v25; // r0
  char *v26; // r0
  int *v27; // r0
  const char *v28; // r5
  int v29; // r8
  const char *v30; // r9
  int v31; // r0
  char *v32; // r0
  int *v33; // r0
  int v34; // r8
  int v35; // r0
  char *v36; // r9
  int v37; // r0
  char *v38; // r0

  if ( !a2 )
  {
    result = *a3;
    v7 = -1;
    if ( !*a3 )
    {
      v9 = 0;
      goto LABEL_16;
    }
LABEL_28:
    v18 = sub_16F654(result);
    v9 = ((int (__fastcall *)(int, int, int))loc_16E72C)(v18, *a3, a3[2]);
    v19 = (_DWORD *)a3[4];
    v20 = *a3;
    v21 = sub_93028(0xCu);
    v22 = dword_48AA50;
    *v21 = *v19;
    *v19 = v21;
    v21[1] = v9;
    v21[2] = v20;
    if ( v22 )
    {
      v33 = (int *)sub_242FC8();
      v34 = *v33;
      v35 = sub_16F654((int)v33);
      v36 = sub_25AC8C(v35, *a3);
      v37 = sub_16F654((int)v36);
      v38 = sub_25AC8C(v37, v9);
      sub_2594B0(v34, "allocated %s bytes at %s prot %u\n", v36, v38, a3[2]);
    }
    if ( ((a3[3] - 1) & v9) != 0 )
    {
      v23 = sub_16F654((int)v21);
      v24 = sub_25AC8C(v23, v9);
      v25 = sub_16F654((int)v24);
      v26 = sub_25AC8C(v25, a3[3]);
      sub_946E0("Inferior compiled module address %s is not aligned to BFD required %s.", v24, v26);
    }
    goto LABEL_16;
  }
  v5 = (const char **)result;
  v6 = *(_DWORD *)(a2 + 20);
  if ( !*(_DWORD *)(a2 + 60) )
    *(_DWORD *)(a2 + 60) = a2;
  v7 = v6 & 1;
  if ( (v6 & 1) != 0 )
  {
    if ( (v6 & 8) == 0 )
      v7 = 3;
    if ( (v6 & 0x10) != 0 )
      v7 |= 4u;
    if ( dword_48AA50 )
    {
      v27 = (int *)sub_242FC8();
      v28 = *v5;
      v29 = *v27;
      v30 = *(const char **)a2;
      v31 = sub_16F654((int)v27);
      v32 = sub_25AC8C(v31, *(_DWORD *)(a2 + 36));
      sub_2594B0(v29, "module \"%s\" section \"%s\" size %s prot %u\n", v28, v30, v32, v7);
    }
    v8 = *(_DWORD *)(a2 + 36);
    result = *a3;
    if ( a3[2] == v7 || !v8 )
    {
      v13 = a3[3];
      goto LABEL_23;
    }
    if ( !result )
    {
      v9 = 0;
LABEL_16:
      for ( i = a3[1]; i != a2; i = *(_DWORD *)(i + 12) )
      {
        if ( (*(_DWORD *)(i + 20) & 1) != 0 )
        {
          v11 = v9 + *(_DWORD *)(i + 28);
          v12 = *(_BYTE *)(i + 24) | 1;
          *(_DWORD *)(i + 32) = v11;
          *(_DWORD *)(i + 28) = v11;
          *(_BYTE *)(i + 24) = v12;
        }
      }
      result = 0;
      v13 = 1;
      *a3 = 0;
      a3[1] = a2;
      a3[2] = v7;
      a3[3] = 1;
      if ( !a2 )
        return result;
      v8 = *(_DWORD *)(a2 + 36);
LABEL_23:
      v14 = 1 << *(_DWORD *)(a2 + 64);
      v15 = v14 - 1;
      if ( v14 >= v13 )
        v13 = 1 << *(_DWORD *)(a2 + 64);
      a3[3] = v13;
      v16 = -v14;
      v17 = *(_BYTE *)(a2 + 24);
      result = (v15 + result) & v16;
      *(_DWORD *)(a2 + 32) = result;
      *(_DWORD *)(a2 + 28) = result;
      *(_BYTE *)(a2 + 24) = v17 | 1;
      *a3 = v16 & (v15 + v8 + result);
      return result;
    }
    goto LABEL_28;
  }
  return result;
}
