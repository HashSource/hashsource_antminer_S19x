void *__fastcall sub_967C(void *a1, size_t a2, size_t a3, int a4)
{
  char *v7; // r0
  void *v8; // r6
  bool v9; // cc

  if ( !a2 )
  {
    v8 = realloc(a1, 1u);
    if ( v8 )
      return v8;
LABEL_10:
    msyslog_term = 1;
    sub_A828(3, "fatal out of memory (%lu bytes)", a2);
    exit(1);
  }
  v7 = (char *)realloc(a1, a2);
  v8 = v7;
  if ( !v7 )
    goto LABEL_10;
  v9 = a4 != 0;
  if ( a4 )
    v9 = a2 > a3;
  if ( v9 )
    memset(&v7[a3], 0, a2 - a3);
  return v8;
}
