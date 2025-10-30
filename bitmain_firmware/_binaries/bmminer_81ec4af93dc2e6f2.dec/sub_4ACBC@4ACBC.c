char *__fastcall sub_4ACBC(char *result, int a2)
{
  char *v2; // r7
  char *v4; // r8
  void *v5; // r2
  char *v6; // r4
  int v7; // r0
  int v8; // r1
  unsigned int v9; // r8
  int v10; // r10
  unsigned int i; // r4
  int v12; // r4
  int v13; // r0
  unsigned int v14; // s16
  int v15; // r4
  int v16; // r0
  int v17; // r3
  _WORD s[1026]; // [sp+18h] [bp-804h] BYREF

  if ( !dword_530F08 || !*(_DWORD *)(dword_530F08 + 4) )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy((char *)s, "Handle is NULL.\n");
      return (char *)sub_3AF5C(3, (const char *)s, 0, *(int *)"LL.\n");
    }
    return result;
  }
  v2 = result;
  if ( (unsigned int)off_AFC24 > 3 )
  {
    memset(s, 0, 0x800u);
    snprintf((char *)s, 0x800u, "chain %d stats:\n", v2);
    sub_3BE28(3, (const char *)s, 0);
    if ( (unsigned int)off_AFC24 > 3 )
    {
      memset(s, 0, 0x800u);
      v12 = sub_26580();
      v13 = sub_26540();
      snprintf((char *)s, 0x800u, "%-30s : %d\n", "send_nonce_num", v13 * 8 * v12);
      sub_3BE28(3, (const char *)s, 0);
      if ( (unsigned int)off_AFC24 <= 3 )
        goto LABEL_4;
      memset(s, 0, 0x800u);
      snprintf((char *)s, 0x800u, "%-30s : %d\n", "recv_nonce_num", *(_DWORD *)(a2 + 4 * (_DWORD)(v2 + 2107392)));
      sub_3BE28(3, (const char *)s, 0);
      if ( (unsigned int)off_AFC24 <= 3 )
        goto LABEL_39;
      memset(s, 0, 0x800u);
      v14 = *(_DWORD *)(a2 + 4 * (_DWORD)(v2 + 2107392));
      v15 = sub_26580();
      v16 = sub_26540();
      snprintf((char *)s, 0x800u, "%-30s : %f\n", "nonce_return_rate", (float)((float)v14 / (float)(v16 * 8 * v15)));
      sub_3BE28(3, (const char *)s, 0);
      if ( (unsigned int)off_AFC24 <= 3 )
        goto LABEL_4;
      memset(s, 0, 0x800u);
      snprintf(
        (char *)s,
        0x800u,
        "%-30s : %d\n",
        "nonce_num_repeated",
        *(_DWORD *)(a2 + 4 * ((int)&unk_202A04 + (_DWORD)v2)));
      sub_3BE28(3, (const char *)s, 0);
    }
    if ( (unsigned int)off_AFC24 <= 3 )
      goto LABEL_42;
    memset(s, 0, 0x800u);
    snprintf(
      (char *)s,
      0x800u,
      "%-30s : %d\n",
      "nonce_num_top_check_fail",
      *(_DWORD *)(a2 + 4 * ((int)&unk_202A08 + (_DWORD)v2)));
    sub_3BE28(3, (const char *)s, 0);
    if ( (unsigned int)off_AFC24 <= 3 )
      goto LABEL_4;
    memset(s, 0, 0x800u);
    snprintf(
      (char *)s,
      0x800u,
      "%-30s : %d\n",
      "nonce_num_crc_err",
      *(_DWORD *)(a2 + 4 * ((int)&unk_202A0C + (_DWORD)v2)));
    sub_3BE28(3, (const char *)s, 0);
LABEL_39:
    if ( (unsigned int)off_AFC24 <= 3 )
      goto LABEL_45;
    memset(s, 0, 0x800u);
    snprintf(
      (char *)s,
      0x800u,
      "%-30s : %d\n",
      "nonce_num_invalid",
      *(_DWORD *)(a2 + 4 * ((int)&unk_202A10 + (_DWORD)v2)));
    sub_3BE28(3, (const char *)s, 0);
    if ( (unsigned int)off_AFC24 <= 3 )
      goto LABEL_4;
    memset(s, 0, 0x800u);
    snprintf((char *)s, 0x800u, "%-30s : %d\n", "nonce_num_hw", *(_DWORD *)(a2 + 4 * ((int)&unk_202A14 + (_DWORD)v2)));
    sub_3BE28(3, (const char *)s, 0);
LABEL_42:
    if ( (unsigned int)off_AFC24 <= 3 )
      goto LABEL_48;
    memset(s, 0, 0x800u);
    snprintf(
      (char *)s,
      0x800u,
      "%-30s : %d\n",
      "nonce_num_extra",
      *(_DWORD *)(a2 + 4 * ((int)&unk_202A18 + (_DWORD)v2)));
    sub_3BE28(3, (const char *)s, 0);
    if ( (unsigned int)off_AFC24 <= 3 )
      goto LABEL_4;
    memset(s, 0, 0x800u);
    snprintf(
      (char *)s,
      0x800u,
      "%-30s : %d\n",
      "nonce_num_unknown_err",
      *(_DWORD *)(a2 + 4 * ((int)&unk_202A1C + (_DWORD)v2)));
    sub_3BE28(3, (const char *)s, 0);
LABEL_45:
    if ( (unsigned int)off_AFC24 <= 3 )
      goto LABEL_51;
    memset(s, 0, 0x800u);
    snprintf(
      (char *)s,
      0x800u,
      "%-30s : %d\n",
      "invalid_asic_num",
      *(_DWORD *)(a2 + 4 * ((int)&unk_202A20 + (_DWORD)v2) + 4));
    sub_3BE28(3, (const char *)s, 0);
    if ( (unsigned int)off_AFC24 <= 3 )
      goto LABEL_4;
    memset(s, 0, 0x800u);
    snprintf((char *)s, 0x800u, "%-30s : %d\n", "invalid_chain_num", *(_DWORD *)(a2 + 8431744));
    sub_3BE28(3, (const char *)s, 0);
LABEL_48:
    if ( (unsigned int)off_AFC24 <= 3 )
      goto LABEL_4;
    memset(s, 0, 0x800u);
    snprintf((char *)s, 0x800u, "%-30s : %.2f\n", "stddev", *(float *)(a2 + 4 * ((int)&unk_202A24 + (_DWORD)v2) + 4));
    sub_3BE28(3, (const char *)s, 0);
    if ( (unsigned int)off_AFC24 <= 3 )
      goto LABEL_4;
    memset(s, 0, 0x800u);
    s[0] = 10;
    sub_3BE28(3, (const char *)s, 0);
LABEL_51:
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf((char *)s, 0x800u, "Chain %d nonce:\n", v2);
      sub_3AF5C(3, (const char *)s, 0, v17);
    }
  }
LABEL_4:
  result = (char *)sub_26540();
  v4 = result;
  v5 = off_AFC24;
  if ( result )
  {
    v6 = 0;
    do
    {
      if ( (unsigned int)v5 > 3 )
      {
        memset(s, 0, 0x800u);
        snprintf(
          (char *)s,
          0x800u,
          "IC[%03d]:%04d ",
          v6,
          *(_DWORD *)(a2 + ((_DWORD)v2 << 10) + 4 * (_DWORD)v6 + 8425472));
        sub_3BE28(3, (const char *)s, 0);
      }
      ++v6;
      v7 = sub_26550();
      result = (char *)sub_8C474(v6, v7);
      v5 = off_AFC24;
      if ( !v8 && (unsigned int)off_AFC24 > 3 )
      {
        memset(s, 0, 0x800u);
        s[0] = 10;
        result = sub_3BE28(3, (const char *)s, 0);
        v5 = off_AFC24;
      }
    }
    while ( v6 != v4 );
  }
  if ( (unsigned int)v5 > 3 )
  {
    memset(s, 0, 0x800u);
    s[0] = 10;
    result = sub_3BE28(3, (const char *)s, 0);
    if ( *(_DWORD *)dword_530F08 == 161 )
      return result;
    if ( (unsigned int)off_AFC24 > 3 )
    {
      memset(s, 0, 0x800u);
      snprintf((char *)s, 0x800u, "Chain %d domain:\n", v2);
      sub_3BE28(3, (const char *)s, 0);
    }
  }
  else if ( *(_DWORD *)dword_530F08 == 161 )
  {
    return result;
  }
  v9 = 0;
  result = (char *)sub_26530();
  if ( result )
  {
    while ( 1 )
    {
      v10 = v9 * sub_265A0();
      for ( i = 0; sub_265A0() > i; ++i )
      {
        if ( (unsigned int)off_AFC24 > 3 )
        {
          memset(s, 0, 0x800u);
          snprintf(
            (char *)s,
            0x800u,
            "D[%02d]:%04d ",
            i + v10,
            *(_DWORD *)((char *)&dword_80A010[64 * (_DWORD)v2 + v10 + i] + a2));
          sub_3BE28(3, (const char *)s, 0);
        }
      }
      if ( sub_265A0() <= 1 )
        goto LABEL_28;
      if ( (unsigned int)off_AFC24 > 3 )
        break;
LABEL_24:
      ++v9;
      result = (char *)sub_26530();
      if ( (unsigned int)result <= v9 )
        goto LABEL_25;
    }
    memset(s, 0, 0x800u);
    snprintf((char *)s, 0x800u, "D_BIG[%02d]:%05d", v9, *(_DWORD *)((char *)&dword_80A410[64 * (_DWORD)v2 + v9] + a2));
    sub_3BE28(3, (const char *)s, 0);
LABEL_28:
    if ( (unsigned int)off_AFC24 > 3 )
    {
      memset(s, 0, 0x800u);
      s[0] = 10;
      sub_3BE28(3, (const char *)s, 0);
    }
    goto LABEL_24;
  }
LABEL_25:
  if ( (unsigned int)off_AFC24 > 3 )
  {
    memset(s, 0, 0x800u);
    strcpy((char *)s, "\n\n");
    return sub_3BE28(3, (const char *)s, 0);
  }
  return result;
}
