char *__fastcall sub_2B7F8(const char *a1)
{
  size_t v1; // r0
  char *v2; // r3
  unsigned __int8 *v3; // r3
  char v6[16]; // [sp+14h] [bp-810h] BYREF
  char *v7; // [sp+814h] [bp-10h]
  char *v8; // [sp+818h] [bp-Ch]
  unsigned __int8 *v9; // [sp+81Ch] [bp-8h]

  if ( !a1 )
  {
    v7 = strdup("(null)");
    if ( !v7 )
    {
      snprintf(v6, 0x800u, "Failed to malloc null in %s %s():%d", "util.c", "str_text", 3666);
      sub_1E4EC(3, v6, 1);
      sub_4BFB0(1);
    }
  }
  v9 = (unsigned __int8 *)a1;
  v1 = strlen(a1);
  v8 = (char *)sub_20210(4 * v1 + 5, "util.c", "str_text", 3671);
  v7 = v8;
  do
  {
    if ( *v9 > 0x1Fu && *v9 <= 0x7Eu )
    {
      v2 = v8++;
      *v2 = *v9;
    }
    else
    {
      sprintf(v8, "0x%02x", *v9);
      v8 += 4;
    }
    v3 = v9++;
  }
  while ( *v3 );
  *v8 = 0;
  return v7;
}
