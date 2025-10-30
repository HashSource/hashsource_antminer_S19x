int __fastcall sub_BEFE4(int a1, _DWORD *a2)
{
  int v4; // r0
  int v5; // r2
  int v7; // r2
  int v8; // r2
  int v9; // r6
  int v10; // r2
  __int16 *v11; // r3
  int v12; // lr
  int v13; // r2

  if ( !a2[2] )
  {
    v5 = 67;
    goto LABEL_5;
  }
  sub_B6E94(a1, 4, 128);
  v4 = sub_B85BC((_DWORD *)a2[2]);
  if ( sub_B550C(a1, "%s: (%d bit)\n", "DH Parameters", v4) <= 0
    || !sub_12D850(a1, "private-key:", 0, 0, 8)
    || !sub_12D850(a1, "public-key:", 0, 0, 8)
    || !sub_12D850(a1, "prime:", a2[2], 0, 8)
    || !sub_12D850(a1, "generator:", a2[3], 0, 8)
    || (v7 = a2[9]) != 0 && !sub_12D850(a1, "subgroup order:", v7, 0, 8)
    || (v8 = a2[10]) != 0 && !sub_12D850(a1, "subgroup factor:", v8, 0, 8) )
  {
LABEL_4:
    v5 = 7;
LABEL_5:
    sub_D0048(5, 100, v5, "crypto/dh/dh_ameth.c", 343);
    return 0;
  }
  if ( !a2[11] )
    goto LABEL_24;
  sub_B6E94(a1, 8, 128);
  v9 = 0;
  sub_B6C30(a1, (int)"seed:");
  while ( 1 )
  {
    v12 = a2[12];
    if ( v9 >= v12 )
      break;
    if ( v9 == 15 * (v9 / 15) )
    {
      if ( sub_B6C30(a1, (int)"\n") <= 0 || !sub_B6E94(a1, 12, 128) )
        goto LABEL_4;
      v12 = a2[12];
    }
    v10 = *(unsigned __int8 *)(a2[11] + v9++);
    v11 = &word_1B5258;
    if ( v12 == v9 )
      v11 = (__int16 *)&byte_1A4198;
    if ( sub_B550C(a1, "%02x%s", v10, v11) <= 0 )
      goto LABEL_4;
  }
  if ( sub_B69CC(a1, (int)"\n", 1) > 0 )
  {
LABEL_24:
    v13 = a2[13];
    if ( !v13 || sub_12D850(a1, "counter:", v13, 0, 8) )
    {
      if ( !a2[4] )
        return 1;
      sub_B6E94(a1, 8, 128);
      if ( sub_B550C(a1, "recommended-private-length: %d bits\n", a2[4]) > 0 )
        return 1;
    }
    goto LABEL_4;
  }
  return 0;
}
