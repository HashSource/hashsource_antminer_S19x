int __fastcall sub_3093F4(int *a1)
{
  _BOOL4 v2; // r7
  unsigned int v3; // r4
  _DWORD *v4; // r6
  int v5; // r0
  int v6; // r2
  char v7; // r3
  unsigned int v8; // r0
  unsigned int v9; // r2
  unsigned __int8 *v10; // r12
  unsigned int v11; // r0
  _BYTE *v12; // r3
  unsigned int v13; // r0
  unsigned int v14; // r3
  int v15; // r1
  bool v16; // zf
  _BOOL4 v17; // r2
  int v19; // r2
  int v20; // t1
  int v21; // lr
  int v22; // r8
  _BOOL4 v23; // r0
  int v24; // r1
  int v25; // r12
  bool v26; // r2
  int v28; // r2
  int v29; // t1
  int v30; // lr
  int v31; // r3
  int v32; // r4
  int v33; // r4
  int v34; // r8
  _BYTE v36[4]; // [sp+4h] [bp-4h] BYREF

  if ( !a1 )
    return -2;
  if ( !a1[8] )
    return -2;
  if ( !a1[9] )
    return -2;
  v2 = sub_307334((int)a1);
  if ( v2 )
    return -2;
  v3 = a1[1];
  v4 = (_DWORD *)a1[7];
  if ( !v3 && v4[16] <= 7u )
    return -5;
  if ( v4[1] == 16211 )
  {
    v14 = v4[27];
    v17 = v14 <= 3;
  }
  else
  {
    v5 = v4[16];
    v6 = v4[15];
    v4[1] = 16211;
    v7 = v5 & 7;
    v8 = v5 & 0xFFFFFFF8;
    v4[16] = v8;
    v9 = v6 << v7;
    v4[15] = v9;
    if ( v8 <= 7 )
    {
      v17 = 1;
      v14 = 0;
    }
    else
    {
      v10 = v36;
      v11 = (v8 - 8) >> 3;
      v12 = v36;
      do
      {
        *v12++ = v9;
        v9 >>= 8;
      }
      while ( v12 != &v36[v11 + 1] );
      v13 = v11 + 1;
      v14 = 0;
      v4[15] = v9;
      v15 = 0;
      v4[16] = 0;
      do
      {
        v20 = *v10++;
        v19 = v20;
        if ( v14 <= 1 )
          v21 = 0;
        else
          v21 = 255;
        if ( v19 == v21 )
        {
          v17 = ++v14 <= 3;
        }
        else
        {
          v16 = v19 == 0;
          v14 = 4 - v14;
          v17 = 1;
          if ( v16 )
            v17 = v14 <= 3;
          else
            v14 = 0;
        }
      }
      while ( ++v15 < v13 && v17 );
    }
    v4[27] = v14;
    v3 = a1[1];
  }
  v22 = *a1;
  if ( v3 )
    v23 = v17;
  else
    v23 = 0;
  if ( v23 )
  {
    v25 = v22 - 1;
    v24 = 0;
    do
    {
      v29 = *(unsigned __int8 *)++v25;
      v28 = v29;
      if ( v14 <= 1 )
        v30 = 0;
      else
        v30 = 255;
      if ( v28 == v30 )
      {
        v26 = ++v14 <= 3;
      }
      else
      {
        v16 = v28 == 0;
        v14 = 4 - v14;
        v26 = v23;
        if ( v16 )
          v26 = v14 <= 3;
        else
          v14 = 0;
      }
    }
    while ( ++v24 < v3 && v26 );
    v22 += v24;
  }
  else
  {
    v24 = 0;
  }
  v4[27] = v14;
  v16 = v14 == 4;
  v31 = a1[1];
  v32 = a1[2];
  *a1 = v22;
  v33 = v24 + v32;
  a1[1] = v31 - v24;
  a1[2] = v33;
  if ( !v16 )
    return -3;
  v34 = a1[5];
  sub_307428((int)a1);
  a1[2] = v33;
  a1[5] = v34;
  v4[1] = 16191;
  return v2;
}
