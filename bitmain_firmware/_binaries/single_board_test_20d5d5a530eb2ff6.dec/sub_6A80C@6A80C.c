char *__fastcall sub_6A80C(int a1)
{
  char *result; // r0
  unsigned int v3; // r6
  char *v4; // r7
  unsigned int v5; // r9
  _BOOL4 v6; // r3
  unsigned int v7; // r3
  unsigned int v8; // r8
  unsigned int v9; // r7
  int v10; // r3
  int v11; // r2
  int v12; // r3
  _BYTE *v13; // r6
  __int16 v14; // r5
  char v15; // r4
  char v16[52]; // [sp+10h] [bp-34h] BYREF

  if ( (*(_BYTE *)a1 & 0xF) == dword_21B3A4 )
  {
    v3 = sub_7877C(*(_DWORD *)(a1 + 4), dword_6084C8);
    result = (char *)sub_78778(*(_DWORD *)(a1 + 4));
    v4 = result;
    if ( v3 >= *(_DWORD *)(dword_223680 + 64) )
    {
      sub_1E938(v16, 0x30u);
      printf("%s ", v16);
      printf(
        "%s : receive nonce from Aisc: %d, but the most Asic number is: %d\n",
        "BTC_mid_auto_gen_check_nonce",
        v3,
        *(_DWORD *)(dword_223680 + 64));
      snprintf(
        byte_65BF44,
        0x100u,
        "receive nonce from Aisc: %d, but the most Asic number is: %d",
        v3,
        *(_DWORD *)(dword_223680 + 64));
      return (char *)sub_3CC5C((int)byte_65BF44, v16);
    }
    else if ( (unsigned int)result > 0x6F )
    {
      sub_1E938(v16, 0x30u);
      printf("%s ", v16);
      printf(
        "%s : receive nonce from Aisc: %d, big_core %d, but the most Asic big_core number is: %d\n",
        "BTC_mid_auto_gen_check_nonce",
        v3,
        v4,
        112);
      snprintf(
        byte_65C044,
        0x100u,
        "receive nonce from Aisc: %d, big_core %d, but the most Asic big_core number is: %d",
        v3,
        v4,
        112);
      return (char *)sub_3CC5C((int)byte_65C044, v16);
    }
    else
    {
      v5 = HIBYTE(*(unsigned __int16 *)(a1 + 9)) & 7;
      v6 = v5 > 5;
      if ( result != (char *)111 )
        v6 = 0;
      if ( v6 )
      {
        sub_1E938(v16, 0x30u);
        printf("%s ", v16);
        printf(
          "%s : receive nonce from Aisc: %d, big_core %d, small_core %d, but the most Asic small_core number is: %d\n",
          "BTC_mid_auto_gen_check_nonce",
          v3,
          111,
          v5,
          8);
        snprintf(
          byte_65C144,
          0x100u,
          "receive nonce from Aisc: %d, big_core %d, small_core %d, but the most Asic small_core number is: %d",
          v3,
          111,
          v5,
          8);
        return (char *)sub_3CC5C((int)byte_65C144, v16);
      }
      else
      {
        v7 = *(_DWORD *)(dword_223680 + 312);
        v8 = (unsigned __int8)(*(unsigned __int16 *)(a1 + 2) >> 7);
        if ( v8 >= v7 )
        {
          sub_1E938(v16, 0x30u);
          printf("%s ", v16);
          return (char *)printf(
                           "%s : receive %dth pattern from Aisc: %d, big_core %d, small_core %d, but the most pattern number is: %d\n",
                           "BTC_mid_auto_gen_check_nonce",
                           v8,
                           v3,
                           v4,
                           v5,
                           *(_DWORD *)(dword_223680 + 312));
        }
        else
        {
          v9 = 8 * (__int16)result + v5;
          v10 = dword_7169B0[v3] + 60 * (v8 + v9 * v7);
          if ( *(_DWORD *)(v10 + 12) == *(_DWORD *)(a1 + 4) )
          {
            if ( *(_DWORD *)(v10 + 4) )
            {
              ++*(_DWORD *)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 44];
              ++*(_DWORD *)(v10 + 4);
              return &byte_5FE894;
            }
            else
            {
              v11 = (unsigned __int8)byte_5FE894;
              *(_DWORD *)(v10 + 4) = 1;
              v12 = v3 + 132392 * v11 + 131096;
              v13 = &byte_2337B0[1024 * v3 + (_DWORD)&loc_40A50 * v11 + v9];
              v14 = *(_WORD *)&byte_2337B0[2 * v12];
              v15 = v13[48];
              ++*(_DWORD *)&byte_2337B0[(_DWORD)&loc_40A50 * v11 + 40];
              *(_WORD *)&byte_2337B0[2 * v12] = v14 + 1;
              v13[48] = v15 + 1;
              return byte_2337B0;
            }
          }
        }
      }
    }
  }
  else
  {
    sub_1E938(v16, 0x30u);
    printf("%s ", v16);
    printf(
      "%s : receive nonce from chain: %d, but not gChain: %d\n",
      "BTC_mid_auto_gen_check_nonce",
      *(_BYTE *)a1 & 0xF,
      dword_21B3A4);
    snprintf(byte_65BE44, 0x100u, "receive nonce from chain: %d, but not gChain: %d", *(_BYTE *)a1 & 0xF, dword_21B3A4);
    return (char *)sub_3CC5C((int)byte_65BE44, v16);
  }
  return result;
}
