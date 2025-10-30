int __fastcall sub_BE440(int a1, int a2, int a3)
{
  _DWORD *v3; // r4
  int v6; // r0
  int v7; // r2
  int v9; // r2
  int v10; // r2
  int v11; // r8
  int v12; // r2
  const char *v13; // r3
  int v14; // r1
  int v15; // r2

  v3 = *(_DWORD **)(a2 + 24);
  if ( !v3[2] )
  {
    v7 = 67;
    goto LABEL_5;
  }
  sub_B6E94(a1, a3, 128);
  v6 = sub_B85BC((_DWORD *)v3[2]);
  if ( sub_B550C(a1, "%s: (%d bit)\n", "DH Parameters", v6) <= 0
    || !sub_12D850(a1, "private-key:", 0, 0, a3 + 4)
    || !sub_12D850(a1, "public-key:", 0, 0, a3 + 4)
    || !sub_12D850(a1, "prime:", v3[2], 0, a3 + 4)
    || !sub_12D850(a1, "generator:", v3[3], 0, a3 + 4)
    || (v9 = v3[9]) != 0 && !sub_12D850(a1, "subgroup order:", v9, 0, a3 + 4)
    || (v10 = v3[10]) != 0 && !sub_12D850(a1, "subgroup factor:", v10, 0, a3 + 4) )
  {
LABEL_4:
    v7 = 7;
LABEL_5:
    sub_D0048(5, 100, v7, "crypto/dh/dh_ameth.c", 343);
    return 0;
  }
  if ( !v3[11] )
    goto LABEL_24;
  sub_B6E94(a1, a3 + 4, 128);
  v11 = 0;
  sub_B6C30(a1, (int)"seed:");
  while ( 1 )
  {
    v14 = v3[12];
    if ( v11 >= v14 )
      break;
    if ( v11 == 15 * (v11 / 15) )
    {
      if ( sub_B6C30(a1, (int)"\n") <= 0 || !sub_B6E94(a1, a3 + 8, 128) )
        goto LABEL_4;
      v14 = v3[12];
    }
    v12 = *(unsigned __int8 *)(v3[11] + v11++);
    v13 = (const char *)&word_1B5258;
    if ( v11 == v14 )
      v13 = &byte_1A4198;
    if ( sub_B550C(a1, "%02x%s", v12, v13) <= 0 )
      goto LABEL_4;
  }
  if ( sub_B69CC(a1, (int)"\n", 1) > 0 )
  {
LABEL_24:
    v15 = v3[13];
    if ( !v15 || sub_12D850(a1, "counter:", v15, 0, a3 + 4) )
    {
      if ( !v3[4] )
        return 1;
      sub_B6E94(a1, a3 + 4, 128);
      if ( sub_B550C(a1, "recommended-private-length: %d bits\n", v3[4]) > 0 )
        return 1;
    }
    goto LABEL_4;
  }
  return 0;
}
