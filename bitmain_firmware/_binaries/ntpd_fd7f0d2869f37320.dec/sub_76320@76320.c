int sub_76320()
{
  int result; // r0
  int v1; // r6
  const char *v2; // r0

  if ( sub_798E8(&stru_108290, "./../lib/isc/result.c", 152) )
    sub_705AC("./../lib/isc/result.c", 152, "isc__mutex_init((&lock), \"./../lib/isc/result.c\", 152) == 0");
  dword_1082A8 = 0;
  dword_1082AC = 0;
  result = sub_7615C(0, 0x3Eu, (int)off_B8DE4, isc_msgcat, 2);
  v1 = result;
  if ( result )
  {
    v2 = (const char *)sub_7487C((_DWORD *)isc_msgcat, 1, 101, (int)"failed");
    return sub_704E4("./../lib/isc/result.c", 158, (int)"register_table() %s: %u", v2, v1);
  }
  return result;
}
