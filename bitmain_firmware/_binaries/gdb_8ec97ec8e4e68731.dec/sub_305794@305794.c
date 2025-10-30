int __fastcall sub_305794(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // r7
  unsigned int v3; // r4
  int v6; // r0
  _DWORD *v7; // r2
  int v8; // r3
  int v9; // r3
  _DWORD *v11; // r12
  unsigned __int8 *v12; // r1
  bool v13; // zf
  int v14; // t1
  unsigned __int8 *v15; // r1
  int v16; // t1

  v2 = a2 + 7;
  v3 = ((a2 + 7) >> 3) + ((a2 + 63) >> 6) + a2;
  if ( !a1 )
    return v3 + 11;
  if ( !a1[8] )
    return v3 + 11;
  if ( !a1[9] )
    return v3 + 11;
  v6 = sub_305068((int)a1);
  if ( v6 )
    return v3 + 11;
  v7 = (_DWORD *)a1[7];
  v8 = v7[6];
  if ( v8 == 1 )
  {
    if ( v7[27] )
      v9 = 10;
    else
      v9 = 6;
  }
  else if ( v8 == 2 )
  {
    v11 = (_DWORD *)v7[7];
    if ( v11 )
    {
      v9 = v11[4];
      v12 = (unsigned __int8 *)v11[7];
      v13 = v9 == 0;
      if ( v9 )
        v6 = v11[5];
      else
        v9 = 18;
      if ( !v13 )
        v9 = v6 + 20;
      if ( v12 )
      {
        do
        {
          v14 = *v12++;
          ++v9;
        }
        while ( v14 );
      }
      v15 = (unsigned __int8 *)v11[9];
      if ( v15 )
      {
        do
        {
          v16 = *v15++;
          ++v9;
        }
        while ( v16 );
      }
      if ( v11[11] )
        v9 += 2;
    }
    else
    {
      v9 = 18;
    }
  }
  else if ( v8 )
  {
    v9 = 6;
  }
  else
  {
    v9 = 0;
  }
  if ( v7[12] == 15 && v7[20] == 15 )
    return v2 + (a2 >> 12) + (a2 >> 14) + (a2 >> 25) + v9;
  else
    return v3 + 5 + v9;
}
