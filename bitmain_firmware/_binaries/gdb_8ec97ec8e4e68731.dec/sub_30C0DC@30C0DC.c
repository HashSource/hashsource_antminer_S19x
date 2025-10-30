int __fastcall sub_30C0DC(int result, int a2, __int64 a3)
{
  int v3; // r3
  char *v4; // lr
  char *v5; // r7
  int *v6; // r4
  unsigned int v7; // r3
  unsigned int v8; // t1
  int v9; // r1
  _DWORD *v10; // r2
  char *v11; // lr
  int *v12; // r8
  unsigned int v13; // r3
  unsigned int v14; // t1
  int v15; // r1
  _BYTE *v16; // r2
  char *v17; // r10
  __int64 v18; // r6
  int *v19; // r5
  char *v20; // r4
  unsigned int v21; // r3
  unsigned int v22; // t1
  int v23; // r1
  _DWORD *v24; // r2
  char *v25; // r5
  int *v26; // r4
  unsigned int v27; // r3
  unsigned int v28; // t1
  int v29; // r1
  _BYTE *v30; // r2
  unsigned int v31; // r3
  unsigned int v32; // r3
  _BYTE *v33; // r2
  unsigned int v34; // r3
  _DWORD *v35; // r2
  int v37; // [sp+1Ch] [bp-108h] BYREF
  _BYTE v38[124]; // [sp+20h] [bp-104h] BYREF
  char v39; // [sp+9Ch] [bp-88h] BYREF
  _DWORD v40[31]; // [sp+A0h] [bp-84h] BYREF
  char v41; // [sp+11Ch] [bp-8h] BYREF

  v37 = a2;
  if ( a3 >= 1 )
  {
    v40[0] = -306674912;
    v3 = 1;
    v4 = (char *)v40;
    do
    {
      *((_DWORD *)v4 + 1) = v3;
      v4 += 4;
      v3 *= 2;
    }
    while ( v4 != &v41 );
    v5 = &v39;
    v6 = &v37;
    do
    {
      v8 = *((_DWORD *)v5 + 1);
      v5 += 4;
      v7 = v8;
      if ( v8 )
      {
        v9 = 0;
        v10 = v40;
        do
        {
          ++v10;
          if ( (v7 & 1) != 0 )
            v9 ^= *(v10 - 1);
          v7 >>= 1;
        }
        while ( v7 );
      }
      else
      {
        v9 = 0;
      }
      v6[1] = v9;
      ++v6;
    }
    while ( v5 != v4 );
    v11 = &v39;
    v12 = &v37;
    do
    {
      v14 = v12[1];
      ++v12;
      v13 = v14;
      if ( v14 )
      {
        v15 = 0;
        v16 = v38;
        do
        {
          v16 += 4;
          if ( (v13 & 1) != 0 )
            v15 ^= *((_DWORD *)v16 - 1);
          v13 >>= 1;
        }
        while ( v13 );
      }
      else
      {
        v15 = 0;
      }
      *((_DWORD *)v11 + 1) = v15;
      v11 += 4;
    }
    while ( &v39 != (char *)v12 );
    v17 = v5;
    v18 = a3;
    do
    {
      v19 = &v37;
      v20 = &v39;
      do
      {
        v22 = *((_DWORD *)v20 + 1);
        v20 += 4;
        v21 = v22;
        if ( v22 )
        {
          v23 = 0;
          v24 = v40;
          do
          {
            ++v24;
            if ( (v21 & 1) != 0 )
              v23 ^= *(v24 - 1);
            v21 >>= 1;
          }
          while ( v21 );
        }
        else
        {
          v23 = 0;
        }
        v19[1] = v23;
        ++v19;
      }
      while ( v20 != v17 );
      if ( (v18 & 1) != 0 && result )
      {
        v32 = result;
        v33 = v38;
        result = 0;
        do
        {
          v33 += 4;
          if ( (v32 & 1) != 0 )
            result ^= *((_DWORD *)v33 - 1);
          v32 >>= 1;
        }
        while ( v32 );
      }
      if ( !(v18 >> 1) )
        break;
      v25 = &v39;
      v26 = &v37;
      do
      {
        v28 = v26[1];
        ++v26;
        v27 = v28;
        if ( v28 )
        {
          v29 = 0;
          v30 = v38;
          do
          {
            v30 += 4;
            if ( (v27 & 1) != 0 )
              v29 ^= *((_DWORD *)v30 - 1);
            v27 >>= 1;
          }
          while ( v27 );
        }
        else
        {
          v29 = 0;
        }
        *((_DWORD *)v25 + 1) = v29;
        v25 += 4;
      }
      while ( v26 != v12 );
      if ( ((v18 >> 1) & 1) != 0 && result )
      {
        v34 = result;
        v35 = v40;
        result = 0;
        do
        {
          ++v35;
          if ( (v34 & 1) != 0 )
            result ^= *(v35 - 1);
          v34 >>= 1;
        }
        while ( v34 );
      }
      v31 = v18 >> 2;
      SHIDWORD(v18) >>= 2;
      LODWORD(v18) = v31;
    }
    while ( __PAIR64__(HIDWORD(v18), v31) );
    return result ^ v37;
  }
  return result;
}
