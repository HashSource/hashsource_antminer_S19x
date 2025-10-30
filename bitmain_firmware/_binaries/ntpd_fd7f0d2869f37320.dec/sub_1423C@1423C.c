int __fastcall sub_1423C(int a1, int fd, unsigned __int16 *a3)
{
  int v4; // r12
  const char *v7; // r0
  int optval; // [sp+8h] [bp-8h] BYREF

  v4 = *a3;
  optval = 1;
  if ( v4 == 2 && setsockopt(fd, 1, 6, &optval, 4u) )
  {
    v7 = (const char *)sub_6D2C0(a3);
    sub_65D40(3, "setsockopt(SO_BROADCAST) enable failure on address %s: %m", v7);
  }
  *(_DWORD *)(a1 + 144) |= 0x400u;
  return 1;
}
