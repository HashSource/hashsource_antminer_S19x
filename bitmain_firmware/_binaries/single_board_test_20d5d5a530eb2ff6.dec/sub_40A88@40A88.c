int __fastcall sub_40A88(int result, unsigned __int8 *a2)
{
  int v2; // r7
  _DWORD *v3; // r4
  unsigned int v4; // r5
  unsigned int v5; // r1
  int v6; // r8
  unsigned __int8 *v7; // r6
  int v8; // r9
  _DWORD *v9; // r3
  unsigned int v10; // r5
  int v11; // r8
  int v12; // r7
  _DWORD *v13; // r9
  int v14; // r4
  int v15; // r0
  int v16; // r0
  unsigned __int8 *v17; // r4
  int v18; // t1
  int v19; // r1
  bool v20; // cc
  int *v21; // r4
  unsigned int i; // r6
  int *v23; // r3
  int v24; // r4
  unsigned int v25; // r6
  int v26; // r3
  int v27; // r0
  int v28; // t1
  float v29; // s14
  int v30; // t1
  int v31; // [sp+0h] [bp-14h]
  int v32; // [sp+8h] [bp-Ch]

  v2 = result;
  v3 = (_DWORD *)dword_705300;
  v4 = *(_DWORD *)(dword_705300 + 4);
  if ( !v4 )
    goto LABEL_19;
  v32 = 0;
  do
  {
    result = sub_189090(v32, v3[3]);
    v5 = v3[6];
    v31 = result;
    if ( v5 )
    {
      v6 = v2 + 4 * result;
      v7 = a2;
      v8 = *(_DWORD *)(v6 + 5380);
      v9 = (_DWORD *)(v6 + 5380);
      v10 = 0;
      v11 = v2;
      v12 = v8;
      v13 = v9;
      do
      {
        v14 = v3[4];
        v15 = v10 * v14;
        ++v10;
        v16 = sub_189090(v15, v5) + v14 * v31;
        v17 = v7;
        *(_DWORD *)(v11 + 4 * v16 + 5124) += *v7;
        v18 = *v7++;
        v12 += v18;
        *v13 = v12;
        v19 = *v17 + 9 * v32;
        result = *(_DWORD *)(v11 + 4 * v19) + 1;
        *(_DWORD *)(v11 + 4 * v19) = result;
        v3 = (_DWORD *)dword_705300;
        v5 = *(_DWORD *)(dword_705300 + 24);
      }
      while ( v5 > v10 );
      v2 = v11;
    }
    v4 = v3[1];
    v20 = v4 > ++v32;
    a2 += 1024;
  }
  while ( v20 );
  if ( !v4 )
    goto LABEL_19;
  v21 = (int *)v2;
  for ( i = 0; i < v4; ++i )
  {
    v23 = v21;
    do
    {
      result = *v23;
      v23[1] += *v23;
      ++v23;
    }
    while ( v21 + 8 != v23 );
    v21 += 9;
    v4 = *(_DWORD *)(dword_705300 + 4);
  }
  if ( v4 )
  {
    v24 = v2 + 4604;
    v25 = v2 + 4 * (v4 + 1151);
    v26 = v2 + 4604;
    v27 = 0;
    do
    {
      v28 = *(_DWORD *)(v26 + 4);
      v26 += 4;
      v27 += v28;
    }
    while ( v26 != v25 );
    result = sub_189308(v27, *(_DWORD *)(dword_705300 + 4));
    v29 = 0.0;
    do
    {
      v30 = *(_DWORD *)(v24 + 4);
      v24 += 4;
      v29 = v29 + (float)(unsigned int)((v30 - result) * (v30 - result));
    }
    while ( v25 != v24 );
  }
  else
  {
LABEL_19:
    v29 = 0.0;
  }
  *(float *)(v2 + 5672) = sqrtf(v29 / (float)(int)v4);
  return result;
}
