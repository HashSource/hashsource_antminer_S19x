int __fastcall sub_91BE8(int a1, unsigned __int8 **a2)
{
  unsigned int v2; // r3
  unsigned __int8 *v4; // r5
  int v5; // r7
  int v6; // r2
  int v7; // r3
  int v9; // r8
  int v10; // r7
  unsigned __int8 *v11; // r4
  unsigned __int8 *v12; // r3
  int v13; // r5
  int v14; // r1
  int v15; // r2
  int v16; // r4
  int v17; // r7
  int v18; // r0
  bool v19; // cc
  int v20; // r1

  v2 = (unsigned int)a2[1];
  if ( v2 <= 1 )
    goto LABEL_3;
  v4 = *a2;
  v5 = **a2;
  v6 = (*a2)[1];
  *a2 += 2;
  a2[1] = (unsigned __int8 *)(v2 - 2);
  if ( (v6 | (v5 << 8)) != 2 )
    goto LABEL_3;
  if ( v2 - 2 <= 1 )
    goto LABEL_3;
  v9 = v4[2];
  v10 = v4[3];
  a2[1] = (unsigned __int8 *)(v2 - 4);
  *a2 = v4 + 4;
  if ( v2 == 4 || (v11 = (unsigned __int8 *)(v2 - 5), v12 = v4 + 5, v13 = v4[4], *a2 = v12, (a2[1] = v11) != 0) )
  {
LABEL_3:
    v7 = 1713;
LABEL_4:
    sub_95494(a1, 50, 446, 353, "ssl/statem/extensions_clnt.c", v7);
    return 0;
  }
  else if ( v13 )
  {
    sub_95494(a1, 47, 446, 352, "ssl/statem/extensions_clnt.c", 1720);
    return 0;
  }
  else
  {
    v16 = sub_A7D64();
    if ( v16 )
    {
      v17 = v10 | (v9 << 8);
      do
      {
        v19 = v13 < sub_10C010(v16, v14, v15);
        v20 = v13++;
        if ( !v19 )
        {
          v7 = 1746;
          goto LABEL_4;
        }
        v18 = sub_10C01C(v16, v20);
      }
      while ( *(_DWORD *)(v18 + 4) != v17 );
      *(_DWORD *)(a1 + 1512) = v18;
      return 1;
    }
    else
    {
      sub_95494(a1, 50, 446, 359, "ssl/statem/extensions_clnt.c", 1728);
      return 0;
    }
  }
}
