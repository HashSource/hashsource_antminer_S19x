_BYTE *__fastcall sub_1153D8(int a1, __int64 a2, int a3, __int64 a4, __int64 a5, int a6)
{
  _BYTE *result; // r0
  int v8; // r8
  unsigned int v9; // r2
  unsigned __int8 *v10; // r11
  unsigned __int8 *v11; // r9
  __int64 v12; // r4
  bool v13; // cc
  unsigned int v14; // r7
  char v15; // r1
  bool v16; // zf
  unsigned int v17; // r6
  unsigned int v18; // r1
  _BYTE *v19; // r11
  int v20; // r8
  int v21; // r3
  int v22; // r2
  unsigned int v23; // r6
  unsigned __int8 *v24; // r1

  if ( a6 )
  {
    result = (_BYTE *)(a1 + ((a5 + a2 - 1) >> 3));
    v8 = -(a5 + a4) & 7;
    v9 = -(a5 + a2) & 7;
    v10 = (unsigned __int8 *)(a3 + ((a5 + a4 - 1) >> 3));
    v11 = v10 - 1;
  }
  else
  {
    v10 = (unsigned __int8 *)(a3 + (a4 >> 3));
    result = (_BYTE *)(a1 + (a2 >> 3));
    v8 = a4 & 7;
    v11 = v10 + 1;
    v9 = a2 & 7;
  }
  v12 = a5 + v9;
  v13 = HIDWORD(v12) != 0;
  v14 = v9 - v8;
  if ( !HIDWORD(v12) )
    v13 = (unsigned int)v12 > 7;
  v15 = v13;
  v16 = ((unsigned __int8)v15 & (v14 < 0xFFFFFFF8)) == 0;
  v17 = (unsigned __int8)*result & ~(-1 << v9) | ((int)*v10 >> v8 << v9);
  v18 = v14 + 8;
  if ( v16 )
  {
    if ( (unsigned __int64)v12 <= 7 )
    {
      v19 = result;
      goto LABEL_15;
    }
    v20 = v12 >> 3;
LABEL_23:
    v21 = v20 - 1;
    do
    {
      v22 = *v11;
      --v21;
      v19 = result + 1;
      if ( a6 )
      {
        --v11;
        v19 = result - 1;
      }
      else
      {
        ++v11;
      }
      v23 = v17 | (v22 << v18);
      *result = v23;
      result = v19;
      v17 = v23 >> 8;
    }
    while ( v21 != -1 );
    v12 &= 7u;
    goto LABEL_15;
  }
  *result = v17;
  if ( a6 )
    v19 = result - 1;
  else
    v19 = result + 1;
  v17 >>= 8;
  v12 -= 8;
  if ( (unsigned __int64)v12 <= 7 )
  {
    v18 = v9 - v8;
    goto LABEL_15;
  }
  v20 = v12 >> 3;
  if ( v14 )
  {
    v18 = v14;
    result = v19;
    goto LABEL_23;
  }
  if ( a6 )
  {
    v19 -= v20;
    v11 -= v20;
    result = memcpy(v19 + 1, v11 + 1, v12 >> 3);
  }
  else
  {
    v24 = v11;
    v11 += v20;
    result = memcpy(v19, v24, v12 >> 3);
    v19 += v20;
  }
  v18 = 0;
  v12 &= 7u;
LABEL_15:
  if ( v12 )
  {
    if ( v12 > (unsigned __int64)v18 )
      v17 |= *v11 << v18;
    *v19 = *v19 & (-1 << v12) | v17 & ~(-1 << v12);
  }
  return result;
}
