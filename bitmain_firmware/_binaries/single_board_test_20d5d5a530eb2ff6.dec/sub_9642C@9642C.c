int __fastcall sub_9642C(_DWORD *a1, int a2)
{
  _DWORD *v3; // r0
  _DWORD *v4; // r5
  int v5; // r6
  int v6; // r0
  _DWORD *v7; // r1
  int v8; // r2
  _BOOL4 v9; // r0
  int v10; // r3
  int v11; // r3
  int v12; // r0
  _BOOL4 v13; // r2
  int v14; // r7
  int v16; // r3

  v3 = sub_8736C((int)a1, a2, 0);
  v4 = v3;
  if ( !v3 )
  {
    sub_95494(a1, 47, 540, 248, (int)"ssl/statem/statem_clnt.c", 1335);
    return 0;
  }
  v5 = sub_A33DC(a1, v3, (char *)&dword_10000 + 3, 1);
  if ( v5 )
  {
    sub_95494(a1, 47, 540, 261, (int)"ssl/statem/statem_clnt.c", 1344);
    return 0;
  }
  v6 = sub_899B4((int)a1);
  if ( sub_10BC4C(v6, v4) < 0 )
  {
    v16 = 1353;
LABEL_26:
    sub_95494(a1, 47, 540, 261, (int)"ssl/statem/statem_clnt.c", v16);
    return v5;
  }
  v7 = (_DWORD *)a1[1];
  v8 = *(_DWORD *)(v7[25] + 48) & 8;
  if ( !v8 )
  {
    v9 = *v7 >= 772;
    if ( *v7 == 0x10000 )
      v9 = 0;
    if ( v9 )
    {
      v10 = *(_DWORD *)(a1[31] + 528);
      if ( v10 )
      {
        if ( *(_DWORD *)(v10 + 12) != v4[3] )
        {
          v16 = 1361;
          goto LABEL_26;
        }
      }
    }
  }
  v11 = a1[285];
  v12 = *(_DWORD *)(v11 + 440);
  if ( v12 )
    *(_DWORD *)(v11 + 444) = *(_DWORD *)(v12 + 12);
  if ( !a1[35] || *(_DWORD *)(v11 + 444) == v4[3] )
    goto LABEL_20;
  if ( !v8 )
  {
    v13 = *v7 >= 772;
    if ( *v7 == 0x10000 )
      v13 = 0;
    if ( v13 )
    {
      v14 = sub_864EC(v4[13]);
      if ( v14 != sub_864EC(*(_DWORD *)(*(_DWORD *)(a1[285] + 440) + 52)) )
      {
        sub_95494(a1, 47, 540, 218, (int)"ssl/statem/statem_clnt.c", 1382);
        return v5;
      }
LABEL_20:
      v5 = 1;
      *(_DWORD *)(a1[31] + 528) = v4;
      return v5;
    }
  }
  sub_95494(a1, 47, 540, 197, (int)"ssl/statem/statem_clnt.c", 1391);
  return 0;
}
