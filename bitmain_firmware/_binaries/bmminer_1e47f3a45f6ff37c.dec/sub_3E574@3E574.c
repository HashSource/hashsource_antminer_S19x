char *__fastcall sub_3E574(const char *a1)
{
  const char *v1; // r5
  size_t v2; // r0
  char *v3; // r6
  char *v4; // r4
  char v5; // r3
  int v6; // t1
  int v7; // r2
  char *v8; // r0
  int v9; // t1
  char *v11; // r2
  int v12; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v1 = a1;
  if ( !a1 )
  {
    v11 = (char *)malloc(7u);
    if ( v11 )
    {
      strcpy(v11, "(null)");
    }
    else
    {
      snprintf(s, 0x800u, "Failed to malloc null in %s %s():%d", "util.c", "str_text", 3407);
      sub_3B6AC(3, s, 1, v12);
      nullsub_1();
    }
  }
  v2 = strlen(v1);
  v3 = (char *)sub_3D10C(4 * v2 + 5, "util.c", "str_text", 3412);
  v4 = v3;
  do
  {
    while ( 1 )
    {
      v7 = *(unsigned __int8 *)v1;
      if ( (unsigned int)(v7 - 32) <= 0x5E )
        break;
      v8 = v4;
      v4 += 4;
      sprintf(v8, "0x%02x", v7);
      v9 = *(unsigned __int8 *)v1++;
      v5 = v9;
      if ( !v9 )
        goto LABEL_7;
    }
    *v4++ = v7;
    v6 = *(unsigned __int8 *)v1++;
    v5 = v6;
  }
  while ( v6 );
LABEL_7:
  *v4 = v5;
  return v3;
}
