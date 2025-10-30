void __fastcall sub_6B6B4(int a1)
{
  unsigned int v2; // r7
  unsigned int v3; // r8
  unsigned int v4; // r4
  char *v5; // r4
  unsigned int v6; // [sp+14h] [bp-34h] BYREF
  char v7[48]; // [sp+18h] [bp-30h] BYREF

  if ( (*(_BYTE *)a1 & 0xF) == dword_21B3A4 )
  {
    v2 = sub_7878C(*(_DWORD *)(a1 + 4), *(_DWORD *)(dword_223680 + 64));
    v3 = sub_78778(*(_DWORD *)(a1 + 4));
    v4 = *(_WORD *)(a1 + 2) & 0x7F;
    printf("%d, %d, %d, %d, %d\n", v2, v3, v4, 0, (*(_WORD *)(a1 + 2) & 0x7FFF) >> 7);
    if ( v2 >= *(_DWORD *)(dword_223680 + 64) )
    {
      sub_1E938(v7, 0x30u);
      printf("%s ", v7);
      printf(
        "%s : receive nonce from Aisc: %d, but the most Asic number is: %d\n",
        "BTC_super_software_pattern_check_nonce",
        v2,
        *(_DWORD *)(dword_223680 + 64));
      snprintf(
        byte_65D948,
        0x100u,
        "receive nonce from Aisc: %d, but the most Asic number is: %d",
        v2,
        *(_DWORD *)(dword_223680 + 64));
      sub_3CC5C((int)byte_65D948, v7);
      return;
    }
    if ( v3 > 0x6F )
    {
      sub_1E938(v7, 0x30u);
      printf("%s ", v7);
      printf(
        "%s : receive nonce from Aisc: %d, big_core %d, but the most Asic big_core number is: %d\n",
        "BTC_super_software_pattern_check_nonce",
        v2,
        v3,
        112);
      snprintf(
        byte_65DA48,
        0x100u,
        "receive nonce from Aisc: %d, big_core %d, but the most Asic big_core number is: %d",
        v2,
        v3,
        112);
      sub_3CC5C((int)byte_65DA48, v7);
      return;
    }
    if ( v3 == 111 )
    {
      if ( v4 > 5 )
      {
        sub_1E938(v7, 0x30u);
        printf("%s ", v7);
        printf(
          "%s : receive nonce from Aisc: %d, big_core %d, small_core %d, but the most Asic small_core number is: %d\n",
          "BTC_super_software_pattern_check_nonce",
          v2,
          111,
          v4,
          8);
        snprintf(
          byte_65DB48,
          0x100u,
          "receive nonce from Aisc: %d, big_core %d, small_core %d, but the most Asic small_core number is: %d",
          v2,
          111,
          v4,
          8);
        sub_3CC5C((int)byte_65DB48, v7);
        return;
      }
    }
    else if ( v4 > 7 )
    {
      sub_1E938(v7, 0x30u);
      printf("%s ", v7);
      printf(
        "%s : receive nonce from Aisc: %d, big_core %d, small_core %d, but the most Asic small_core number is: %d\n",
        "BTC_super_software_pattern_check_nonce",
        v2,
        v3,
        v4,
        8);
      snprintf(
        byte_65DC48,
        0x100u,
        "receive nonce from Aisc: %d, big_core %d, small_core %d, but the most Asic small_core number is: %d",
        v2,
        v3,
        v4,
        8);
      sub_3CC5C((int)byte_65DC48, v7);
      return;
    }
    v6 = bswap32(*(_DWORD *)(a1 + 4));
    sub_67AC8((unsigned __int8 *)&v6, 4);
    v5 = sub_67AC8((unsigned __int8 *)&v6, 4);
    sub_1E938(v7, 0x30u);
    printf("%s ", v7);
    printf(aSAsicDCoreidDR, "BTC_super_software_pattern_check_nonce", v2, v3, v5);
    snprintf(byte_65DD48, 0x100u, "asic:%d coreid:%d recv nonce: %s \n", v2, v3, v5);
    sub_3CC5C((int)byte_65DD48, v7);
    if ( v5 )
      free(v5);
  }
  else
  {
    sub_1E938(v7, 0x30u);
    printf("%s ", v7);
    printf(
      "%s : receive nonce from chain: %d, but not gChain: %d\n",
      "BTC_super_software_pattern_check_nonce",
      *(_BYTE *)a1 & 0xF,
      dword_21B3A4);
    snprintf(byte_65D848, 0x100u, "receive nonce from chain: %d, but not gChain: %d", *(_BYTE *)a1 & 0xF, dword_21B3A4);
    sub_3CC5C((int)byte_65D848, v7);
  }
}
