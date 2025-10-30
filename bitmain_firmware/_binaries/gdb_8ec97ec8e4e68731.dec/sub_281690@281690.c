int __fastcall sub_281690(int a1)
{
  int v1; // r9
  int v2; // r8
  int v3; // r5
  int v4; // r6
  int v5; // r7
  int v6; // r10
  const unsigned __int16 **v7; // r0
  int v8; // r3
  int v9; // r12
  const unsigned __int16 *v10; // r0
  int v11; // r2
  unsigned __int8 *v12; // r1
  int v13; // t1
  int v14; // r2
  bool v16; // zf
  int v17; // r2
  bool v18; // zf
  bool v19; // r1
  int v21; // t1
  bool v22; // zf
  unsigned __int8 *v23; // r3
  int v24; // r2
  int v25; // t1
  bool v26; // zf

  v1 = a1;
  v2 = dword_4900DC;
  v3 = dword_48AAD4;
  v4 = dword_4900DC - 1;
  v5 = dword_48AAD4 + dword_4900DC + 1;
  while ( v1 )
  {
    v6 = dword_4900D8;
    if ( v4 <= dword_4900D8 )
      return 0;
    v7 = _ctype_b_loc();
    v8 = *(unsigned __int8 *)(v3 + v6);
    v9 = v3 + v6;
    v10 = *v7;
    v11 = (v10[v8] >> 3) & 1;
    if ( v8 == 95 )
      v11 = 1;
    if ( v11 )
    {
      if ( v2 <= v6 )
        goto LABEL_12;
      v12 = (unsigned __int8 *)(v3 + v6 + 1);
      while ( 1 )
      {
        v6 = (int)&v12[-v3];
        dword_4900D8 = (int)&v12[-v3];
        v13 = *v12++;
        v8 = v13;
        v14 = (v10[v13] >> 3) & 1;
        if ( v13 == 95 )
          v14 |= 1u;
        if ( !v14 )
          break;
        if ( (unsigned __int8 *)v5 == v12 )
          goto LABEL_12;
      }
    }
    else
    {
      v16 = v8 == 32;
      if ( v8 != 32 )
        v16 = v8 == 9;
      LOBYTE(v11) = !v16;
      if ( v2 <= v6 )
        v11 = 0;
      if ( v11 )
      {
        v17 = v6 + 1;
        do
        {
          dword_4900D8 = v17;
          v6 = v17;
          v21 = *(unsigned __int8 *)++v9;
          v8 = v21;
          ++v17;
          if ( ((v21 != 95) & ((v10[v21] ^ 8u) >> 3)) == 0 )
            break;
          v18 = v8 == 32;
          if ( v8 != 32 )
            v18 = v8 == 9;
          v19 = !v18;
        }
        while ( v6 < v2 && v19 );
      }
    }
    v22 = v8 == 9;
    if ( v8 != 9 )
      v22 = v8 == 32;
    if ( v22 && v2 > v6 )
    {
      v23 = (unsigned __int8 *)(v3 + v6 + 1);
      while ( 1 )
      {
        dword_4900D8 = (int)&v23[-v3];
        v25 = *v23++;
        v24 = v25;
        v26 = v25 == 9;
        if ( v25 != 9 )
          v26 = v24 == 32;
        if ( !v26 )
          break;
        if ( (unsigned __int8 *)v5 == v23 )
          goto LABEL_12;
      }
      --v1;
      continue;
    }
LABEL_12:
    --v1;
  }
  return 0;
}
