bool __fastcall sub_16FB24(const char *a1, const char *a2)
{
  _BOOL4 v2; // r3
  _BOOL4 v3; // lr

  if ( a2 )
    v2 = a1 == 0;
  else
    v2 = 0;
  if ( v2 )
    return 0;
  if ( a1 )
    v3 = a2 == 0;
  else
    v3 = 0;
  if ( v3 )
    return 0;
  if ( a1 == 0 && a2 == 0 )
    return 1;
  return strcmp(a1, a2) == 0;
}
