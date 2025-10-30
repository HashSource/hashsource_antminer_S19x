int sub_752E0()
{
  int result; // r0
  int v1; // r6
  const char *v2; // r0

  if ( sub_78614(&stru_10726C, "./../lib/isc/result.c", 152) )
    sub_6F61C("./../lib/isc/result.c", 152, "isc__mutex_init((&lock), \"./../lib/isc/result.c\", 152) == 0");
  dword_107284 = 0;
  dword_107288 = 0;
  result = sub_7511C(0, 0x3Eu, (int)off_B7DE4, isc_msgcat, 2);
  v1 = result;
  if ( result )
  {
    v2 = (const char *)sub_73830((_DWORD *)isc_msgcat, 1, 101, (int)"failed");
    return sub_6F554("./../lib/isc/result.c", 158, (int)"register_table() %s: %u", v2, v1);
  }
  return result;
}
