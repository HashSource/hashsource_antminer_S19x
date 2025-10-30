int __fastcall sub_1400C(int a1, int fd, unsigned __int16 *a3)
{
  int v5; // r12
  const char *v7; // r0
  int optval; // [sp+8h] [bp-8h] BYREF

  v5 = *a3;
  optval = 1;
  if ( v5 == 2 && setsockopt(fd, 1, 6, &optval, 4u) )
  {
    v7 = (const char *)sub_6C2E8(a3);
    sub_64E00(3, "setsockopt(SO_BROADCAST) enable failure on address %s: %m", v7);
  }
  *(_DWORD *)(a1 + 144) |= 0x400u;
  return 1;
}
