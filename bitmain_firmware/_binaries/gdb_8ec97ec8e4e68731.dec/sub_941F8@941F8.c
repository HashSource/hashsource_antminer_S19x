int __fastcall sub_941F8(int a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // r4
  size_t v6; // r7
  const void *v7; // r11
  size_t v8; // r5
  const void *v9; // r8
  size_t v10; // r6
  int v11; // r0
  int v12; // r1
  _DWORD *v13; // r3
  int v15; // r0
  int v16; // r0
  int v17; // r5
  int v18; // r0
  _DWORD *v19; // r2
  const void *v20; // r3
  _DWORD *v21; // r4
  int v22; // r1
  int v23; // r12
  int v24; // r3
  unsigned int v25; // r4
  unsigned int v26; // r6
  size_t v27; // r2
  unsigned int v28; // r5
  int v29; // r12
  int v30; // r0
  int v31; // r3
  _DWORD *v33; // [sp+8h] [bp-Ch]
  _DWORD *v34; // [sp+Ch] [bp-8h]

  v3 = (_DWORD *)a2[2];
  v34 = a2 + 1;
  if ( !v3 )
  {
    v3 = a2 + 1;
    goto LABEL_21;
  }
  v6 = *(_DWORD *)(a3 + 4);
  v7 = *(const void **)a3;
  while ( 1 )
  {
    v8 = v3[5];
    v9 = (const void *)v3[4];
    if ( v6 >= v8 )
      v10 = v3[5];
    else
      v10 = v6;
    if ( !v10 || (v11 = memcmp(v7, (const void *)v3[4], v10)) == 0 )
      v11 = v6 - v8;
    v12 = 0;
    if ( v11 >= 0 )
    {
      v13 = (_DWORD *)v3[3];
    }
    else
    {
      v13 = (_DWORD *)v3[2];
      v12 = 1;
    }
    if ( !v13 )
      break;
    v3 = v13;
  }
  if ( v12 )
  {
LABEL_21:
    v33 = (_DWORD *)a2[3];
    if ( v33 == v3 )
      goto LABEL_29;
    v33 = v3;
    v15 = sub_33AD54(v3);
    v6 = *(_DWORD *)(a3 + 4);
    v3 = (_DWORD *)v15;
    v8 = *(_DWORD *)(v15 + 20);
    v9 = *(const void **)(v15 + 16);
    v7 = *(const void **)a3;
    if ( v6 >= v8 )
      v10 = *(_DWORD *)(v15 + 20);
    else
      v10 = *(_DWORD *)(a3 + 4);
    if ( !v10 )
      goto LABEL_18;
    goto LABEL_26;
  }
  v33 = v3;
  if ( !v10 )
  {
LABEL_18:
    if ( (int)(v8 - v6) >= 0 )
    {
LABEL_19:
      *(_DWORD *)a1 = v3;
      *(_BYTE *)(a1 + 4) = 0;
      return a1;
    }
    goto LABEL_28;
  }
LABEL_26:
  v16 = memcmp(v9, v7, v10);
  if ( !v16 )
    goto LABEL_18;
  if ( v16 >= 0 )
    goto LABEL_19;
LABEL_28:
  if ( !v33 )
  {
    v3 = 0;
    goto LABEL_19;
  }
LABEL_29:
  if ( v34 == v33 )
  {
    v17 = 1;
  }
  else
  {
    v25 = v33[5];
    v26 = *(_DWORD *)(a3 + 4);
    if ( v26 >= v25 )
      v27 = v33[5];
    else
      v27 = *(_DWORD *)(a3 + 4);
    if ( !v27 || (v28 = memcmp(*(const void **)a3, (const void *)v33[4], v27)) == 0 )
      v28 = v26 - v25;
    v17 = v28 >> 31;
  }
  v18 = sub_9836C(40);
  v19 = (_DWORD *)(a3 + 8);
  v20 = *(const void **)a3;
  v21 = (_DWORD *)v18;
  *(_DWORD *)(v18 + 16) = v18 + 24;
  if ( v20 == (const void *)(a3 + 8) )
  {
    v29 = *(_DWORD *)(a3 + 12);
    v30 = *(_DWORD *)(a3 + 16);
    v21[6] = *v19;
    v31 = *(_DWORD *)(a3 + 20);
    v21[7] = v29;
    v21[8] = v30;
    v21[9] = v31;
  }
  else
  {
    v22 = *(_DWORD *)(a3 + 8);
    *(_DWORD *)(v18 + 16) = v20;
    *(_DWORD *)(v18 + 24) = v22;
  }
  v23 = *(_DWORD *)(a3 + 4);
  *(_DWORD *)a3 = v19;
  *(_DWORD *)(a3 + 4) = 0;
  *(_BYTE *)(a3 + 8) = 0;
  v21[5] = v23;
  sub_33ADB4(v17, v21, v33, v34);
  v24 = a2[5] + 1;
  *(_DWORD *)a1 = v21;
  *(_BYTE *)(a1 + 4) = 1;
  a2[5] = v24;
  return a1;
}
