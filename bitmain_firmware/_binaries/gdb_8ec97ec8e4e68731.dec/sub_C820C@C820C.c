int __fastcall sub_C820C(int a1)
{
  int v2; // r4
  int v3; // r2
  int v4; // r3
  int v5; // r2
  int v6; // r3
  int v7; // r2
  int v8; // r3
  int result; // r0
  _BYTE v10[20]; // [sp+4h] [bp-50h] BYREF
  int v11; // [sp+18h] [bp-3Ch]

  v2 = *(_DWORD *)sub_242FDC(a1);
  sub_2665F0(v10);
  if ( v11 )
    sub_2575A4(v2, "addr");
  sub_B7694(5);
  sub_257380(v2, "exec", v3, v4);
  v6 = *(_DWORD *)(a1 + 136);
  if ( v6 )
  {
    sub_257380(v2, ", program \"", v5, v6);
    sub_2575E8(v2, "what", *(_DWORD *)(a1 + 136));
    sub_257380(v2, "\" ", v7, v8);
  }
  result = sub_2573F0(v2);
  if ( result )
    return sub_2575E8(v2, "catch-type", "exec");
  return result;
}
