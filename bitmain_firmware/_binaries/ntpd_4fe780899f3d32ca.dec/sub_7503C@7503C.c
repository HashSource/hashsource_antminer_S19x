_DWORD *__fastcall sub_7503C(_DWORD *result, _DWORD *a2)
{
  if ( *a2 != 10 )
    sub_6ECC0((int)"./../lib/isc/netaddr.c", 428, 0, "s->family == 10");
  if ( a2[1] || a2[2] || a2[3] != -65536 )
    sub_6ECC0(
      (int)"./../lib/isc/netaddr.c",
      429,
      0,
      "(__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (&src->type.in6); __a->__in6_u.__u6_addr3"
      "2[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == __bswap_32 (0xffff); }))");
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  *result = 2;
  result[1] = a2[4];
  return result;
}
