uint32_t __fastcall sub_12618(_DWORD *a1)
{
  _DWORD *v1; // r12
  uint32_t v3; // r1
  uint32_t v4; // r2
  uint32_t v5; // r3

  a1[5] = 0;
  *a1 = 10;
  v1 = a1 + 1;
  v3 = in6addr_any.in6_u.u6_addr32[1];
  v4 = in6addr_any.in6_u.u6_addr32[2];
  v5 = in6addr_any.in6_u.u6_addr32[3];
  *v1 = in6addr_any.in6_u.u6_addr32[0];
  v1[1] = v3;
  v1[2] = v4;
  v1[3] = v5;
  return in6addr_any.in6_u.u6_addr32[0];
}
