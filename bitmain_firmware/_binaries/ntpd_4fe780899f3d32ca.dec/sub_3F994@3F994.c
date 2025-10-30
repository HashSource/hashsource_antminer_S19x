int __fastcall sub_3F994(int a1, int a2)
{
  unsigned int v3; // r12
  unsigned int cp; // [sp+1Ch] [bp-70h] BYREF
  unsigned int v6; // [sp+20h] [bp-6Ch] BYREF
  char buf[48]; // [sp+24h] [bp-68h] BYREF
  char v8[48]; // [sp+54h] [bp-38h] BYREF

  if ( a2 )
  {
    inet_ntop(10, (const void *)(a1 + 20), buf, 0x2Eu);
    inet_ntop(10, (const void *)(a1 + 36), v8, 0x2Eu);
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 24);
    cp = bswap32(*(_DWORD *)(a1 + 20));
    v6 = bswap32(v3);
    inet_ntop(2, &cp, buf, 0x2Eu);
    inet_ntop(2, &v6, v8, 0x2Eu);
  }
  return sub_64D28(
           "restrict node at %p: %s/%s count %d, rflags %05x, mflags %05x, ippeerlimit %d, expire %lu, next %p\n",
           (const void *)a1,
           buf,
           v8,
           *(_DWORD *)(a1 + 4),
           *(unsigned __int16 *)(a1 + 8),
           *(unsigned __int16 *)(a1 + 10),
           *(__int16 *)(a1 + 12),
           *(_DWORD *)(a1 + 16),
           *(const void **)a1);
}
