void *__fastcall sub_32720C(const void *a1, size_t a2, size_t a3)
{
  char *v6; // r0
  void *v7; // r6

  v6 = (char *)sub_93028(a3);
  v7 = v6;
  if ( a3 > a2 )
    memset(&v6[a2], 0, a3 - a2);
  return memcpy(v7, a1, a2);
}
