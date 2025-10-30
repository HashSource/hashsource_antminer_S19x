int __fastcall sub_26A5C(unsigned int *a1, unsigned int *a2, int a3)
{
  unsigned int v5; // r3
  int v6; // r0
  unsigned int v7; // r3
  unsigned int v9; // r9
  unsigned int v10; // r8
  unsigned int v11; // r7
  unsigned int v12; // r0
  unsigned int v13; // r2
  unsigned int v14; // r0
  _BOOL4 v15; // lr
  unsigned int v16; // r10
  unsigned int v17; // r1
  unsigned int v18; // lr
  bool v19; // zf
  bool v20; // cf
  int v21; // r11
  bool v22; // zf
  int v23; // r0
  int v24; // r1
  int v25; // r10
  int v26; // r3

  v5 = bswap32(*a1);
  if ( (v5 & 0x40000000) != 0 )
    return 271;
  v6 = (unsigned __int16)v5;
  if ( (unsigned __int16)v5 <= 0x17u )
    return 257;
  v7 = HIWORD(v5) << 16;
  if ( v7 == -2113667072 && (*(_BYTE *)(a3 + 92) == 5 || (*(_BYTE *)(a3 + 72) & 0x20) != 0) )
  {
    if ( *(unsigned __int16 *)(a3 + 132) != bswap32(a1[1]) )
      return 271;
  }
  else if ( *(unsigned __int16 *)(a3 + 60) != bswap32(a1[1]) )
  {
    return 271;
  }
  v9 = bswap32(a1[4]);
  if ( v9 - 1 > 0xFFE6 )
    return 257;
  v10 = (v9 + 3) >> 2;
  v11 = bswap32(a1[v10 + 5]);
  if ( v11 > 0xFFE7 )
    return 257;
  v12 = v6 - 24;
  if ( v12 < 4 * v10 || v12 - 4 * v10 < ((v11 + 3) & 0xFFFFFFFC) )
    return 257;
  v13 = bswap32(a1[2]);
  v14 = bswap32(a1[3]);
  v15 = v13 < v14;
  if ( !v13 )
    v15 = 1;
  if ( v15 )
    return 258;
  if ( !a2 )
    goto LABEL_26;
  v16 = a2[1];
  v17 = bswap32(*a2);
  v18 = bswap32(v16);
  v19 = v18 == 0;
  if ( v18 )
    v19 = v17 == 0;
  if ( v19 )
    goto LABEL_26;
  if ( v13 < v17 )
    return 258;
  v20 = v13 >= v18;
  if ( v13 >= v18 )
    v20 = v14 >= v18;
  if ( !v20 )
    return 259;
LABEL_26:
  if ( v7 == -2113798144 )
    return 256;
  if ( (crypto_flags & *(_DWORD *)(a3 + 136) & 0x10) != 0 )
    v21 = dword_BA8E0;
  else
    v21 = *(_DWORD *)(a3 + 140);
  v22 = v11 == 0;
  if ( v11 )
    v22 = v21 == 0;
  if ( v22 || !*(_DWORD *)(a3 + 144) )
    return 271;
  v23 = EVP_PKEY_size(v21);
  if ( v23 != v11 )
    return 263;
  v25 = EVP_MD_CTX_new(v23, v24);
  EVP_DigestInit(v25, *(_DWORD *)(a3 + 144));
  EVP_DigestUpdate(v25, a1 + 2, v9 + 12);
  if ( EVP_VerifyFinal(v25, &a1[v10 + 6], v11, v21) > 0 )
  {
    EVP_MD_CTX_free(v25);
    v26 = *(_DWORD *)(a3 + 136);
    if ( (v26 & 0x200) != 0 )
    {
      *(_DWORD *)(a3 + 136) = v26 | 0x400;
      return 256;
    }
    return 256;
  }
  EVP_MD_CTX_free(v25);
  return 264;
}
