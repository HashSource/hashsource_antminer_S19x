int __fastcall sub_2789C(int a1, int a2)
{
  unsigned int v4; // r0
  int v5; // r1
  unsigned int v6; // r9
  unsigned int v7; // r5
  unsigned int v8; // r8
  _DWORD *v9; // r10
  int v10; // r4
  int v11; // r8
  int v12; // r6
  unsigned int v13; // r3
  unsigned int v14; // r6
  int v15; // r5
  unsigned int v16; // r11
  unsigned int v17; // r8
  bool v18; // cc
  _BOOL4 v19; // r3
  _DWORD *v20; // r0
  int v21; // r1
  int v22; // r4
  int v23; // r2
  int v25; // [sp+8h] [bp-1Ch]
  unsigned int v26; // [sp+18h] [bp-Ch] BYREF

  if ( !a2 )
    return 271;
  v4 = sub_268FC();
  v6 = v4;
  if ( !*(_DWORD *)(a1 + 240) )
  {
    v4 = sub_64BCC(0, 100, 4);
    *(_DWORD *)(a1 + 240) = v4;
  }
  do
  {
    do
    {
      v4 = sub_69A2C(v4, v5);
      v7 = v4;
    }
    while ( v4 < 0x10000 );
    v4 = sub_62F54();
  }
  while ( v4 );
  v8 = *(unsigned __int8 *)(a1 + 94);
  v9 = (_DWORD *)(a2 + 24);
  v10 = 0;
  if ( v8 >= *(unsigned __int8 *)(a1 + 64) )
    LOBYTE(v8) = *(_BYTE *)(a1 + 64);
  v11 = 1 << v8;
  v12 = 100 * v11;
  if ( 100 * v11 >= (unsigned int)(1 << sys_automax) )
    v12 = 1 << sys_automax;
  v25 = 2 * v11;
  v13 = v7;
  v14 = v12 - v11;
  v15 = v11;
  if ( *(_BYTE *)(a1 + 63) == 5 )
    v16 = 0;
  else
    v16 = *(_DWORD *)(a1 + 168);
  v17 = v13;
  do
  {
    *(_DWORD *)(*(_DWORD *)(a1 + 240) + 4 * v10) = v17;
    *(_DWORD *)(a1 + 244) = v10;
    v17 = sub_27700(v9, (_DWORD *)(a1 + 16), v17, v16, v14 + v25);
    if ( sub_62EDC() )
      break;
    v18 = v6 != 0;
    if ( v6 )
      v18 = v17 > 0xFFFF;
    v19 = !v18;
    if ( v19 | (v14 >> 31) )
      break;
    ++v10;
    v14 -= v15;
  }
  while ( v10 != 100 );
  v20 = *(_DWORD **)(a1 + 284);
  if ( !v20 )
  {
    v20 = (_DWORD *)sub_64B04(0, 8, 0, 0);
    *(_DWORD *)(a1 + 284) = v20;
  }
  v20[1] = bswap32(*(_DWORD *)(a1 + 244));
  *v20 = bswap32(v17);
  v21 = 0x8000000;
  *(_DWORD *)(a1 + 272) = bswap32(v6);
  *(_DWORD *)(a1 + 280) = 0x8000000;
  *(_DWORD *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 276) = hostval;
  if ( !v6 )
    return 256;
  if ( !*(_DWORD *)(a1 + 292) )
  {
    v20 = (_DWORD *)sub_64B04(*(_DWORD *)(a1 + 292), dword_BA8E4, *(_DWORD *)(a1 + 292), 0);
    *(_DWORD *)(a1 + 292) = v20;
  }
  v22 = EVP_MD_CTX_new(v20, v21);
  EVP_DigestInit(v22, dword_BA8E8);
  EVP_DigestUpdate(v22, a1 + 272, 12);
  EVP_DigestUpdate(v22, *(_DWORD *)(a1 + 284), 8);
  if ( EVP_SignFinal(v22, *(_DWORD *)(a1 + 292), &v26, dword_BA8E0) )
  {
    if ( v26 > dword_BA8E4 )
      sub_6FC54("ntp_crypto.c", 397, 2, "len <= sign_siglen");
    v23 = *(_DWORD *)(a1 + 68);
    *(_DWORD *)(a1 + 288) = bswap32(v26);
    *(_DWORD *)(a1 + 68) = v23 | 0x8000;
  }
  EVP_MD_CTX_free(v22);
  return 256;
}
