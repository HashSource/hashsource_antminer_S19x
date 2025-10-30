int __fastcall sub_2FFB54(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int v6; // r3
  int v8; // r1
  unsigned int v10; // r0
  int v11; // lr
  _DWORD *v12; // r5
  int v13; // r2
  _DWORD *v14; // r12
  int v15; // r1
  _DWORD *v16; // r0
  int v17; // r2
  int *v18; // r3
  int v19; // r3
  int v20; // r2
  int v21; // r5
  bool v22; // zf
  int v23; // r3
  int v25; // r10
  int v26; // r11
  int v27; // r10
  _DWORD *v28; // r0
  _DWORD *v29; // r8
  int v30; // [sp+Ch] [bp-8h] BYREF

  if ( (*(_DWORD *)(a1 + 40) & 0x800) != 0 || (v6 = a3[5], (v6 & 0x800000) == 0) )
    sub_2A6BF0((int)"merge.c", 372, (int)"_bfd_add_merge_section");
  v8 = a3[9];
  if ( !v8 )
    return 1;
  if ( (v6 & 0x8000) != 0 )
    return 1;
  v10 = a3[30];
  if ( !v10 )
    return 1;
  if ( (v6 & 4) != 0 )
    return 1;
  v11 = a3[16];
  if ( !(v10 >> v11) && (((v10 - 1) & v10) != 0 || (v6 & 0x1000000) == 0) )
    return 1;
  if ( v10 > 1 << v11 && (v10 & ~(-1 << v11)) != 0 )
    return 1;
  v12 = (_DWORD *)*a2;
  if ( *a2 )
  {
    while ( 1 )
    {
      v13 = v12[1];
      if ( v13 )
      {
        v14 = *(_DWORD **)(v13 + 4);
        if ( ((v14[5] ^ v6) & 0x1800000) == 0 && v10 == v14[30] && v14[16] == v11 && v14[15] == a3[15] )
          break;
      }
      v12 = (_DWORD *)*v12;
      if ( !v12 )
        goto LABEL_33;
    }
  }
  else
  {
LABEL_33:
    v12 = (_DWORD *)sub_2ACBF4(a1, 12);
    if ( !v12 )
    {
LABEL_30:
      *a4 = 0;
      return 0;
    }
    v25 = a3[5];
    v26 = a3[30];
    *v12 = *a2;
    v12[1] = 0;
    *a2 = v12;
    v27 = v25 & 0x1000000;
    v28 = sub_2AB368(48);
    v29 = v28;
    if ( !v28 )
    {
      v12[2] = 0;
      goto LABEL_30;
    }
    if ( !sub_2AA92C((int)v28, (int)sub_2FF8BC, 32, 16699) )
    {
      free(v29);
      v12[2] = 0;
      goto LABEL_30;
    }
    v8 = a3[9];
    v6 = a3[5];
    v29[7] = 0;
    v29[8] = 0;
    v29[9] = 0;
    v29[10] = v26;
    v29[11] = v27;
    v12[2] = v29;
  }
  v15 = v8 + 23;
  if ( (v6 & 0x1000000) != 0 )
    v15 += a3[30];
  v16 = (_DWORD *)sub_2ACBF4(a1, v15);
  *a4 = v16;
  if ( !v16 )
    goto LABEL_30;
  v18 = (int *)v12[1];
  if ( v18 )
    v17 = *v18;
  else
    *v16 = v16;
  if ( v18 )
  {
    *v16 = v17;
    *v18 = (int)v16;
  }
  v19 = a3[5];
  v20 = v12[2];
  v12[1] = v16;
  v21 = (int)(v16 + 5);
  v22 = (v19 & 0x1000000) == 0;
  v23 = a3[9];
  v16[3] = v20;
  v16[1] = a3;
  v16[2] = a4;
  v16[4] = 0;
  a3[10] = v23;
  if ( !v22 )
    memset((void *)(v21 + v23), 0, a3[30]);
  v30 = v21;
  if ( !sub_2A9680(a3[37], (int)a3, &v30) )
    goto LABEL_30;
  return 1;
}
