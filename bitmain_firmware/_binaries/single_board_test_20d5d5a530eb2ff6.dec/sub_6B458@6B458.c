void __fastcall sub_6B458(int a1)
{
  unsigned int v2; // r7
  unsigned int v3; // r0
  int v4; // r8
  int v5; // r6
  unsigned int v6; // r4
  char *v7; // r0
  char v8[52]; // [sp+10h] [bp-34h] BYREF

  if ( (*(_BYTE *)a1 & 0xF) != dword_21B3A4 )
  {
    sub_1E938(v8, 0x30u);
    printf("%s ", v8);
    printf(
      "%s : receive nonce from chain: %d, but not gChain: %d\n",
      "BTC_cpugen_pattern_check_nonce",
      *(_BYTE *)a1 & 0xF,
      dword_21B3A4);
    snprintf(byte_65D348, 0x100u, "receive nonce from chain: %d, but not gChain: %d", *(_BYTE *)a1 & 0xF, dword_21B3A4);
    sub_3CC5C((int)byte_65D348, v8);
    return;
  }
  v2 = sub_7878C(*(_DWORD *)(a1 + 4), *(_DWORD *)(dword_223680 + 64));
  v3 = sub_78778(*(_DWORD *)(a1 + 4));
  v4 = v3;
  v5 = (*(_WORD *)(a1 + 2) & 0x7FFF) >> 7;
  if ( v2 >= *(_DWORD *)(dword_223680 + 64) )
  {
    sub_1E938(v8, 0x30u);
    printf("%s ", v8);
    printf(
      "%s : receive nonce from Aisc: %d, but the most Asic number is: %d\n",
      "BTC_cpugen_pattern_check_nonce",
      v2,
      *(_DWORD *)(dword_223680 + 64));
    snprintf(
      byte_65D448,
      0x100u,
      "receive nonce from Aisc: %d, but the most Asic number is: %d",
      v2,
      *(_DWORD *)(dword_223680 + 64));
    v7 = byte_65D448;
    goto LABEL_13;
  }
  if ( v3 > 0x6F )
  {
    sub_1E938(v8, 0x30u);
    printf("%s ", v8);
    printf(
      "%s : receive nonce from Aisc: %d, big_core %d, but the most Asic big_core number is: %d\n",
      "BTC_cpugen_pattern_check_nonce",
      v2,
      v4,
      112);
    snprintf(
      byte_65D548,
      0x100u,
      "receive nonce from Aisc: %d, big_core %d, but the most Asic big_core number is: %d",
      v2,
      v4,
      112);
    v7 = byte_65D548;
    goto LABEL_13;
  }
  v6 = *(_WORD *)(a1 + 2) & 0x7F;
  if ( v3 != 111 )
  {
    if ( v6 <= 7 )
      goto LABEL_8;
    sub_1E938(v8, 0x30u);
    printf("%s ", v8);
    printf(
      "%s : receive nonce from Aisc: %d, big_core %d, small_core %d, but the most Asic small_core number is: %d\n",
      "BTC_cpugen_pattern_check_nonce",
      v2,
      v4,
      v6,
      8);
    snprintf(
      byte_65D748,
      0x100u,
      "receive nonce from Aisc: %d, big_core %d, small_core %d, but the most Asic small_core number is: %d",
      v2,
      v4,
      v6,
      8);
    v7 = byte_65D748;
LABEL_13:
    sub_3CC5C((int)v7, v8);
    dword_718B8C[17 * v5 + 1] = 2;
    return;
  }
  if ( v6 > 5 )
  {
    sub_1E938(v8, 0x30u);
    printf("%s ", v8);
    printf(
      "%s : receive nonce from Aisc: %d, big_core %d, small_core %d, but the most Asic small_core number is: %d\n",
      "BTC_cpugen_pattern_check_nonce",
      v2,
      v4,
      v6,
      8);
    snprintf(
      byte_65D648,
      0x100u,
      "receive nonce from Aisc: %d, big_core %d, small_core %d, but the most Asic small_core number is: %d",
      v2,
      v4,
      v6,
      8);
    v7 = byte_65D648;
    goto LABEL_13;
  }
LABEL_8:
  if ( !sub_6AB28((unsigned int)&dword_7055AC[69 * v5], *(_WORD *)(a1 + 2) & 0x7F, *(_DWORD *)(a1 + 4)) )
    sub_6B29C(&dword_7055AC[69 * v5], v5, v2, v6, v4, *(_DWORD *)(a1 + 4), (*(_BYTE *)(a1 + 1) & 0x7F) + 32);
}
