void __fastcall sub_167AC(_DWORD *s2)
{
  int v2; // r6
  int v3; // r3
  int v4; // r3
  _DWORD *v5; // r4
  int v6; // r6
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int *v11; // r9
  int i; // r4
  _BOOL4 v13; // r3
  _DWORD *v14; // r0
  int v15; // r12
  int v16; // r0
  unsigned int v17; // r6
  unsigned int v18; // r4
  const char *v19; // r0
  const char *v20; // r0
  int v21; // r6
  int v22; // r0
  int v23; // r4
  int v24; // r0
  const char *v25; // [sp+18h] [bp-2Ch]
  int v26; // [sp+18h] [bp-2Ch]
  int v27; // [sp+1Ch] [bp-28h]
  int v28; // [sp+20h] [bp-24h] BYREF
  int v29; // [sp+24h] [bp-20h]
  _DWORD optval[5]; // [sp+28h] [bp-1Ch] BYREF

  v2 = *(unsigned __int16 *)s2;
  if ( v2 == 2 )
    v3 = s2[1];
  else
    v3 = *((unsigned __int8 *)s2 + 8);
  if ( v2 == 2 )
    v4 = (v3 & 0xF0) - 224;
  else
    v4 = v3 - 255;
  if ( v4 )
  {
    v20 = (const char *)sub_6C2E8(s2);
    sub_64E00(3, "invalid multicast address %s", v20);
    return;
  }
LABEL_8:
  while ( 1 )
  {
    v5 = (_DWORD *)sub_15184(s2);
    if ( !v5 )
      break;
    while ( 1 )
    {
      v28 = 0;
      v29 = 0;
      if ( !sub_13DC8(s2) )
        break;
      if ( v2 == 2 )
      {
        v15 = v5[7];
        v16 = v5[3];
        v28 = s2[1];
        v29 = v15;
        if ( setsockopt(v16, 0, 36, &v28, 8u) )
        {
          v27 = v5[3];
          v25 = (const char *)sub_6C2E8(v5 + 6);
          v17 = bswap32(v5[7]);
          v18 = bswap32(s2[1]);
          v19 = (const char *)sub_6C2E8(s2);
          sub_64E00(
            3,
            "setsockopt IP_DROP_MEMBERSHIP failed: %m on socket %d, addr %s for %x / %x (%s)",
            v27,
            v25,
            v18,
            v17,
            v19);
          v2 = *(unsigned __int16 *)s2;
          goto LABEL_8;
        }
      }
      else if ( v2 == 10 )
      {
        v6 = v5[3];
        v7 = s2[3];
        v8 = s2[4];
        v9 = s2[5];
        optval[0] = s2[2];
        optval[1] = v7;
        optval[2] = v8;
        optval[3] = v9;
        optval[4] = v5[44];
        if ( setsockopt(v6, 41, 21, optval, 0x14u) )
        {
          v21 = v5[3];
          v22 = sub_6C2E8(v5 + 6);
          v23 = v5[44];
          v26 = v22;
          v24 = sub_6C2E8(s2);
          sub_64E00(3, "setsockopt IPV6_LEAVE_GROUP failure: %m on socket %d, addr %s for %d (%s)", v21, v26, v23, v24);
          v2 = *(unsigned __int16 *)s2;
          goto LABEL_8;
        }
      }
      if ( v5[39]-- == 1 )
        v5[36] &= ~0x40u;
      v5 = (_DWORD *)sub_15184(s2);
      v2 = *(unsigned __int16 *)s2;
      if ( !v5 )
        goto LABEL_16;
    }
  }
LABEL_16:
  v11 = &remoteaddr_list;
  for ( i = remoteaddr_list; ; i = *(_DWORD *)i )
  {
    if ( *(unsigned __int16 *)(i + 4) != v2 )
      goto LABEL_17;
    if ( v2 == 2 )
    {
      v13 = s2[1] != *(_DWORD *)(i + 8);
    }
    else
    {
      if ( memcmp(s2 + 2, (const void *)(i + 12), 0x10u) )
        goto LABEL_17;
      v13 = s2[6] != *(_DWORD *)(i + 28);
    }
    if ( !v13 )
      break;
LABEL_17:
    if ( !*(_DWORD *)i )
      return;
    v11 = (int *)i;
  }
  v14 = (_DWORD *)*v11;
  *v11 = *(_DWORD *)*v11;
  free(v14);
}
