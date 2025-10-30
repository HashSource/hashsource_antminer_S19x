int sub_4224C()
{
  const char *v0; // r4
  int v1; // r5
  const char *v2; // r6
  const char *v3; // r1
  int v5; // r3
  int v6; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v0 = (const char *)&unk_AFE95;
  v1 = 0;
  while ( strstr(*(const char **)(v0 - 17), "str") )
  {
    v2 = *(const char **)(v0 - 9);
    if ( *v2 )
      v3 = *(const char **)(v0 - 9);
    else
      v3 = "None";
    if ( strcmp(v0, v3) )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        snprintf(s, 0x800u, "droa,%s strcmp different, %s,%s", (const char *)dword_AFE58[22 * v1 + 10], v0, v2);
        sub_3AF5C(3, s, 0, v5);
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
  if ( **(unsigned __int8 **)(v0 - 5) == *((unsigned __int8 *)v0 - 1) )
    goto LABEL_6;
  if ( (unsigned int)off_AFC24 <= 3 )
    return 1;
  snprintf(
    s,
    0x800u,
    "droa,%s intcmp different, %d",
    (const char *)dword_AFE58[22 * v1 + 10],
    *((unsigned __int8 *)v0 - 1));
  sub_3AF5C(3, s, 0, v6);
  return 1;
}
