int __fastcall sub_C83AC(int a1)
{
  int v2; // r4
  _DWORD *v3; // r5
  int v4; // r2
  int v5; // r3
  int v6; // r2
  int v7; // r3
  int result; // r0
  int v9; // r0
  _BYTE v10[20]; // [sp+4h] [bp-50h] BYREF
  int v11; // [sp+18h] [bp-3Ch]

  v2 = *(_DWORD *)sub_242FDC(a1);
  sub_2665F0(v10);
  if ( v11 )
    sub_2575A4(v2, "addr");
  v3 = (_DWORD *)(a1 + 136);
  sub_B7694(5);
  sub_257380(v2, "fork", v4, v5);
  if ( !sub_98F78(v3, &dword_475848) )
  {
    sub_257380(v2, ", process ", v6, v7);
    v9 = ps_getpid_0((int)v3);
    sub_257504(v2, "what", v9);
    sub_257374(v2, 1);
  }
  result = sub_2573F0(v2);
  if ( result )
    return sub_2575E8(v2, "catch-type", "fork");
  return result;
}
