uint32_t __fastcall sub_75E48(_DWORD *a1)
{
  uint32_t v3; // r1
  uint32_t v4; // r2
  uint32_t v5; // r3

  memset(a1, 0, 0x18u);
  *a1 = 10;
  v3 = in6addr_any.in6_u.u6_addr32[1];
  v4 = in6addr_any.in6_u.u6_addr32[2];
  v5 = in6addr_any.in6_u.u6_addr32[3];
  a1[1] = in6addr_any.in6_u.u6_addr32[0];
  a1[2] = v3;
  a1[3] = v4;
  a1[4] = v5;
  return in6addr_any.in6_u.u6_addr32[0];
}
