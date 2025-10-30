void __fastcall sub_169FC(_DWORD *s2)
{
  int v2; // r6
  int v3; // r3
  int v4; // r3
  _DWORD *v5; // r4
  int v6; // lr
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r3
  int v12; // r0
  int *v13; // r8
  int *i; // r4
  _BOOL4 v15; // r3
  int v16; // r12
  int v17; // r0
  int v18; // r6
  int v19; // r0
  unsigned int v20; // r4
  const char *v21; // r0
  int v22; // r6
  int v23; // r0
  int v24; // r4
  const char *v25; // r0
  const char *v26; // r0
  unsigned int v27; // [sp+18h] [bp-2Ch]
  const char *v28; // [sp+18h] [bp-2Ch]
  const char *v29; // [sp+1Ch] [bp-28h]
  int v30; // [sp+20h] [bp-24h] BYREF
  int v31; // [sp+24h] [bp-20h]
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
    v26 = (const char *)sub_6D2C0(s2);
    sub_65D40(3, "invalid multicast address %s", v26);
    return;
  }
LABEL_8:
  while ( 1 )
  {
    v5 = (_DWORD *)sub_15414(s2);
    if ( !v5 )
      break;
    while ( 1 )
    {
      v30 = 0;
      v31 = 0;
      if ( !sub_13FF0(s2) )
        break;
      if ( v2 == 2 )
      {
        v16 = v5[7];
        v17 = v5[3];
        v30 = s2[1];
        v31 = v16;
        if ( setsockopt(v17, 0, 36, &v30, 8u) )
        {
          v18 = v5[3];
          v19 = sub_6D2C0(v5 + 6);
          v27 = bswap32(v5[7]);
          v20 = bswap32(s2[1]);
          v29 = (const char *)v19;
          v21 = (const char *)sub_6D2C0(s2);
          sub_65D40(
            3,
            "setsockopt IP_DROP_MEMBERSHIP failed: %m on socket %d, addr %s for %x / %x (%s)",
            v18,
            v29,
            v20,
            v27,
            v21);
          v2 = *(unsigned __int16 *)s2;
          goto LABEL_8;
        }
      }
      else if ( v2 == 10 )
      {
        v6 = v5[3];
        v7 = s2[2];
        v8 = s2[3];
        v9 = s2[4];
        v10 = s2[5];
        optval[4] = v5[44];
        optval[0] = v7;
        optval[1] = v8;
        optval[2] = v9;
        optval[3] = v10;
        if ( setsockopt(v6, 41, 21, optval, 0x14u) )
        {
          v22 = v5[3];
          v23 = sub_6D2C0(v5 + 6);
          v24 = v5[44];
          v28 = (const char *)v23;
          v25 = (const char *)sub_6D2C0(s2);
          sub_65D40(3, "setsockopt IPV6_LEAVE_GROUP failure: %m on socket %d, addr %s for %d (%s)", v22, v28, v24, v25);
          v2 = *(unsigned __int16 *)s2;
          goto LABEL_8;
        }
      }
      v11 = v5[39] - 1;
      v5[39] = v11;
      if ( !v11 )
        v5[36] &= ~0x40u;
      v12 = sub_15414(s2);
      v2 = *(unsigned __int16 *)s2;
      v5 = (_DWORD *)v12;
      if ( !v12 )
        goto LABEL_16;
    }
  }
LABEL_16:
  v13 = &remoteaddr_list;
  for ( i = (int *)remoteaddr_list; ; i = (int *)*i )
  {
    if ( *((unsigned __int16 *)i + 2) != v2 )
      goto LABEL_17;
    if ( v2 == 2 )
    {
      v15 = s2[1] != i[2];
    }
    else
    {
      if ( memcmp(s2 + 2, i + 3, 0x10u) )
        goto LABEL_17;
      v15 = s2[6] != i[7];
    }
    if ( !v15 )
      break;
LABEL_17:
    if ( !*i )
      return;
    v13 = i;
  }
  *v13 = *i;
  free(i);
}
