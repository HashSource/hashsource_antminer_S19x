int __fastcall sub_16123C(unsigned int a1, int *a2, int a3, int a4, int a5, int a6, int a7)
{
  int result; // r0
  int v8; // r2
  int v9; // r2
  int v10; // r0
  int v11; // r4
  char v12; // r3
  unsigned int v13; // r1
  _DWORD *v14; // r11
  unsigned int v15; // r6
  unsigned int v16; // r4
  int v17; // r12
  int v18; // lr
  int v19; // r8
  int v20; // r5
  int v21; // r7
  int v22; // r0
  int v23; // r12
  int v24; // lr
  int v25; // r10
  int v26; // r5
  int v27; // r9
  int v28; // r0
  int v29; // r12
  int v30; // r0
  unsigned int v31; // r7
  unsigned int v32; // r8
  int v33; // r5
  char *v34; // r6
  int v35; // r0
  const char *v36; // r0
  int v37; // r5
  char *v38; // r6
  int v39; // r0
  const char *v40; // r0
  int v41; // r0
  const char *v42; // r0
  int v43; // [sp+4h] [bp-18h]
  int v44; // [sp+8h] [bp-14h]
  char *v47; // [sp+14h] [bp-8h]

  if ( !(a5 | a6 | a4 | a3) )
  {
    result = dword_48A514;
    if ( dword_48A514 )
    {
      v33 = *(_DWORD *)sub_242F8C(dword_48A514);
      v34 = sub_988AC((unsigned int)a2);
      v35 = sub_16F654(v34);
      v36 = (const char *)sub_25AC8C(v35, a1);
      sub_25A418(v33, "Ignore segment, %s bytes at %s\n", v34, v36);
      return 0;
    }
    return result;
  }
  if ( !(a4 | a6) )
  {
    if ( sub_201984() )
      goto LABEL_17;
    v14 = *(_DWORD **)(dword_487D2C + 36);
    if ( !v14 )
      goto LABEL_17;
    v13 = v14[43];
    v47 = (char *)a2 + a1;
    while ( 1 )
    {
      v15 = v14[42];
      if ( v15 < v13 )
        break;
LABEL_15:
      if ( v13 == v15 )
      {
        v14 = (_DWORD *)*v14;
        if ( !v14 )
          goto LABEL_17;
        v13 = v14[43];
      }
      else
      {
        v13 = v14[43];
        if ( v13 != v15 )
          goto LABEL_17;
      }
    }
    v16 = v15 + 12;
    while ( 1 )
    {
      v17 = *(_DWORD *)(v16 - 12);
      v15 = v16;
      if ( !v17 )
        goto LABEL_23;
      v18 = *(_DWORD *)(v16 - 8);
      v19 = *(_DWORD *)(v17 + 64);
      v20 = *(_DWORD *)(v18 + 144);
      v44 = v14[9];
      v21 = *(_DWORD *)(v17 + 28);
      v22 = sub_162FDC(*(_DWORD *)(v18 + 36), *(_DWORD *)(v16 - 12));
      v23 = *(_DWORD *)(v16 - 12);
      v24 = *(_DWORD *)(v16 - 8);
      v25 = *(_DWORD *)(v20 + 4 * v22);
      v26 = *(_DWORD *)(v23 + 28);
      v43 = *(_DWORD *)(v23 + 36);
      v27 = *(_DWORD *)(v24 + 144);
      v28 = sub_162FDC(*(_DWORD *)(v24 + 36), v23);
      if ( v14[45] )
        goto LABEL_23;
      v29 = *(_DWORD *)(v27 + 4 * v28);
      v30 = -(1 << v19);
      v31 = (v21 + v25) & v30;
      v32 = (v26 + v43 - 1 + (1 << v19) + v29) & v30;
      if ( a1 >= v31 )
      {
        if ( (unsigned int)v47 > v32 && a1 > v31 )
          goto LABEL_23;
      }
      else if ( (unsigned int)v47 < v32 )
      {
        goto LABEL_23;
      }
      if ( (*(_DWORD *)(v44 + 40) & 0x10000) == 0 )
      {
        v8 = 9;
        goto LABEL_8;
      }
LABEL_23:
      v13 = v14[43];
      v16 += 12;
      if ( v13 <= v15 )
        goto LABEL_15;
    }
  }
  if ( a4 )
  {
    v8 = 259;
    goto LABEL_8;
  }
LABEL_17:
  v8 = 267;
LABEL_8:
  if ( a5 )
    v9 = v8 | 0x10;
  else
    v9 = v8 | 0x20;
  v10 = sub_2ADB48(a7, "load", v9);
  v11 = v10;
  if ( v10 )
  {
    if ( dword_48A514 )
    {
      sub_242F8C(v10);
      v37 = *a2;
      v38 = sub_988AC((unsigned int)a2);
      v39 = sub_16F654(v38);
      v40 = (const char *)sub_25AC8C(v39, a1);
      sub_25A418(v37, "Save segment, %s bytes at %s\n", v38, v40);
    }
    sub_2ADDBC(a7, v11, a2);
    v12 = *(_BYTE *)(v11 + 24);
    *(_DWORD *)(v11 + 32) = 0;
    *(_DWORD *)(v11 + 28) = a1;
    *(_BYTE *)(v11 + 24) = v12 | 1;
    return 0;
  }
  else
  {
    v41 = sub_2A6910(0);
    v42 = (const char *)sub_2A6920(v41);
    sub_946B0("Couldn't make gcore segment: %s", v42);
    return 1;
  }
}
