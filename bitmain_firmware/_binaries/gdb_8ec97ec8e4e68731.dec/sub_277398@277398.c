int __fastcall sub_277398(int a1, int *a2, int a3, int a4, int *a5)
{
  _DWORD *v8; // r4
  int *v9; // r0
  int v10; // r2
  int v11; // r12
  int v12; // lr
  int v13; // r0
  int v14; // r10
  int v15; // r6
  int v16; // r11
  int *v17; // r0
  int v18; // r7
  int v19; // r3
  double v20; // r0
  int v21; // r7
  _DWORD *v22; // r3
  int v23; // r3
  int v25; // r3
  int v26; // r9
  int v27; // lr
  int v28; // r12
  int v29; // r1
  int v30; // [sp+Ch] [bp-10h] BYREF
  unsigned __int8 v31; // [sp+10h] [bp-Ch] BYREF
  unsigned int v32; // [sp+14h] [bp-8h]

  v8 = sub_9836C(0x24u);
  v9 = *(int **)a4;
  *v8 = 0;
  v8[1] = v8 + 3;
  if ( v9 == (int *)(a4 + 8) )
  {
    v26 = *v9;
    v27 = v9[1];
    v28 = v9[2];
    v29 = v9[3];
    v9 = v8 + 3;
    v8[3] = v26;
    v8[4] = v27;
    v8[5] = v28;
    v8[6] = v29;
  }
  else
  {
    v10 = *(_DWORD *)(a4 + 8);
    v8[1] = v9;
    v8[3] = v10;
  }
  v11 = *(_DWORD *)(a4 + 4);
  *(_BYTE *)(a4 + 8) = 0;
  v12 = *a5;
  *(_DWORD *)a4 = a4 + 8;
  *(_DWORD *)(a4 + 4) = 0;
  v8[7] = v12;
  v8[2] = v11;
  v13 = sub_33A4A8(v9, v11, -955291385);
  v14 = a2[1];
  v15 = v13;
  v16 = (unsigned __int64)sub_347674(v13, v14) >> 32;
  v17 = sub_2771EC(a2, v16, (int)(v8 + 1), v15);
  if ( v17 && (v18 = *v17) != 0 )
  {
    sub_276DA4(v8);
    *(_DWORD *)a1 = v18;
    *(_BYTE *)(a1 + 4) = 0;
    return a1;
  }
  else
  {
    v19 = a2[3];
    LODWORD(v20) = &v31;
    HIDWORD(v20) = a2 + 4;
    v30 = a2[5];
    sub_33D44C(v20, v14, v19, 1);
    if ( v31 )
    {
      sub_27729C((int)a2, v32, (int)&v30, v31);
      v16 = (unsigned __int64)sub_347674(v15, a2[1]) >> 32;
    }
    v21 = *a2;
    v8[8] = v15;
    v22 = *(_DWORD **)(v21 + 4 * v16);
    if ( v22 )
    {
      *v8 = *v22;
      *v22 = v8;
    }
    else
    {
      v25 = a2[2];
      a2[2] = (int)v8;
      *v8 = v25;
      if ( v25 )
        *(_DWORD *)(v21 + 4 * ((unsigned __int64)sub_347674(*(_DWORD *)(v25 + 32), a2[1]) >> 32)) = v8;
      *(_DWORD *)(v21 + 4 * v16) = a2 + 2;
    }
    v23 = a2[3];
    *(_DWORD *)a1 = v8;
    *(_BYTE *)(a1 + 4) = 1;
    a2[3] = v23 + 1;
    return a1;
  }
}
