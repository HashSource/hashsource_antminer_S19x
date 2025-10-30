int __fastcall sub_92180(_DWORD *a1, unsigned __int8 **a2)
{
  unsigned int v2; // r2
  int v4; // r7
  int v5; // r6
  unsigned int v6; // r3
  unsigned int v7; // r6
  _DWORD *v8; // r7
  int v9; // r0
  int *v10; // r3
  _DWORD *v11; // r2
  int *v12; // r7
  int v13; // r12
  int v14; // lr
  int v15; // r4
  int v16; // r1
  int v17; // r2
  int result; // r0
  bool v19; // zf
  int v20; // r0

  v2 = (unsigned int)a2[1];
  if ( v2 > 1 && (v4 = **a2, v5 = (*a2)[1], *a2 += 2, a2[1] = (unsigned __int8 *)(v2 - 2), v2 == 2) )
  {
    v6 = a1[369];
    v7 = v5 | (v4 << 8);
    if ( v6 <= v7 )
    {
      sub_95494(a1, 47, 502, 114, "ssl/statem/extensions_clnt.c", 1983);
      return 0;
    }
    v8 = (_DWORD *)a1[286];
    if ( v7 )
    {
      if ( !v8 )
      {
        sub_95494(a1, 80, 502, 68, "ssl/statem/extensions_clnt.c", 2002);
        return 0;
      }
    }
    else
    {
      v19 = v6 == 2;
      if ( v6 != 2 )
        v19 = v8 == 0;
      if ( v19 )
      {
        v20 = a1[286];
        a1[35] = 1;
        sub_8D6A4(v20);
        a1[286] = 0;
        return 1;
      }
    }
    v9 = a1[285];
    if ( (a1[26] & 0xFFFFFFFB) != 3 || *(_DWORD *)(v9 + 480) || !v8[120] )
    {
      v10 = v8 + 2;
      v11 = a1 + 51;
      v12 = v8 + 18;
      do
      {
        v13 = *v10;
        v10 += 4;
        v14 = *(v10 - 3);
        v11 += 4;
        v15 = *(v10 - 2);
        v16 = *(v10 - 1);
        *(v11 - 4) = v13;
        *(v11 - 3) = v14;
        *(v11 - 2) = v15;
        *(v11 - 1) = v16;
      }
      while ( v10 != v12 );
    }
    sub_8D6A4(v9);
    v17 = a1[286];
    result = 1;
    a1[286] = 0;
    a1[35] = 1;
    a1[285] = v17;
    if ( v7 )
      a1[364] = 0;
  }
  else
  {
    sub_95494(a1, 50, 502, 159, "ssl/statem/extensions_clnt.c", 1977);
    return 0;
  }
  return result;
}
