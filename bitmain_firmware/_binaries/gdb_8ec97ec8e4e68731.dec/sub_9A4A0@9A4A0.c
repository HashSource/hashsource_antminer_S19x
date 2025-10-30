int __fastcall sub_9A4A0(int result, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // r10
  unsigned __int8 *v9; // lr
  int v10; // r12
  int v11; // r5
  int v12; // r7
  int v13; // r6
  int v14; // r2
  int v15; // r7
  int v16; // r3
  int v17; // r2
  int v18; // r8
  bool v19; // nf
  int v20; // r1
  int v21; // r12
  int v22; // r11
  int v23; // lr
  unsigned int v24; // r4
  unsigned int v25; // r4
  int v26; // r12
  char v27; // r3
  int v28; // r3
  int v29; // r3
  int v30; // r12
  int v31; // lr
  unsigned __int8 *v32; // [sp+0h] [bp-Ch]

  v10 = a3 + a2;
  v11 = a6;
  v12 = a3 + a2 + 7;
  v13 = a3;
  if ( v12 < 0 )
    v12 = v10 + 14;
  v14 = a3 + 7;
  if ( v14 < 0 )
    v14 = v13 + 14;
  v15 = v12 >> 3;
  v16 = v14 >> 3;
  v32 = (unsigned __int8 *)result;
  v17 = a5;
  v18 = a7;
  if ( !a6 )
  {
    if ( a5 >= v16 )
    {
      if ( a7 )
      {
        v30 = v10 - 1;
        v22 = a7;
        v23 = 0;
        v18 = 0;
        result += v15;
        v19 = -v30 < 0;
        v29 = -v30 & 7;
        LOBYTE(v30) = v30 & 7;
        if ( !v19 )
          v30 = -v29;
        v8 = (unsigned __int8)((int)v32[v15 - 1] >> v30 << 31 >> 31);
      }
      else
      {
        v23 = 0;
        v11 = 0;
        v22 = 1;
        v8 = 0;
      }
LABEL_22:
      v24 = 0;
      if ( v15 <= 0 )
        goto LABEL_16;
      goto LABEL_23;
    }
LABEL_36:
    sub_946E0("Cannot unpack %d bits into buffer of %d bytes", v13, a5);
  }
  if ( a5 < v16 )
    goto LABEL_36;
  result = v15 - 1;
  if ( a7 )
    v9 = v32;
  else
    v8 = 0;
  if ( a7 )
    v8 = (unsigned __int8)(*v9 << a2 << 24 >> 31);
  v19 = -v10 < 0;
  v20 = -v10 & 7;
  v21 = v10 & 7;
  if ( !v19 )
    v21 = -v20;
  a2 = (8 - v21) & 7;
  if ( !a8 )
  {
    LOBYTE(v31) = v13 & 7;
    v18 = v15 - 1;
    if ( v13 <= 0 )
      v31 = -(-v13 & 7);
    v11 = v16 - 1;
    v17 = v16;
    v22 = -1;
    v23 = (8 - (_BYTE)v31) & 7;
    goto LABEL_22;
  }
  v18 = v15 - 1;
  v11 = a5 - 1;
  v22 = -1;
  v23 = 0;
  v24 = 0;
  if ( v15 <= 0 )
    goto LABEL_16;
  do
  {
LABEL_23:
    v26 = 8 - a2;
    if ( v13 >= 8 )
      v27 = 8;
    else
      v27 = v13;
    v28 = 1 << v27;
    result = (v28 - 1) & ((int)v32[v18] >> a2);
    v24 |= (result | -v28 & v8) << v23;
    v23 += v26;
    if ( v23 > 7 )
    {
      v23 -= 8;
      --v17;
      *(_BYTE *)(a4 + v11) = v24;
      v24 >>= 8;
      v11 += v22;
    }
    --v15;
    v13 -= v26;
    v18 += v22;
    a2 = 0;
  }
  while ( v15 );
LABEL_16:
  if ( v17 > 0 )
  {
    do
    {
      v25 = v24 | (v8 << v23);
      --v17;
      *(_BYTE *)(a4 + v11) = v25;
      v23 = (v23 - 8) & ~((v23 - 8) >> 31);
      v24 = v25 >> 8;
      v11 += v22;
    }
    while ( v17 );
  }
  return result;
}
