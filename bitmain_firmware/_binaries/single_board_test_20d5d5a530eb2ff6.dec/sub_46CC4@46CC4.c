int __fastcall sub_46CC4(int a1, _DWORD *a2)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r2
  int v5; // r3
  int result; // r0
  unsigned int v8; // r7
  unsigned int v9; // r0
  _DWORD *v10; // r3
  unsigned int v11; // r6
  unsigned int v12; // r2
  unsigned int v13; // r8
  unsigned int v14; // lr
  unsigned int v15; // r10
  _DWORD *v16; // r3
  int v17; // r10
  int v18; // r2
  int v19; // r6
  char s[256]; // [sp+10h] [bp-100h] BYREF

  v2 = a2 + 34560;
  v3 = (_DWORD *)a2[34726];
  v5 = *(_BYTE *)a1 & 0xF;
  if ( v5 == *v3 )
  {
    v8 = sub_7877C(*(_DWORD *)(a1 + 4), v3[10]);
    v9 = sub_78778(*(_DWORD *)(a1 + 4));
    v10 = (_DWORD *)v2[166];
    v11 = v9;
    if ( v8 >= v10[1] )
    {
      sub_1E938(s, 0x30u);
      printf("%s ", s);
      printf(
        "%s : receive nonce from Aisc: %d, but the most Asic number is: %d\n",
        "check_nonce",
        v8,
        *(_DWORD *)(v2[166] + 4));
      snprintf(
        &byte_6454E4[256],
        0x100u,
        "receive nonce from Aisc: %d, but the most Asic number is: %d",
        v8,
        *(_DWORD *)(v2[166] + 4));
      return sub_3CC5C((int)&byte_6454E4[256], s);
    }
    if ( v9 >= v10[5] )
    {
      sub_1E938(s, 0x30u);
      printf("%s ", s);
      printf(
        "%s : receive nonce from Aisc: %d, big_core %d, but the most Asic big_core number is: %d\n",
        "check_nonce",
        v8,
        v11,
        *(_DWORD *)(v2[166] + 20));
      snprintf(
        &byte_6454E4[512],
        0x100u,
        "receive nonce from Aisc: %d, big_core %d, but the most Asic big_core number is: %d",
        v8,
        v11,
        *(_DWORD *)(v2[166] + 20));
      return sub_3CC5C((int)&byte_6454E4[512], s);
    }
    v12 = v10[7];
    v13 = *(_WORD *)(a1 + 2) & 0x7F;
    if ( v9 == v10[9] )
    {
      if ( v13 >= v12 - 2 )
      {
        sub_1E938(s, 0x30u);
        printf("%s ", s);
        printf(
          "%s : receive nonce from Aisc: %d, big_core %d, small_core %d, but the most Asic small_core number is: %d\n",
          "check_nonce",
          v8,
          v11,
          v13,
          *(_DWORD *)(v2[166] + 28));
        snprintf(
          &byte_6454E4[768],
          0x100u,
          "receive nonce from Aisc: %d, big_core %d, small_core %d, but the most Asic small_core number is: %d",
          v8,
          v11,
          v13,
          *(_DWORD *)(v2[166] + 28));
        return sub_3CC5C((int)&byte_6454E4[768], s);
      }
    }
    else if ( v13 >= v12 )
    {
      sub_1E938(s, 0x30u);
      printf("%s ", s);
      printf(
        "%s : receive nonce from Aisc: %d, big_core %d, small_core %d, but the most Asic small_core number is: %d\n",
        "check_nonce",
        v8,
        v11,
        v13,
        *(_DWORD *)(v2[166] + 28));
      snprintf(
        &byte_6454E4[1024],
        0x100u,
        "receive nonce from Aisc: %d, big_core %d, small_core %d, but the most Asic small_core number is: %d",
        v8,
        v11,
        v13,
        *(_DWORD *)(v2[166] + 28));
      return sub_3CC5C((int)&byte_6454E4[1024], s);
    }
    v14 = v10[8];
    v15 = (*(_WORD *)(a1 + 2) & 0x7FFF) >> 7;
    if ( v15 >= v14 )
    {
      sub_1E938(s, 0x30u);
      printf("%s ", s);
      printf(
        "%s : receive %dth pattern from Aisc: %d, big_core %d, small_core %d, but the most pattern number is: %d\n",
        "check_nonce",
        v15,
        v8,
        v11,
        v13,
        *(_DWORD *)(v2[166] + 32));
      snprintf(
        &byte_6454E4[1280],
        0x100u,
        "receive %dth pattern from Aisc: %d, big_core %d, small_core %d, but the most pattern number is: %d",
        v15,
        v8,
        v11,
        v13,
        *(_DWORD *)(v2[166] + 32));
      return sub_3CC5C((int)&byte_6454E4[1280], s);
    }
    else
    {
      result = *(_DWORD *)(a1 + 4);
      v16 = &a2[(__int16)v8];
      v17 = v16[34598] + 56 * (v15 + v14 * (v13 + v12 * v11));
      if ( *(_DWORD *)(v17 + 8) == result )
      {
        v18 = *(_DWORD *)(v17 + 4);
        if ( v18 )
        {
          *(_DWORD *)(v17 + 4) = v18 + 1;
          ++a2[1411];
        }
        else
        {
          *(_DWORD *)(v17 + 4) = 1;
          ++a2[34509];
          v19 = (int)&a2[256 * v8] + v13 + *(_DWORD *)(v2[166] + 28) * v11;
          ++*(_BYTE *)(v19 + 5684);
          ++*((_WORD *)a2 + (__int16)v8 + 68378);
          ++v16[1154];
          ++a2[1282];
          return 5128;
        }
      }
    }
  }
  else
  {
    snprintf(s, 0x100u, "receive nonce from chain: %d, but not gChain: %d", v5, *v3);
    return puts(s);
  }
  return result;
}
