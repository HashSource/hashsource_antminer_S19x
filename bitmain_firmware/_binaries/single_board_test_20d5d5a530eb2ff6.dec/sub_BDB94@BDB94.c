int __fastcall sub_BDB94(int a1, int a2, int a3)
{
  _DWORD *v3; // r5
  int v4; // r6
  int v5; // r7
  bool v6; // zf
  int v7; // r4
  int v10; // r0
  int v11; // r2
  int v13; // r2
  int v14; // r2
  int v15; // r4
  int v16; // r2
  const char *v17; // r3
  int v18; // r1
  int v19; // r2

  v3 = *(_DWORD **)(a2 + 24);
  v4 = v3[6];
  v5 = v3[5];
  v6 = v4 == 0;
  if ( v4 )
    v6 = v3[2] == 0;
  v7 = v6;
  if ( !v5 )
    v7 |= 1u;
  if ( v7 )
  {
    v11 = 67;
    goto LABEL_13;
  }
  sub_B6E94(a1, a3, 128);
  v10 = sub_B85BC((_DWORD *)v3[2]);
  if ( sub_B550C(a1, "%s: (%d bit)\n", "DH Private-Key", v10) <= 0
    || !sub_12D850(a1, "private-key:", v4, 0, a3 + 4)
    || !sub_12D850(a1, "public-key:", v5, 0, a3 + 4)
    || !sub_12D850(a1, "prime:", v3[2], 0, a3 + 4)
    || !sub_12D850(a1, "generator:", v3[3], 0, a3 + 4)
    || (v13 = v3[9]) != 0 && !sub_12D850(a1, "subgroup order:", v13, 0, a3 + 4)
    || (v14 = v3[10]) != 0 && !sub_12D850(a1, "subgroup factor:", v14, 0, a3 + 4) )
  {
LABEL_11:
    v11 = 7;
LABEL_13:
    sub_D0048(5, 100, v11, "crypto/dh/dh_ameth.c", 343);
    return 0;
  }
  if ( !v3[11] )
    goto LABEL_31;
  sub_B6E94(a1, a3 + 4, 128);
  v15 = 0;
  sub_B6C30(a1, (int)"seed:");
  while ( 1 )
  {
    v18 = v3[12];
    if ( v15 >= v18 )
      break;
    if ( v15 == 15 * (v15 / 15) )
    {
      if ( sub_B6C30(a1, (int)"\n") <= 0 || !sub_B6E94(a1, a3 + 8, 128) )
        goto LABEL_11;
      v18 = v3[12];
    }
    v16 = *(unsigned __int8 *)(v3[11] + v15++);
    v17 = (const char *)&word_1B5258;
    if ( v15 == v18 )
      v17 = &byte_1A4198;
    if ( sub_B550C(a1, "%02x%s", v16, v17) <= 0 )
      goto LABEL_11;
  }
  if ( sub_B69CC(a1, (int)"\n", 1) > 0 )
  {
LABEL_31:
    v19 = v3[13];
    if ( !v19 || sub_12D850(a1, "counter:", v19, 0, a3 + 4) )
    {
      if ( !v3[4] )
        return 1;
      sub_B6E94(a1, a3 + 4, 128);
      if ( sub_B550C(a1, "recommended-private-length: %d bits\n", v3[4]) > 0 )
        return 1;
    }
    goto LABEL_11;
  }
  return 0;
}
