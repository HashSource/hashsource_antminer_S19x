void *__fastcall sub_157850(_DWORD *a1, int a2, unsigned int a3)
{
  _DWORD *v4; // r5
  int *v7; // r12
  unsigned int v8; // r6
  unsigned int v9; // r8
  unsigned int v10; // lr
  int v11; // r4
  unsigned __int8 *v12; // r1
  unsigned int v13; // r2
  int v14; // t1
  char v15; // r7
  _BOOL4 v16; // r5
  int v17; // r3
  unsigned int v19; // r7
  unsigned int v20; // r1
  unsigned int v21; // r2
  unsigned int v22; // r3
  _DWORD *v23; // r6
  unsigned int v24; // r1
  unsigned int v25; // r2
  unsigned int v26; // r3
  unsigned int v27; // r1
  unsigned int v28; // r2
  unsigned int v29; // r3
  int v30; // r1
  int v31; // [sp+4h] [bp-78h] BYREF
  unsigned int v32[13]; // [sp+8h] [bp-74h] BYREF
  int v33; // [sp+3Ch] [bp-40h] BYREF
  unsigned int v34[15]; // [sp+40h] [bp-3Ch] BYREF

  if ( a3 )
  {
    v7 = &v31;
    v8 = 0;
    v9 = 56 * (a3 / 0x38);
    if ( a3 == v9 )
      v9 = a3 - 56;
    v10 = a3 - v9;
    do
    {
      while ( v10 <= v8 )
      {
        v7[1] = 0;
        if ( ++v7 == &v33 )
          goto LABEL_12;
      }
      v11 = 0;
      v12 = (unsigned __int8 *)(v9 + v8 + a2);
      v13 = 0;
      do
      {
        v14 = *v12++;
        v15 = 8 * v13++;
        ++v8;
        v16 = v13 <= 3;
        v17 = v14 << v15;
        if ( v10 <= v8 )
          v16 = 0;
        v11 |= v17;
      }
      while ( v16 );
      v7[1] = v11;
      ++v7;
    }
    while ( v7 != &v33 );
LABEL_12:
    if ( a3 == 56 )
    {
      sub_156CA8(a1, (int)v32, curve448_scalar_one);
      return sub_157848(v32);
    }
    else
    {
      if ( v9 )
      {
        v19 = v9;
        do
        {
          v19 -= 56;
          sub_1563C0(v32, (int)v32, dword_1DBAF0);
          sub_157698(v34, a2 + v19);
          sub_1570E8(v32, v32, v34);
        }
        while ( v19 );
      }
      v20 = v32[1];
      v21 = v32[2];
      v22 = v32[3];
      *a1 = v32[0];
      a1[1] = v20;
      a1[2] = v21;
      a1[3] = v22;
      v23 = a1 + 4;
      v24 = v32[5];
      v25 = v32[6];
      v26 = v32[7];
      *v23 = v32[4];
      v23[1] = v24;
      v23[2] = v25;
      v23[3] = v26;
      v23 += 4;
      v27 = v32[9];
      v28 = v32[10];
      v29 = v32[11];
      *v23 = v32[8];
      v23[1] = v27;
      v23[2] = v28;
      v23[3] = v29;
      v23 += 4;
      v30 = v33;
      *v23 = v32[12];
      v23[1] = v30;
      sub_157848(v32);
      return sub_157848(v34);
    }
  }
  else
  {
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    a1[3] = 0;
    a1[4] = 0;
    a1[5] = 0;
    a1[6] = 0;
    a1[7] = 0;
    a1[8] = 0;
    a1[9] = 0;
    a1[10] = 0;
    a1[11] = 0;
    v4 = a1 + 12;
    *v4 = 0;
    v4[1] = 0;
    return 0;
  }
}
