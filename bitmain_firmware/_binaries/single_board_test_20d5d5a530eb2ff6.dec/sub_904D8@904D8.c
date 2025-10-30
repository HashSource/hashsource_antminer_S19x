int __fastcall sub_904D8(int a1, int a2)
{
  int v4; // r0
  int v5; // r1
  int v6; // r4
  int v7; // r3
  int v9; // r1
  int v10; // r2
  int v11; // r9
  int v12; // r6
  int v13; // r1
  int v14; // r0
  int v15; // r1
  int v16; // r1

  v4 = sub_A7D64();
  if ( !v4 )
    return 2;
  v6 = v4;
  if ( !sub_A8450(a2, v5, 14, 0, 2) || !sub_A8398(a2, 2) || !sub_A8398(a2, 2) )
  {
    v7 = 442;
LABEL_5:
    sub_95494(a1, 80, 482, 68, "ssl/statem/extensions_clnt.c", v7);
    return 0;
  }
  v11 = sub_10C010(v6, v9, v10);
  if ( v11 > 0 )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = v12++;
      v14 = sub_10C01C(v6, v13);
      if ( !v14 || !sub_A8450(a2, v15, *(_DWORD *)(v14 + 4), 0, 2) )
        break;
      if ( v12 == v11 )
        goto LABEL_15;
    }
    v7 = 453;
    goto LABEL_5;
  }
LABEL_15:
  if ( !sub_A7EDC(a2) || !sub_A8450(a2, v16, 0, 0, 1) || !sub_A7EDC(a2) )
  {
    v7 = 462;
    goto LABEL_5;
  }
  return 1;
}
