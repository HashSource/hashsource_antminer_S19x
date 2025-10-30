int __fastcall sub_1A7E4C(int a1, int a2, int a3)
{
  int v5; // r5
  int v6; // r6
  _DWORD *v7; // r0
  int v8; // r7
  _DWORD *v9; // r4
  _DWORD *v10; // r6
  _DWORD *v11; // r6
  _DWORD *v12; // r0
  int v13; // r2

  v5 = sub_212FE0(a3, a1);
  sub_213174(v5);
  v6 = sub_212E50(v5, a1);
  if ( a2 > 1 )
    --a2;
  v7 = sub_93028(8 * a2 + 12);
  *v7 = 0;
  *(_DWORD *)(v6 + 8) = v7;
  v8 = sub_21A6D8(v5);
  v9 = sub_930CC(0x14u);
  *v9 = 2;
  v10 = sub_93094(1u, 0x18u);
  v10[4] = sub_10B25C(v8);
  v9[2] = v10;
  v11 = sub_93094(1u, 0x18u);
  v12 = sub_10B25C(v8);
  v13 = v9[2];
  v11[4] = v12;
  v9[3] = v11;
  v11[3] = v13;
  *(_DWORD *)(v5 + 32) = v9;
  *(_DWORD *)(v5 + 20) = "ECOFF";
  return v5;
}
