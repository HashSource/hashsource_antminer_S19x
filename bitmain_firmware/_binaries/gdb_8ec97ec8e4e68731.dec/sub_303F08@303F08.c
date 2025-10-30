void *__fastcall sub_303F08(_DWORD *a1)
{
  int v2; // r5
  _DWORD *v3; // r7
  void *result; // r0
  int v5; // r1
  int v6; // r6
  size_t v7; // r0
  int v8; // r1
  unsigned int v9; // r3
  size_t v10; // r8
  size_t v11; // r2
  int v12; // r3
  int v13; // r2
  unsigned int v14; // r2
  unsigned int v15; // r3
  unsigned int v16; // r5
  unsigned int v17; // r3
  int v18; // r0
  size_t v19; // r4
  int v20; // r2
  int v21; // r10
  int v22; // r12
  int v23; // r9
  int v24; // lr
  unsigned __int8 *v25; // r8
  int v26; // t1
  int v27; // lr
  int v28; // r5
  int v29; // r3
  int v30; // r2
  unsigned int v32; // r3
  int v33; // r0
  size_t v34; // r4
  int v35; // [sp+4h] [bp-8h]

  v2 = a1[11];
  v3 = a1 + 1024;
  result = (void *)a1[29];
  v5 = v2;
  v6 = v2 - 262;
  while ( 1 )
  {
    v9 = a1[27];
    v10 = a1[15] - (_DWORD)result - v9;
    if ( v9 < v6 + v5 )
    {
      result = (void *)*a1;
      if ( !*(_DWORD *)(*a1 + 4) )
        break;
    }
    else
    {
      v11 = v2 - v10;
      v10 += v2;
      memcpy((void *)a1[14], (const void *)(a1[14] + v2), v11);
      v12 = a1[23];
      v13 = a1[27] - v2;
      a1[28] -= v2;
      a1[27] = v13;
      a1[23] = v12 - v2;
      sub_303B70(a1);
      result = (void *)*a1;
      if ( !*(_DWORD *)(*a1 + 4) )
        break;
    }
    v7 = sub_303E5C((int)result, (void *)(a1[14] + a1[27] + a1[29]), v10);
    v8 = v3[429];
    result = (void *)(v7 + a1[29]);
    a1[29] = result;
    if ( (unsigned int)result + v8 > 2 )
    {
      v20 = a1[14];
      v21 = a1[22];
      v22 = a1[27] - v8;
      v23 = a1[21];
      v24 = *(unsigned __int8 *)(v20 + v22);
      v25 = (unsigned __int8 *)(v20 + v22 + 1);
      v35 = v2;
      a1[18] = v24;
      a1[18] = (*v25 ^ (v24 << v21)) & v23;
      do
      {
        if ( v8-- == 0 )
          break;
        v26 = *++v25;
        v27 = a1[17];
        v28 = a1[16];
        v29 = (v26 ^ (a1[18] << v21)) & v23;
        v30 = 2 * (a1[13] & v22);
        a1[18] = v29;
        *(_WORD *)(v28 + v30) = *(_WORD *)(v27 + 2 * v29);
        *(_WORD *)(v27 + 2 * v29) = v22++;
        v3[429] = v8;
      }
      while ( (unsigned int)result + v8 > 2 );
      v2 = v35;
    }
    if ( (unsigned int)result > 0x105 || !*(_DWORD *)(*a1 + 4) )
      break;
    v5 = a1[11];
  }
  v14 = v3[432];
  v15 = a1[15];
  if ( v14 < v15 )
  {
    v16 = a1[27] + a1[29];
    if ( v14 >= v16 )
    {
      result = (void *)(v16 + 258);
      if ( v14 < v16 + 258 )
      {
        v32 = v15 - v14;
        v33 = a1[14];
        if ( v32 >= v16 - v14 + 258 )
          v34 = v16 - v14 + 258;
        else
          v34 = v32;
        result = memset((void *)(v33 + v14), 0, v34);
        v3[432] += v34;
      }
    }
    else
    {
      v17 = v15 - v16;
      v18 = a1[14];
      v19 = 258;
      if ( v17 < 0x102 )
        v19 = v17;
      result = memset((void *)(v18 + v16), 0, v19);
      v3[432] = v16 + v19;
    }
  }
  return result;
}
