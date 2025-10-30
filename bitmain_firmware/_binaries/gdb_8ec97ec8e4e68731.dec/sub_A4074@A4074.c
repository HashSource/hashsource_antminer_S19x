bool __fastcall sub_A4074(const char *a1, int a2)
{
  const char *v4; // r5
  size_t v5; // r6

  if ( !*(_BYTE *)(a2 + 60) )
  {
    sub_A3C94(a2 + 32, a2);
    *(_BYTE *)(a2 + 60) = 1;
  }
  v4 = *(const char **)(a2 + 32);
  v5 = strlen(v4);
  if ( !strncmp(a1, v4, v5) && sub_9A6F0(&a1[v5]) )
    return 1;
  if ( !strncmp(a1, "_ada_", 5u) && !strncmp(a1 + 5, v4, v5) )
    return sub_9A6F0(&a1[v5 + 5]) != 0;
  return 0;
}
