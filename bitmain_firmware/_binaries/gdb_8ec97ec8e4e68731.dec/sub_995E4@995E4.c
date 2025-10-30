int __fastcall sub_995E4(int a1, int a2, int a3, int a4, _DWORD *a5, int a6)
{
  int v6; // r5
  unsigned __int8 *v7; // r0
  int i; // r10
  int v9; // r7
  unsigned __int8 *v10; // r4
  int v11; // r6
  unsigned __int8 *v12; // lr
  int v13; // r12
  int v14; // t1
  bool v15; // zf
  unsigned int v16; // r12
  int v17; // r8
  int v18; // r12
  int v19; // r12
  int v20; // t1
  int v21; // r7
  bool v22; // zf
  int v23; // r6

  v6 = 0;
  if ( a2 <= 0 )
  {
    i = 0;
  }
  else
  {
    v7 = (unsigned __int8 *)(a1 + a3);
    for ( i = 0; i != a2; ++i )
    {
      while ( 1 )
      {
        v9 = a3 + v6;
        if ( a3 > 0 )
          break;
        if ( a6 >= v9 )
        {
          ++i;
          v7 += a3;
          if ( a2 != i )
            continue;
        }
        goto LABEL_31;
      }
      v10 = &v7[-a3];
      v11 = 0;
      v12 = &v7[-a3];
      do
      {
        v14 = *v12++;
        v13 = v14;
        v15 = v14 == 42;
        if ( v14 != 42 )
          v15 = v13 == 125;
        v16 = v13 - 35;
        v17 = v15;
        if ( v16 <= 1 )
          v18 = v17 | 1;
        else
          v18 = v17;
        if ( v18 )
          ++v11;
      }
      while ( v12 != v7 );
      if ( v11 + v9 > a6 )
        break;
      do
      {
        v20 = *v10++;
        v19 = v20;
        v21 = v6 + 1;
        v22 = v20 == 42;
        if ( v20 != 42 )
          v22 = v19 == 125;
        v23 = v22;
        if ( (unsigned int)(v19 - 35) <= 1 )
          v23 |= 1u;
        if ( v23 )
        {
          *(_BYTE *)(a4 + v6) = 125;
          v6 += 2;
        }
        else
        {
          *(_BYTE *)(a4 + v6++) = v19;
        }
        if ( v23 )
          *(_BYTE *)(a4 + v21) = v19 ^ 0x20;
      }
      while ( v12 != v10 );
      v7 += a3;
    }
  }
LABEL_31:
  *a5 = i;
  return v6;
}
