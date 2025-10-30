char *__fastcall sub_3DE34(const char *a1)
{
  size_t v2; // r0
  char *v3; // r5
  char *v4; // r7
  char *v5; // r4
  char v6; // r3
  char v7; // r2
  int v8; // t1
  char *v10; // r2
  int v11; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( !a1 )
  {
    v10 = (char *)malloc(7u);
    if ( v10 )
    {
      strcpy(v10, "(null)");
    }
    else
    {
      snprintf(s, 0x800u, "Failed to malloc null in %s %s():%d", "util.c", "str_text", 3407);
      sub_3AF5C(3, s, 1, v11);
      nullsub_1();
    }
  }
  v2 = strlen(a1);
  v3 = (char *)(a1 - 1);
  v4 = (char *)sub_3C908(4 * v2 + 5, "util.c", "str_text", 3412);
  v5 = v4;
  do
  {
    while ( 1 )
    {
      v8 = (unsigned __int8)*++v3;
      v7 = v8;
      if ( (unsigned int)(v8 - 32) <= 0x5E )
        break;
      sprintf(v5, "0x%02x");
      v6 = *v3;
      v5 += 4;
      if ( !*v3 )
        goto LABEL_7;
    }
    *v5++ = v7;
    v6 = *v3;
  }
  while ( *v3 );
LABEL_7:
  *v5 = v6;
  return v4;
}
