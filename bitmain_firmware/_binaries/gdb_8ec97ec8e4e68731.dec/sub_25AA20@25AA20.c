bool __fastcall sub_25AA20(const char *a1, const char *a2)
{
  int v2; // r3
  size_t v5; // r6

  v2 = (int)a1;
  if ( a1 )
    v2 = 1;
  if ( !a2 )
    v2 = 0;
  if ( !v2 )
    return 0;
  v5 = strlen(a1);
  return v5 <= strlen(a2) && strncmp(a2, a1, v5) == 0;
}
