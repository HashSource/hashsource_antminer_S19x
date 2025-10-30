int __fastcall sub_BE63C(int a1, int a2, int a3)
{
  _DWORD *v3; // r6
  int v4; // r4
  bool v5; // zf
  int v6; // r5
  int v9; // r0
  int v10; // r2
  int v12; // r2
  int v13; // r2
  int v14; // r4
  int v15; // r2
  const char *v16; // r3
  int v17; // r1
  int v18; // r2

  v3 = *(_DWORD **)(a2 + 24);
  v4 = v3[5];
  v5 = v4 == 0;
  if ( v4 )
    v5 = v3[2] == 0;
  v6 = v5;
  if ( v5 )
  {
    v10 = 67;
    goto LABEL_11;
  }
  sub_B6E94(a1, a3, 128);
  v9 = sub_B85BC((_DWORD *)v3[2]);
  if ( sub_B550C(a1, "%s: (%d bit)\n", "DH Public-Key", v9) <= 0
    || !sub_12D850(a1, "private-key:", v6, v6, a3 + 4)
    || !sub_12D850(a1, "public-key:", v4, v6, a3 + 4)
    || !sub_12D850(a1, "prime:", v3[2], v6, a3 + 4)
    || !sub_12D850(a1, "generator:", v3[3], v6, a3 + 4)
    || (v12 = v3[9]) != 0 && !sub_12D850(a1, "subgroup order:", v12, v6, a3 + 4)
    || (v13 = v3[10]) != 0 && !sub_12D850(a1, "subgroup factor:", v13, 0, a3 + 4) )
  {
LABEL_9:
    v10 = 7;
LABEL_11:
    sub_D0048(5, 100, v10, "crypto/dh/dh_ameth.c", 343);
    return 0;
  }
  if ( !v3[11] )
    goto LABEL_29;
  sub_B6E94(a1, a3 + 4, 128);
  v14 = 0;
  sub_B6C30(a1, (int)"seed:");
  while ( 1 )
  {
    v17 = v3[12];
    if ( v14 >= v17 )
      break;
    if ( v14 == 15 * (v14 / 15) )
    {
      if ( sub_B6C30(a1, (int)"\n") <= 0 || !sub_B6E94(a1, a3 + 8, 128) )
        goto LABEL_9;
      v17 = v3[12];
    }
    v15 = *(unsigned __int8 *)(v3[11] + v14++);
    v16 = (const char *)&word_1B5258;
    if ( v14 == v17 )
      v16 = &byte_1A4198;
    if ( sub_B550C(a1, "%02x%s", v15, v16) <= 0 )
      goto LABEL_9;
  }
  if ( sub_B69CC(a1, (int)"\n", 1) > 0 )
  {
LABEL_29:
    v18 = v3[13];
    if ( !v18 || sub_12D850(a1, "counter:", v18, 0, a3 + 4) )
    {
      if ( !v3[4] )
        return 1;
      sub_B6E94(a1, a3 + 4, 128);
      if ( sub_B550C(a1, "recommended-private-length: %d bits\n", v3[4]) > 0 )
        return 1;
    }
    goto LABEL_9;
  }
  return 0;
}
