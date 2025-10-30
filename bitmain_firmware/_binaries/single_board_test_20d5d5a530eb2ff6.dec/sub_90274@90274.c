int __fastcall sub_90274(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r4
  int v8; // r1
  int v9; // r3
  int v10; // r1
  int v11; // r2
  int v12; // r9
  int v13; // r7
  bool v14; // cc
  int v15; // r1
  int v16; // r0
  int v17; // r0
  int v18; // r4
  _BYTE v19[36]; // [sp+Ch] [bp-24h] BYREF

  if ( a4 )
    return 2;
  if ( a1[335] != 1 )
    return 2;
  v5 = 0;
  if ( !sub_A8450(a2, a2, 5, 0, 2) || !sub_A8398(a2, 2) || !sub_A8450(a2, v8, 1, 0, 1) || !sub_A8398(a2, 2) )
  {
    v9 = 326;
LABEL_8:
    sub_95494(a1, 80, 479, 68, "ssl/statem/extensions_clnt.c", v9);
    return 0;
  }
  while ( 1 )
  {
    v14 = v5 < sub_10C010(a1[339], v10, v11);
    v15 = v5++;
    if ( !v14 )
      break;
    v12 = sub_10C01C(a1[339], v15);
    v13 = sub_EB7F4(v12, 0);
    if ( v13 <= 0 || !sub_A8420(a2, v13, v19, 2) || v13 != sub_EB7F4(v12, v19) )
    {
      v9 = 340;
      goto LABEL_8;
    }
  }
  if ( !sub_A7EDC(a2) || !sub_A8398(a2, 2) )
  {
    v9 = 347;
    goto LABEL_8;
  }
  v16 = a1[340];
  if ( v16 )
  {
    v17 = sub_115634(v16, 0);
    v18 = v17;
    if ( v17 < 0 )
    {
      v9 = 357;
      goto LABEL_8;
    }
    if ( !sub_A82B8(a2, v17, v19) || v18 != sub_115634(a1[340], v19) )
    {
      v9 = 365;
      goto LABEL_8;
    }
  }
  if ( !sub_A7EDC(a2) || !sub_A7EDC(a2) )
  {
    v9 = 371;
    goto LABEL_8;
  }
  return 1;
}
