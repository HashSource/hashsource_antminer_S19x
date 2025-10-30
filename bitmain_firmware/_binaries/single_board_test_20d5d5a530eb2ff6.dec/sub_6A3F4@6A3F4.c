int __fastcall sub_6A3F4(int a1)
{
  _DWORD *v2; // r4
  int result; // r0
  unsigned int v4; // r7
  unsigned int v5; // r0
  unsigned int v6; // r8
  unsigned int v7; // r9
  unsigned int v8; // r3
  unsigned int v9; // r4
  int v10; // r3
  int v11; // r2
  int v12; // r2
  int v13; // r1
  int v14; // r3
  int v15; // r2
  _BYTE *v16; // r3
  __int16 v17; // r6
  int v18; // r2
  int v19; // r3
  __int16 v20; // r6
  char v21; // r1
  char v22[52]; // [sp+10h] [bp-34h] BYREF

  LOWORD(v2) = (unsigned __int16)&dword_21B3A4;
  if ( !a1 )
  {
    HIWORD(v2) = (unsigned int)&dword_21B3A4 >> 16;
    goto LABEL_3;
  }
  HIWORD(v2) = (unsigned int)&dword_21B3A4 >> 16;
  if ( (*(_BYTE *)a1 & 0xF) != *v2 )
  {
LABEL_3:
    sub_1E938(v22, 0x30u);
    printf("%s ", v22);
    printf(
      "%s : receive nonce from chain: %d, but not gChain: %d\n",
      "BTC_software_pattern_check_nonce",
      *(_BYTE *)a1 & 0xF,
      *v2);
    snprintf(byte_65B744, 0x100u, "receive nonce from chain: %d, but not gChain: %d", *(_BYTE *)a1 & 0xF, *v2);
    return sub_3CC5C((int)byte_65B744, v22);
  }
  v4 = sub_7877C(*(_DWORD *)(a1 + 4), dword_6084C8);
  v5 = sub_78778(*(_DWORD *)(a1 + 4));
  v6 = v5;
  if ( v4 >= *(_DWORD *)(dword_223680 + 64) )
  {
    sub_1E938(v22, 0x30u);
    printf("%s ", v22);
    printf(
      "%s : receive nonce from Aisc: %d, but the most Asic number is: %d\n",
      "BTC_software_pattern_check_nonce",
      v4,
      *(_DWORD *)(dword_223680 + 64));
    snprintf(
      byte_65B844,
      0x100u,
      "receive nonce from Aisc: %d, but the most Asic number is: %d",
      v4,
      *(_DWORD *)(dword_223680 + 64));
    return sub_3CC5C((int)byte_65B844, v22);
  }
  if ( v5 > 0x6F )
  {
    sub_1E938(v22, 0x30u);
    printf("%s ", v22);
    printf(
      "%s : receive nonce from Aisc: %d, big_core %d, but the most Asic big_core number is: %d\n",
      "BTC_software_pattern_check_nonce",
      v4,
      v6,
      112);
    snprintf(
      byte_65B944,
      0x100u,
      "receive nonce from Aisc: %d, big_core %d, but the most Asic big_core number is: %d",
      v4,
      v6,
      112);
    return sub_3CC5C((int)byte_65B944, v22);
  }
  v7 = *(_WORD *)(a1 + 2) & 0x7F;
  if ( v5 == 111 )
  {
    if ( v7 > 5 )
    {
      sub_1E938(v22, 0x30u);
      printf("%s ", v22);
      printf(
        "%s : receive nonce from Aisc: %d, big_core %d, small_core %d, but the most Asic small_core number is: %d\n",
        "BTC_software_pattern_check_nonce",
        v4,
        v6,
        v7,
        8);
      snprintf(
        byte_65BA44,
        0x100u,
        "receive nonce from Aisc: %d, big_core %d, small_core %d, but the most Asic small_core number is: %d",
        v4,
        v6,
        v7,
        8);
      return sub_3CC5C((int)byte_65BA44, v22);
    }
  }
  else if ( v7 > 7 )
  {
    sub_1E938(v22, 0x30u);
    printf("%s ", v22);
    printf(
      "%s : receive nonce from Aisc: %d, big_core %d, small_core %d, but the most Asic small_core number is: %d\n",
      "BTC_software_pattern_check_nonce",
      v4,
      v6,
      v7,
      8);
    snprintf(
      byte_65BB44,
      0x100u,
      "receive nonce from Aisc: %d, big_core %d, small_core %d, but the most Asic small_core number is: %d",
      v4,
      v6,
      v7,
      8);
    return sub_3CC5C((int)byte_65BB44, v22);
  }
  v8 = *(_DWORD *)(dword_223680 + 312);
  v9 = (*(_WORD *)(a1 + 2) & 0x7FFF) >> 7;
  if ( v9 >= v8 )
  {
    sub_1E938(v22, 0x30u);
    printf("%s ", v22);
    printf(
      "%s : receive %dth pattern from Aisc: %d, big_core %d, small_core %d, but the most pattern number is: %d\n",
      "BTC_software_pattern_check_nonce",
      v9,
      v4,
      v6,
      v7,
      *(_DWORD *)(dword_223680 + 312));
    snprintf(
      byte_65BC44,
      0x100u,
      "receive %dth pattern from Aisc: %d, big_core %d, small_core %d, but the most pattern number is: %d",
      v9,
      v4,
      v6,
      v7,
      *(_DWORD *)(dword_223680 + 312));
    return sub_3CC5C((int)byte_65BC44, v22);
  }
  result = 8 * (__int16)v5 + v7;
  v10 = dword_7169B0[v4] + 60 * (v9 + result * v8);
  if ( v10 )
  {
    if ( *(_DWORD *)(v10 + 12) == *(_DWORD *)(a1 + 4) )
    {
      v11 = *(_DWORD *)(v10 + 4);
      if ( *(_DWORD *)(dword_223680 + 272) == 4 )
      {
        if ( !v11 )
        {
          v18 = (unsigned __int8)byte_5FE894;
          *(_DWORD *)(v10 + 4) = 1;
          v19 = v4 + 132392 * v18 + 131096;
          result += (int)&byte_2337B0[1024 * v4 + (_DWORD)&loc_40A50 * v18];
          v20 = *(_WORD *)&byte_2337B0[2 * v19];
          v21 = *(_BYTE *)(result + 48);
          ++*(_DWORD *)&byte_2337B0[(_DWORD)&loc_40A50 * v18 + 40];
          *(_WORD *)&byte_2337B0[2 * v19] = v20 + 1;
          *(_BYTE *)(result + 48) = v21 + 1;
          return result;
        }
      }
      else if ( !v11 )
      {
        v12 = (unsigned __int8)byte_5FE894;
        *(_DWORD *)(v10 + 4) = 1;
        v13 = (_DWORD)&loc_40A50 * v12;
        v14 = (_DWORD)&loc_40A50 * v12 + (v4 << 10);
        v15 = v4 + 132392 * v12 + 131096;
        v16 = &byte_2337B0[v14 + result];
        v17 = *(_WORD *)&byte_2337B0[2 * v15];
        result = (unsigned __int8)v16[48];
        ++*(_DWORD *)&byte_2337B0[v13 + 40];
        *(_WORD *)&byte_2337B0[2 * v15] = v17 + 1;
        v16[48] = result + 1;
        return result;
      }
      ++*(_DWORD *)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 44];
      ++*(_DWORD *)(v10 + 4);
      return (int)&loc_40A50;
    }
  }
  else
  {
    sub_1E938(v22, 0x30u);
    printf("%s ", v22);
    printf(
      "%s : work is null,which_big_core:%d,which_small_core:%d,which_pattern:%d\n",
      "BTC_software_pattern_check_nonce",
      v6,
      v7,
      v9);
    snprintf(byte_65BD44, 0x100u, "work is null,which_big_core:%d,which_small_core:%d,which_pattern:%d", v6, v7, v9);
    return sub_3CC5C((int)byte_65BD44, v22);
  }
  return result;
}
