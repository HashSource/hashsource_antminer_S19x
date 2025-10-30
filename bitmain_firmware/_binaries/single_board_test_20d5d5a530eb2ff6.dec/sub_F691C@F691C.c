bool __fastcall sub_F691C(int a1, int a2, int a3)
{
  _DWORD *v4; // r6
  _DWORD *v7; // r0
  int v8; // r4
  const char *v9; // r2

  v4 = *(_DWORD **)(a2 + 24);
  v7 = (_DWORD *)v4[4];
  v8 = (int)v7;
  if ( v7 )
    v8 = sub_B85BC(v7);
  sub_10C010(v4[12], a2, a3);
  if ( !sub_B6E94(a1, a3, 128) )
    return 0;
  v9 = **(_DWORD **)(a2 + 12) == 912 ? "RSA-PSS" : (const char *)&dword_1BC564;
  if ( sub_B550C(a1, "%s ", v9) <= 0
    || sub_B550C(a1, "Public-Key: (%d bit)\n", v8) <= 0
    || !sub_12D850(a1, "Modulus:", v4[4], 0, a3)
    || !sub_12D850(a1, "Exponent:", v4[5], 0, a3) )
  {
    return 0;
  }
  if ( **(_DWORD **)(a2 + 12) == 912 )
    return sub_F6128(a1, 1, v4[13], a3);
  return 1;
}
