int __fastcall sub_14A2C0(int a1, int *a2, int a3, int a4, int *a5)
{
  _DWORD *v8; // r0
  _BYTE *v9; // r1
  _DWORD *v10; // r4
  _DWORD *v11; // r7
  _BYTE *v12; // r0
  int v13; // r7
  int v14; // r6
  unsigned int v15; // r3
  size_t v16; // r9
  int v17; // r12
  int v18; // r0
  int v19; // r9
  int v20; // r6
  int v21; // r10
  int *v22; // r0
  int v23; // r7
  int v24; // r3
  double v25; // r0
  int v26; // r7
  _DWORD *v27; // r3
  int v28; // r3
  int v30; // r3
  int v31; // [sp+Ch] [bp-Ch] BYREF
  unsigned __int8 v32; // [sp+10h] [bp-8h] BYREF
  unsigned int v33; // [sp+14h] [bp-4h]

  v8 = sub_9836C(0x18u);
  v9 = *(_BYTE **)a4;
  v10 = v8;
  v11 = v8;
  v12 = *(_BYTE **)(a4 + 4);
  *v11 = 0;
  v13 = (int)(v11 + 1);
  v14 = v12 - v9;
  v10[1] = 0;
  v15 = (v12 - v9) >> 2;
  v10[2] = 0;
  v10[3] = 0;
  if ( v15 )
  {
    if ( v15 > 0x3FFFFFFF )
      sub_33D01C(v12, v9);
    v15 = (unsigned int)sub_9836C(v12 - v9);
    v9 = *(_BYTE **)a4;
    v12 = *(_BYTE **)(a4 + 4);
    v16 = (size_t)&v12[-*(_DWORD *)a4];
  }
  else
  {
    v16 = v12 - v9;
  }
  v10[3] = v15 + v14;
  v10[1] = v15;
  v10[2] = v15;
  if ( v12 != v9 )
    v15 = (unsigned int)memmove((void *)v15, v9, v16);
  v17 = *a5;
  v10[2] = v15 + v16;
  v10[4] = v17;
  v18 = sub_32426C(v15, v16, 0);
  v19 = a2[1];
  v20 = v18;
  v21 = (unsigned __int64)sub_347674(v18, v19) >> 32;
  v22 = sub_149B18(a2, v21, v13, v20);
  if ( v22 && (v23 = *v22) != 0 )
  {
    sub_124330(v10);
    *(_DWORD *)a1 = v23;
    *(_BYTE *)(a1 + 4) = 0;
    return a1;
  }
  else
  {
    v24 = a2[3];
    LODWORD(v25) = &v32;
    HIDWORD(v25) = a2 + 4;
    v31 = a2[5];
    sub_33D44C(v25, v19, v24, 1);
    if ( v32 )
    {
      sub_14A1E0((int)a2, v33, (int)&v31, v32);
      v21 = (unsigned __int64)sub_347674(v20, a2[1]) >> 32;
    }
    v26 = *a2;
    v10[5] = v20;
    v27 = *(_DWORD **)(v26 + 4 * v21);
    if ( v27 )
    {
      *v10 = *v27;
      *v27 = v10;
    }
    else
    {
      v30 = a2[2];
      a2[2] = (int)v10;
      *v10 = v30;
      if ( v30 )
        *(_DWORD *)(v26 + 4 * ((unsigned __int64)sub_347674(*(_DWORD *)(v30 + 20), a2[1]) >> 32)) = v10;
      *(_DWORD *)(v26 + 4 * v21) = a2 + 2;
    }
    v28 = a2[3];
    *(_DWORD *)a1 = v10;
    *(_BYTE *)(a1 + 4) = 1;
    a2[3] = v28 + 1;
    return a1;
  }
}
