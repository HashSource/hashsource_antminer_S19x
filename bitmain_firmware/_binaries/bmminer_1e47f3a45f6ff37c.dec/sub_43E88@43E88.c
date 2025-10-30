int sub_43E88()
{
  const char *v0; // r4
  int v1; // r5
  const char *v2; // r6
  const char *v3; // r1
  int v4; // r3
  int v6; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v0 = (const char *)&unk_B32FD;
  v1 = 0;
  while ( !strstr(*(const char **)(v0 - 17), "str") )
  {
    if ( **(unsigned __int8 **)(v0 - 5) != *((unsigned __int8 *)v0 - 1) )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        snprintf(
          s,
          0x800u,
          "droa,%s intcmp different, %d",
          (const char *)dword_B32C0[22 * v1 + 10],
          *((unsigned __int8 *)v0 - 1));
        sub_3B6AC(3, s, 0, v4);
        return 1;
      }
      return 1;
    }
LABEL_6:
    ++v1;
    v0 += 88;
    if ( v1 == 12 )
      return 0;
  }
  v2 = *(const char **)(v0 - 9);
  if ( *v2 )
    v3 = *(const char **)(v0 - 9);
  else
    v3 = "None";
  if ( !strcmp(v0, v3) )
    goto LABEL_6;
  if ( (unsigned int)dword_B308C <= 3 )
    return 1;
  snprintf(s, 0x800u, "droa,%s strcmp different, %s,%s", (const char *)dword_B32C0[22 * v1 + 10], v0, v2);
  sub_3B6AC(3, s, 0, v6);
  return 1;
}
