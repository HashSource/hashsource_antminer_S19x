int __fastcall sub_708BC(int a1)
{
  int v2; // r6
  int v3; // r6
  unsigned __int16 *v5; // r3
  int v6; // r7
  size_t v7; // r9
  size_t v8; // r2
  int v9; // r3
  int v10; // r2
  int v11; // r2
  int v12; // r2
  int v13; // r3
  char *v14; // r7
  int v15; // r0
  const char *v16; // r10
  _BYTE *v17; // r5
  unsigned __int8 v18; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r3
  bool v22; // cc
  int v23; // [sp+24h] [bp-60h] BYREF
  int v24; // [sp+28h] [bp-5Ch] BYREF
  char v25; // [sp+2Ch] [bp-58h] BYREF
  int v26; // [sp+30h] [bp-54h] BYREF
  _BYTE v27[16]; // [sp+34h] [bp-50h] BYREF
  char v28; // [sp+44h] [bp-40h] BYREF
  char v29[32]; // [sp+58h] [bp-2Ch] BYREF
  char v30; // [sp+78h] [bp-Ch] BYREF

  if ( !a1 || *(_DWORD *)a1 != 1229343047 )
    sub_6FC54(
      (int)"./../lib/isc/unix/ifiter_getifaddrs.c",
      145,
      0,
      "(((iter) != ((void *)0)) && (((const isc__magic_t *)(iter))->magic == ((('I') << 24 | ('F') << 16 | ('I') << 8 | ('G')))))");
  v2 = *(_DWORD *)(a1 + 20);
  if ( v2 )
  {
    if ( !*(_DWORD *)(v2 + 4) )
      sub_6FC54((int)"./../lib/isc/unix/ifiter_getifaddrs.c", 163, 2, "ifa->ifa_name != ((void *)0)");
    if ( (*(_DWORD *)(v2 + 8) & 0x40) != 0 )
    {
      v5 = *(unsigned __int16 **)(v2 + 12);
      if ( v5 )
      {
        v6 = *v5;
        if ( (v6 & 0xFFFFFFF7) == 2 )
        {
          if ( v6 == 10 )
            dword_108264 = 1;
          memset((void *)(a1 + 24), 0, 0x8Cu);
          v7 = strlen(*(const char **)(v2 + 4));
          memset((void *)(a1 + 24), 0, 0x20u);
          if ( v7 >= 0x1F )
            v8 = 31;
          else
            v8 = v7;
          memcpy((void *)(a1 + 24), *(const void **)(v2 + 4), v8);
          v9 = *(_DWORD *)(v2 + 8);
          *(_DWORD *)(a1 + 156) = 0;
          *(_DWORD *)(a1 + 56) = v6;
          if ( (v9 & 1) != 0 )
            *(_DWORD *)(a1 + 156) = 1;
          if ( (v9 & 0x10) != 0 )
            *(_DWORD *)(a1 + 156) |= 2u;
          if ( (v9 & 8) != 0 )
            *(_DWORD *)(a1 + 156) |= 4u;
          if ( (v9 & 2) != 0 )
            *(_DWORD *)(a1 + 156) |= 8u;
          v10 = *(_DWORD *)(v2 + 12);
          if ( (v9 & 0x1000) != 0 )
            *(_DWORD *)(a1 + 156) |= 0x10u;
          sub_70744(v6, (_DWORD *)(a1 + 60), v10, *(_DWORD *)(v2 + 4));
          v11 = *(_DWORD *)(v2 + 16);
          if ( v11 )
            sub_70744(v6, (_DWORD *)(a1 + 84), v11, *(_DWORD *)(v2 + 4));
          v12 = *(_DWORD *)(v2 + 20);
          if ( !v12 )
            goto LABEL_31;
          v13 = *(_DWORD *)(a1 + 156);
          if ( (v13 & 2) != 0 )
          {
            sub_70744(v6, (_DWORD *)(a1 + 132), v12, *(_DWORD *)(v2 + 4));
            v12 = *(_DWORD *)(v2 + 20);
            if ( !v12 )
            {
LABEL_31:
              v3 = 0;
              *(_DWORD *)(a1 + 160) = if_nametoindex(a1 + 24);
              return v3;
            }
            v13 = *(_DWORD *)(a1 + 156);
          }
          if ( (v13 & 8) != 0 )
            sub_70744(v6, (_DWORD *)(a1 + 108), v12, *(_DWORD *)(v2 + 4));
          goto LABEL_31;
        }
      }
    }
    return 36;
  }
  v3 = *(_DWORD *)(a1 + 236);
  if ( v3 )
    return v3;
  if ( !*(_DWORD *)(a1 + 168) )
  {
    v3 = 25;
    sub_74350(isc_lctx, &off_B8DC4, &off_B8D9C, -4, "/proc/net/if_inet6:iter->proc == NULL");
    return v3;
  }
  v14 = v29;
  v15 = sscanf((const char *)(a1 + 172), "%32[a-f0-9] %x %x %x %x %16s\n", v29, &v23, &v24, &v25, &v26, &v28);
  if ( v15 != 6 )
  {
    v3 = 25;
    sub_74350(isc_lctx, &off_B8DC4, &off_B8D9C, -4, "/proc/net/if_inet6:sscanf() -> %d (expected 6)", v15);
    return v3;
  }
  if ( strlen(v29) != 32 )
  {
    v3 = 25;
    sub_74350(isc_lctx, &off_B8DC4, &off_B8D9C, -4, "/proc/net/if_inet6:strlen(%s) != 32", v29);
    return v3;
  }
  if ( (v26 & 0x40) != 0 )
    return 36;
  v16 = v27;
  v17 = v27;
  do
  {
    v18 = (unsigned __int8)strchr("0123456789abcdef", (unsigned __int8)*v14);
    v19 = (unsigned __int8)v14[1];
    v14 += 2;
    *v17++ = ((unsigned __int8)strchr("0123456789abcdef", v19) - (unsigned __int8)"0123456789abcdef")
           | (16 * (v18 - (unsigned __int8)"0123456789abcdef"));
  }
  while ( v14 != &v30 );
  *(_DWORD *)(a1 + 56) = 10;
  *(_DWORD *)(a1 + 156) = 1;
  sub_75BB8(a1 + 60, v27);
  *(_DWORD *)(a1 + 160) = v23;
  if ( sub_75FA8(a1 + 60) )
    sub_75C6C(a1 + 60);
  v21 = v24;
  do
  {
    v22 = v21 <= 8;
    ++v16;
    if ( v21 > 8 )
      *((_BYTE *)v16 - 1) = -1;
    else
      LOBYTE(v20) = 8 - v21;
    if ( v21 > 8 )
    {
      v21 -= 8;
    }
    else
    {
      v20 = 255 << v20;
      *((_BYTE *)v16 - 1) = v20;
    }
    if ( v22 )
      v21 = 0;
  }
  while ( v16 != &v28 );
  v24 = v21;
  sub_75BB8(a1 + 84, v27);
  strncpy((char *)(a1 + 24), v16, 0x20u);
  return v3;
}
