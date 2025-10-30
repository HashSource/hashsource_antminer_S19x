int __fastcall sub_6F874(int a1)
{
  int v2; // r5
  unsigned __int16 *v3; // r3
  int v4; // r6
  size_t v5; // r9
  size_t v6; // r2
  int v7; // r3
  bool v8; // zf
  int v9; // r2
  int v10; // r2
  int v11; // r2
  int v12; // r3
  int v13; // r5
  int v15; // r0
  char *v16; // r10
  char *v17; // r6
  char *v18; // r0
  int v19; // t1
  int v20; // r2
  char *v21; // r3
  char v22; // r1
  int v23; // [sp+1Ch] [bp-60h] BYREF
  int v24; // [sp+20h] [bp-5Ch] BYREF
  char v25; // [sp+24h] [bp-58h] BYREF
  char v26; // [sp+28h] [bp-54h] BYREF
  char v27; // [sp+2Bh] [bp-51h] BYREF
  _BYTE v28[16]; // [sp+2Ch] [bp-50h] BYREF
  char v29[20]; // [sp+3Ch] [bp-40h] BYREF
  char v30; // [sp+50h] [bp-2Ch] BYREF
  char v31; // [sp+51h] [bp-2Bh] BYREF
  char v32; // [sp+71h] [bp-Bh] BYREF

  if ( !a1 || *(_DWORD *)a1 != 1229343047 )
    sub_6ECC0(
      (int)"./../lib/isc/unix/ifiter_getifaddrs.c",
      145,
      0,
      "(((iter) != ((void *)0)) && (((const isc__magic_t *)(iter))->magic == ((('I') << 24 | ('F') << 16 | ('I') << 8 | ('G')))))");
  v2 = *(_DWORD *)(a1 + 20);
  if ( v2 )
  {
    if ( !*(_DWORD *)(v2 + 4) )
      sub_6ECC0((int)"./../lib/isc/unix/ifiter_getifaddrs.c", 163, 2, "ifa->ifa_name != ((void *)0)");
    if ( (*(_DWORD *)(v2 + 8) & 0x40) != 0 )
    {
      v3 = *(unsigned __int16 **)(v2 + 12);
      if ( v3 )
      {
        v4 = *v3;
        if ( (v4 & 0xFFF7) == 2 )
        {
          if ( v4 == 10 )
            dword_107240 = 1;
          memset((void *)(a1 + 24), 0, 0x8Cu);
          v5 = strlen(*(const char **)(v2 + 4));
          memset((void *)(a1 + 24), 0, 0x20u);
          if ( v5 >= 0x1F )
            v6 = 31;
          else
            v6 = v5;
          memcpy((void *)(a1 + 24), *(const void **)(v2 + 4), v6);
          v7 = *(_DWORD *)(v2 + 8);
          *(_DWORD *)(a1 + 156) = 0;
          *(_DWORD *)(a1 + 56) = v4;
          if ( (v7 & 1) != 0 )
            *(_DWORD *)(a1 + 156) = 1;
          if ( (v7 & 0x10) != 0 )
            *(_DWORD *)(a1 + 156) |= 2u;
          if ( (v7 & 8) != 0 )
            *(_DWORD *)(a1 + 156) |= 4u;
          if ( (v7 & 2) != 0 )
            *(_DWORD *)(a1 + 156) |= 8u;
          v8 = (v7 & 0x1000) == 0;
          if ( (v7 & 0x1000) != 0 )
            v7 = *(_DWORD *)(a1 + 156);
          v9 = *(_DWORD *)(v2 + 12);
          if ( !v8 )
            *(_DWORD *)(a1 + 156) = v7 | 0x10;
          sub_6F718(v4, a1 + 60, v9, *(_DWORD *)(v2 + 4));
          v10 = *(_DWORD *)(v2 + 16);
          if ( v10 )
            sub_6F718(v4, a1 + 84, v10, *(_DWORD *)(v2 + 4));
          v11 = *(_DWORD *)(v2 + 20);
          if ( !v11 )
            goto LABEL_31;
          v12 = *(_DWORD *)(a1 + 156);
          if ( (v12 & 2) != 0 )
          {
            sub_6F718(v4, a1 + 132, v11, *(_DWORD *)(v2 + 4));
            v11 = *(_DWORD *)(v2 + 20);
            if ( !v11 )
            {
LABEL_31:
              v13 = 0;
              *(_DWORD *)(a1 + 160) = if_nametoindex(a1 + 24);
              return v13;
            }
            v12 = *(_DWORD *)(a1 + 156);
          }
          if ( (v12 & 8) != 0 )
            sub_6F718(v4, a1 + 108, v11, *(_DWORD *)(v2 + 4));
          goto LABEL_31;
        }
      }
    }
    return 36;
  }
  v13 = *(_DWORD *)(a1 + 236);
  if ( v13 )
    return v13;
  if ( !*(_DWORD *)(a1 + 168) )
  {
    v13 = 25;
    sub_73300(isc_lctx, &off_B7DC4, &off_B7D9C, -4, "/proc/net/if_inet6:iter->proc == NULL");
    return v13;
  }
  v15 = sscanf((const char *)(a1 + 172), "%32[a-f0-9] %x %x %x %x %16s\n", &v30, &v23, &v24, &v25, &v26, v29);
  if ( v15 != 6 )
  {
    v13 = 25;
    sub_73300(isc_lctx, &off_B7DC4, &off_B7D9C, -4, "/proc/net/if_inet6:sscanf() -> %d (expected 6)", v15);
    return v13;
  }
  if ( strlen(&v30) != 32 )
  {
    v13 = 25;
    sub_73300(isc_lctx, &off_B7DC4, &off_B7D9C, -4, "/proc/net/if_inet6:strlen(%s) != 32", &v30);
    return v13;
  }
  if ( (v26 & 0x40) != 0 )
    return 36;
  v16 = &v27;
  v17 = &v31;
  do
  {
    v18 = strchr("0123456789abcdef", (unsigned __int8)*(v17 - 1));
    v19 = (unsigned __int8)*v17;
    v17 += 2;
    *++v16 = (strchr("0123456789abcdef", v19) - "0123456789abcdef") | (16 * (v18 - "0123456789abcdef"));
  }
  while ( &v32 != v17 );
  *(_DWORD *)(a1 + 56) = 10;
  *(_DWORD *)(a1 + 156) = 1;
  sub_74B70(a1 + 60, v28);
  *(_DWORD *)(a1 + 160) = v23;
  if ( sub_74F64(a1 + 60) )
    sub_74C28(a1 + 60);
  v20 = v24;
  v21 = v28;
  while ( v20 > 8 )
  {
    v20 -= 8;
    *v21++ = -1;
    if ( v29 == v21 )
      goto LABEL_49;
  }
  do
  {
    v22 = 8 - v20;
    v20 = 0;
    *v21++ = 255 << v22;
  }
  while ( v29 != v21 );
LABEL_49:
  v24 = v20;
  sub_74B70(a1 + 84, v28);
  strncpy((char *)(a1 + 24), v29, 0x20u);
  return v13;
}
