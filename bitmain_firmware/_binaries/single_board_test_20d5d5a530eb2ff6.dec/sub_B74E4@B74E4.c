size_t __fastcall sub_B74E4(int a1, char *s, int n)
{
  *s = 0;
  if ( fgets(s, n, *(FILE **)(a1 + 36)) && *s )
    return j_strlen(s);
  else
    return 0;
}
