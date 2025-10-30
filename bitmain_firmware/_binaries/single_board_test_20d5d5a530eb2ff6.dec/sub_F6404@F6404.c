bool __fastcall sub_F6404(int a1, int a2, int a3)
{
  _DWORD *v4; // r4
  _DWORD *v7; // r0
  int v8; // r8
  int v9; // r9
  const char *v10; // r2
  int v11; // r3
  const char *v12; // r8
  const char *v13; // r1
  int v15; // r1
  int v16; // r9
  const char *v17; // r2
  int v18; // r8
  _DWORD *v19; // r10

  v4 = *(_DWORD **)(a2 + 24);
  v7 = (_DWORD *)v4[4];
  v8 = (int)v7;
  if ( v7 )
    v8 = sub_B85BC(v7);
  v9 = sub_10C010(v4[12], a2, a3);
  if ( !sub_B6E94(a1, a3, 128) )
    return 0;
  v10 = **(_DWORD **)(a2 + 12) == 912 ? "RSA-PSS" : (const char *)&dword_1BC564;
  if ( sub_B550C(a1, "%s ", v10) <= 0 )
    return 0;
  if ( v4[6] )
  {
    if ( v9 <= 0 )
      v11 = 2;
    else
      v11 = v9 + 2;
    if ( sub_B550C(a1, "Private-Key: (%d bit, %d primes)\n", v8, v11) <= 0 )
      return 0;
    v12 = "publicExponent:";
    v13 = "modulus:";
  }
  else
  {
    if ( sub_B550C(a1, "Public-Key: (%d bit)\n", v8) <= 0 )
      return 0;
    v12 = "Exponent:";
    v13 = "Modulus:";
  }
  if ( !sub_12D850(a1, v13, v4[4], 0, a3)
    || !sub_12D850(a1, v12, v4[5], 0, a3)
    || !sub_12D850(a1, "privateExponent:", v4[6], 0, a3)
    || !sub_12D850(a1, "prime1:", v4[7], 0, a3)
    || !sub_12D850(a1, "prime2:", v4[8], 0, a3)
    || !sub_12D850(a1, "exponent1:", v4[9], 0, a3)
    || !sub_12D850(a1, "exponent2:", v4[10], 0, a3)
    || !sub_12D850(a1, "coefficient:", v4[11], 0, a3) )
  {
    return 0;
  }
  v16 = 3;
  v17 = "coefficient%d:";
LABEL_27:
  if ( sub_10C010(v4[12], v15, v17) > v16 - 3 )
  {
    v18 = 1;
    v19 = (_DWORD *)sub_10C01C(v4[12], v16 - 3);
    while ( sub_B6E94(a1, a3, 128) )
    {
      if ( v18 == 2 )
      {
        if ( sub_B550C(a1, "exponent%d:", v16) <= 0 || !sub_12D850(a1, &byte_1A4198, v19[1], 0, a3) )
          return 0;
      }
      else
      {
        if ( v18 == 3 )
        {
          if ( sub_B550C(a1, "coefficient%d:", v16) > 0 && sub_12D850(a1, &byte_1A4198, v19[2], 0, a3) )
          {
            ++v16;
            goto LABEL_27;
          }
          return 0;
        }
        if ( sub_B550C(a1, "prime%d:", v16) <= 0 || !sub_12D850(a1, &byte_1A4198, *v19, 0, a3) )
          return 0;
      }
      ++v18;
    }
    return 0;
  }
  return **(_DWORD **)(a2 + 12) != 912 || sub_F6128(a1, 1, v4[13], a3);
}
