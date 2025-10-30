int __fastcall sub_27454(unsigned int a1, int a2)
{
  unsigned int v3; // r7
  unsigned int v4; // r9
  int v5; // r3
  unsigned int v6; // r6
  unsigned int v7; // r2
  unsigned int v8; // r3
  int v9; // r5
  _DWORD *v10; // r11
  int v11; // r8
  unsigned int v12; // r4
  unsigned int v13; // r3
  _BOOL4 v14; // r3
  _DWORD *v15; // r3
  unsigned int v16; // r1
  int v17; // r0
  int v18; // r1
  int v19; // r4
  int v20; // r2
  int v22; // [sp+0h] [bp-34h]
  unsigned int v23; // [sp+10h] [bp-24h]
  unsigned int v24; // [sp+18h] [bp-1Ch]
  unsigned int v25[2]; // [sp+24h] [bp-10h] BYREF

  if ( !a2 )
    return 271;
  v25[1] = 0;
  v3 = a1;
  v25[0] = 0;
  if ( sys_leap == 3 )
  {
    v24 = 0;
    v4 = 0;
    v5 = *(_DWORD *)(a1 + 240);
    if ( v5 )
      goto LABEL_6;
LABEL_32:
    a1 = sub_63C68(v5, 100, 4);
    *(_DWORD *)(v3 + 240) = a1;
    goto LABEL_6;
  }
  a1 = sub_5F724(v25);
  v4 = v25[0];
  v24 = bswap32(v25[0]);
  v5 = *(_DWORD *)(v3 + 240);
  if ( !v5 )
    goto LABEL_32;
  do
  {
    do
    {
LABEL_6:
      a1 = sub_68AE4(a1, a2);
      v6 = a1;
    }
    while ( a1 < 0x10000 );
    a1 = sub_6204C();
  }
  while ( a1 );
  v7 = *(unsigned __int8 *)(v3 + 94);
  v8 = *(unsigned __int8 *)(v3 + 64);
  v9 = 0;
  v10 = (_DWORD *)(a2 + 24);
  if ( v7 >= v8 )
    v11 = 1 << v8;
  else
    v11 = 1 << v7;
  v12 = 1 << sys_automax;
  if ( 1 << sys_automax >= (unsigned int)(100 * v11) )
    v12 = 100 * v11;
  if ( *(_BYTE *)(v3 + 63) == 5 )
    v13 = 0;
  else
    v13 = *(_DWORD *)(v3 + 168);
  v23 = v13;
  do
  {
    *(_DWORD *)(*(_DWORD *)(v3 + 240) + 4 * v9) = v6;
    v22 = v12 + v11;
    v12 = v12 + v11 - 2 * v11;
    *(_DWORD *)(v3 + 244) = v9;
    v6 = sub_272C8(v10, v3 + 16, v6, v23, v22);
    if ( sub_61FD4() )
      break;
    v14 = v6 <= 0xFFFF;
    if ( !v4 )
      v14 = 1;
    if ( v14 | (v12 >> 31) )
      break;
    ++v9;
  }
  while ( v9 != 100 );
  v15 = *(_DWORD **)(v3 + 284);
  if ( !v15 )
  {
    v15 = (_DWORD *)sub_63BA4(0, 8, 0, 0);
    *(_DWORD *)(v3 + 284) = v15;
  }
  v16 = *(_DWORD *)(v3 + 244);
  *v15 = bswap32(v6);
  v17 = 0x8000000;
  v15[1] = bswap32(v16);
  v18 = 0;
  *(_DWORD *)(v3 + 272) = v24;
  *(_DWORD *)(v3 + 280) = 0x8000000;
  *(_DWORD *)(v3 + 288) = 0;
  *(_DWORD *)(v3 + 276) = hostval;
  if ( !v4 )
    return 256;
  if ( !*(_DWORD *)(v3 + 292) )
  {
    v17 = sub_63BA4(*(_DWORD *)(v3 + 292), dword_B98E4, *(_DWORD *)(v3 + 292), 0);
    *(_DWORD *)(v3 + 292) = v17;
  }
  v19 = EVP_MD_CTX_new(v17, v18);
  EVP_DigestInit(v19, dword_B98E8);
  EVP_DigestUpdate(v19, v3 + 272, 12);
  EVP_DigestUpdate(v19, *(_DWORD *)(v3 + 284), 8);
  if ( EVP_SignFinal(v19, *(_DWORD *)(v3 + 292), v25, dword_B98E0) )
  {
    if ( v25[0] > dword_B98E4 )
      sub_6ECC0("ntp_crypto.c", 397, 2, "len <= sign_siglen");
    v20 = *(_DWORD *)(v3 + 68);
    *(_DWORD *)(v3 + 288) = bswap32(v25[0]);
    *(_DWORD *)(v3 + 68) = v20 | 0x8000;
  }
  EVP_MD_CTX_free(v19);
  return 256;
}
