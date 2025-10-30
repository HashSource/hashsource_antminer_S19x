char *__fastcall sub_68C64(int a1, int a2)
{
  int v2; // r5
  int v3; // r4
  int v5; // r6
  int v6; // r7
  const char *v7; // r0
  char *v8; // r0
  char *v9; // r6
  char *v10; // r7
  char *v11; // r11
  char *v12; // r4
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r8
  char *v17; // r12
  int v18; // r1
  int v19; // r2
  int v20; // r3
  size_t v21; // r2
  int v22; // r3
  const char *v23; // r5
  size_t v24; // r2
  char *v25; // r0
  char *v26; // r3
  size_t v28; // [sp+4h] [bp-10h]

  v2 = a1;
  if ( !a1 )
    return (char *)sub_63BA4(0, 0, 0, 1);
  v3 = 0;
  v5 = a1;
  v6 = 0;
  while ( 1 )
  {
    ++v6;
    v7 = *(const char **)(v5 + 24);
    if ( a2 )
      break;
    v5 = *(_DWORD *)(v5 + 28);
    if ( v7 )
      v3 += strlen(v7) + 1;
    if ( !v5 )
      goto LABEL_6;
  }
  if ( v7 )
    v3 += 1 + strlen(v7);
LABEL_6:
  v28 = v3 + 60 * v6;
  v8 = (char *)sub_63BA4(0, v28, 0, 1);
  v9 = &v8[32 * v6];
  v10 = &v9[28 * v6];
  v11 = v8;
  v12 = v8 + 32;
  do
  {
    v13 = *(_DWORD *)(v2 + 4);
    v14 = *(_DWORD *)(v2 + 8);
    v15 = *(_DWORD *)(v2 + 12);
    if ( a2 )
      v16 = 0;
    else
      v16 = *(_DWORD *)(v2 + 28);
    *((_DWORD *)v12 - 8) = *(_DWORD *)v2;
    *((_DWORD *)v12 - 7) = v13;
    *((_DWORD *)v12 - 6) = v14;
    *((_DWORD *)v12 - 5) = v15;
    v17 = v12 - 16;
    v18 = *(_DWORD *)(v2 + 20);
    v19 = *(_DWORD *)(v2 + 24);
    v20 = *(_DWORD *)(v2 + 28);
    *(_DWORD *)v17 = *(_DWORD *)(v2 + 16);
    *((_DWORD *)v17 + 1) = v18;
    *((_DWORD *)v17 + 2) = v19;
    *((_DWORD *)v17 + 3) = v20;
    v21 = *(_DWORD *)(v2 + 16);
    if ( v21 > 0x1C )
      sub_6ECC0("ntp_rfc2553.c", 207, 2, "ai_src->ai_addrlen <= sizeof(sockaddr_u)");
    memcpy(v9, *(const void **)(v2 + 20), v21);
    v22 = *(_DWORD *)(v2 + 24);
    *((_DWORD *)v12 - 3) = v9;
    v9 += 28;
    if ( v22 )
    {
      *((_DWORD *)v12 - 2) = v10;
      v23 = *(const char **)(v2 + 24);
      v24 = strlen(v23) + 1;
      v25 = v10;
      v10 += v24;
      memcpy(v25, v23, v24);
    }
    if ( *((_DWORD *)v12 - 1) )
    {
      if ( a2 )
        v26 = 0;
      else
        v26 = v12;
      *((_DWORD *)v12 - 1) = v26;
    }
    v12 += 32;
    v2 = v16;
  }
  while ( v16 );
  if ( v10 != &v11[v28] )
    sub_6ECC0("ntp_rfc2553.c", 225, 1, "pcanon == ((char *)dst + octets)");
  return v11;
}
