void *__fastcall sub_9A68(void *a1, size_t a2, size_t a3, int a4)
{
  void *v6; // r6
  char *v9; // r0
  bool v10; // cc

  if ( !a2 )
  {
    v6 = realloc(a1, 1u);
    if ( v6 )
      return v6;
LABEL_10:
    msyslog_term = 1;
    sub_ABF8(3, "fatal out of memory (%lu bytes)", a2);
    exit(1);
  }
  v9 = (char *)realloc(a1, a2);
  v6 = v9;
  if ( !v9 )
    goto LABEL_10;
  v10 = a4 != 0;
  if ( a4 )
    v10 = a2 > a3;
  if ( v10 )
    memset(&v9[a3], 0, a2 - a3);
  return v6;
}
