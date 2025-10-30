int __fastcall sub_327B04(int a1)
{
  unsigned int v1; // r1
  int v2; // r3
  bool v3; // zf
  char v4; // r7
  int v5; // r2
  unsigned __int16 *v6; // r4
  unsigned int v7; // r6
  int v8; // r5
  unsigned __int16 *v9; // r1
  int v10; // r12
  int v11; // t1
  int v12; // r3
  unsigned int v13; // t1
  bool v15; // cc

  v1 = *(unsigned __int16 *)(a1 + 10);
  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)a1 == 1;
  if ( *(_DWORD *)a1 == 1 )
    v3 = v1 == 0;
  v4 = *(_BYTE *)(a1 + 8);
  v5 = *(_DWORD *)a1 + v2;
  if ( v3 )
  {
    v8 = v4 & 0x70;
    if ( (*(_BYTE *)(a1 + 8) & 0x70) == 0 )
      return v8;
  }
  v6 = (unsigned __int16 *)(a1 + 10);
  if ( v2 >= 0 )
  {
    if ( v2 )
    {
      if ( v5 > 10 )
        return -2147483646;
      v7 = 0;
LABEL_9:
      if ( v5 > v2 )
      {
        v9 = v6;
        v8 = v7;
        do
        {
          v10 = dword_438D00[v2];
          v2 += 3;
          v11 = *v9++;
          v6 = v9;
          v8 += v10 * v11;
        }
        while ( v5 > v2 );
      }
      else
      {
        v8 = v7;
      }
      if ( v5 != 10 )
        goto LABEL_14;
      if ( sub_347690(v8) == *(v6 - 1) && ((v8 > 1999999997) & ((unsigned int)v4 >> 31)) == 0 )
      {
        v15 = v4 <= 0;
        if ( v4 >= 0 )
          v15 = v8 <= 999999999;
        if ( v15 )
        {
LABEL_14:
          if ( v4 < 0 )
            return -v8;
          return v8;
        }
      }
LABEL_19:
      if ( (v7 & 1) != 0 )
        return -2147483645;
      else
        return -2147483646;
    }
LABEL_17:
    v7 = v1;
    ++v6;
    v2 = 3;
LABEL_18:
    if ( v5 > 10 )
      goto LABEL_19;
    goto LABEL_9;
  }
  v15 = v2 < -2;
  v12 = -v2;
  if ( v15 )
  {
    while ( !v1 )
    {
      v12 -= 3;
      v13 = v6[1];
      ++v6;
      v1 = v13;
      if ( v12 <= 2 )
      {
        if ( !v12 )
          goto LABEL_17;
        goto LABEL_30;
      }
    }
  }
  else
  {
LABEL_30:
    v7 = (dword_438B18[v12] * (v1 >> v12)) >> 17;
    if ( v1 == dword_438D00[v12] * v7 )
    {
      v2 = 3 - v12;
      ++v6;
      goto LABEL_18;
    }
  }
  return 0x80000000;
}
