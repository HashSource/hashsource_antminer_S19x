int __fastcall sub_71678(int a1)
{
  int v2; // r7
  size_t v3; // r5
  unsigned int v4; // r3
  size_t v5; // r3
  size_t v6; // r8
  _BYTE *v7; // r0
  _BYTE *v8; // r6
  int v9; // r2
  char *v10; // r3
  char v11; // t1
  unsigned __int8 *v12; // r5
  char *v13; // r6
  unsigned __int8 *v14; // lr
  int v15; // r12
  int v16; // t1
  int v17; // r3
  int v18; // t1
  unsigned int v19; // r1
  size_t v20; // r2
  _DWORD *v21; // r3
  int v22; // r6
  int v23; // r5
  int v24; // r0
  int v25; // r6
  int v26; // r5
  int v27; // r0
  int v28; // r1
  int v29; // r0
  int v30; // r2
  int *v31; // r5
  int v32; // r0
  int v33; // r6
  int v34; // r2
  int v35; // r3
  int v36; // r2
  _BOOL4 v37; // r0
  int v38; // r6
  int result; // r0
  int v40; // r4
  int v41; // r5
  void *ptr; // [sp+8h] [bp-34h]
  size_t nmemb; // [sp+Ch] [bp-30h]
  int v44; // [sp+14h] [bp-28h] BYREF
  int s[9]; // [sp+18h] [bp-24h] BYREF

  memset(s, 0, 0x20u);
  v2 = dword_65E3EC;
  v3 = *(_DWORD *)(a1 + 12);
  if ( dword_65E3EC == dword_65E3F0 )
    v2 = dword_65E3F4;
  v4 = v3 & 0xFFFFFFC0;
  if ( (*(_DWORD *)(a1 + 12) & 0x3Fu) <= 0x37 )
    v5 = v4 + 64;
  else
    v5 = v4 + 128;
  nmemb = v5;
  v6 = v5;
  v7 = calloc(v5, 1u);
  v8 = v7;
  if ( !v7 )
    return -4;
  memcpy(v7, *(const void **)(a1 + 8), v3);
  v8[v3] = 0x80;
  ptr = v8;
  *(_DWORD *)&v8[v6 - 4] = bswap32(8 * v3);
  *(_DWORD *)&v8[4 * ((v6 - 8) >> 2)] = 0;
  if ( v6 )
  {
    v9 = v2 - 1;
    v10 = v8;
    do
    {
      v11 = *v10++;
      *(_BYTE *)++v9 = v11;
    }
    while ( v10 != &v8[nmemb] );
    v12 = (unsigned __int8 *)v2;
    v13 = v8 - 1;
    do
    {
      v14 = &v12[-v2];
      v16 = (unsigned __int8)*++v13;
      v15 = v16;
      v18 = *v12++;
      v17 = v18;
      if ( v18 != v15 )
        printf(
          "%s: coinbase_padding_in_ddr[%d] = 0x%x, but *(coinbase_padding + %d) = 0x%x",
          "dhash_send_job",
          v14,
          v17,
          v14,
          v15);
    }
    while ( v12 != (unsigned __int8 *)(v2 + nmemb) );
  }
  if ( *(_DWORD *)(a1 + 20) )
  {
    v19 = 0;
    v20 = v2 + nmemb;
    do
    {
      v20 += 32;
      v21 = (_DWORD *)(*(_DWORD *)(a1 + 16) + 32 * v19++);
      v22 = v21[1];
      v23 = v21[2];
      v24 = v21[3];
      *(_DWORD *)(v20 - 32) = *v21;
      *(_DWORD *)(v20 - 28) = v22;
      *(_DWORD *)(v20 - 24) = v23;
      *(_DWORD *)(v20 - 20) = v24;
      v25 = v21[5];
      v26 = v21[6];
      v27 = v21[7];
      *(_DWORD *)(v20 - 16) = v21[4];
      *(_DWORD *)(v20 - 12) = v25;
      *(_DWORD *)(v20 - 8) = v26;
      *(_DWORD *)(v20 - 4) = v27;
    }
    while ( *(_DWORD *)(a1 + 20) > v19 );
  }
  sub_70C48();
  if ( dword_65E3EC == v2 )
    v28 = dword_65E3F8 + 0x200000;
  else
    v28 = dword_65E3F8 + 2162688;
  sub_6E0BC(41, v28);
  sub_6E060(41, &v44);
  sub_6E0BC(44, *(_DWORD *)(a1 + 32));
  sub_6E060(44, &v44);
  v29 = *(_DWORD *)(a1 + 36);
  v30 = *(_DWORD *)(a1 + 40);
  if ( *(_DWORD *)a1 )
    sub_713C0(v29, 1, v30);
  else
    sub_713C0(v29, *(_DWORD *)(a1 + 4), v30);
  v31 = &v44;
  memset(s, 0, 0x20u);
  v32 = *(_DWORD *)(a1 + 44);
  v33 = v32 + 32;
  do
  {
    v34 = *(unsigned __int8 *)(v32 + 2);
    v32 += 4;
    v31[1] = *(unsigned __int8 *)(v32 - 4)
           | (v34 << 16)
           | (*(unsigned __int8 *)(v32 - 1) << 24)
           | (*(unsigned __int8 *)(v32 - 3) << 8);
    ++v31;
  }
  while ( v32 != v33 );
  sub_71520((int)s);
  sub_6E0BC(47, *(_DWORD *)(a1 + 24));
  sub_6E060(47, &v44);
  sub_6E0BC(48, *(_DWORD *)(a1 + 28));
  sub_6E060(48, &v44);
  sub_6E0BC(36, (unsigned __int8)(nmemb >> 6) | (*(_DWORD *)(a1 + 52) << 16) | (*(unsigned __int8 *)(a1 + 56) << 8));
  sub_6E060(36, &v44);
  v35 = *(_DWORD *)(a1 + 68);
  s[0] = *(_DWORD *)(a1 + 64);
  s[1] = v35;
  sub_715D8(s);
  sub_71604(*(_DWORD *)(a1 + 20));
  sub_6E0BC(42, (unsigned __int16)(nmemb + 32 * *(_WORD *)(a1 + 20)));
  sub_6E060(42, &v44);
  usleep(0x3E8u);
  sub_711D0(*(char **)(a1 + 72));
  v36 = *(_DWORD *)(a1 + 76);
  v37 = *(_DWORD *)a1 == 0;
  if ( *(_DWORD *)(a1 + 4) <= 1u )
    v37 = 0;
  if ( v37 )
  {
    v38 = *(_DWORD *)(a1 + 76);
    v40 = (*(_DWORD *)(a1 + 4) & 0xF) << 8;
    v41 = v36;
    if ( !v36 )
    {
LABEL_34:
      v44 = 0;
      sub_6E060(35, &v44);
      sub_6E0BC(35, v44 & 0xFFFF709F | 0x8060 | v41 | v40 | v38);
      goto LABEL_31;
    }
    v38 = 0;
LABEL_37:
    v41 = 128;
    sub_71650();
    goto LABEL_34;
  }
  if ( *(_DWORD *)a1 )
    v38 = 0x4000;
  else
    v38 = 0;
  if ( v36 )
  {
    v40 = 256;
    goto LABEL_37;
  }
  v44 = 0;
  sub_6E060(35, &v44);
  sub_6E0BC(35, v44 & 0xFFFF709F | 0x8160 | v38);
LABEL_31:
  free(ptr);
  result = 0;
  dword_65E3F0 = v2;
  return result;
}
