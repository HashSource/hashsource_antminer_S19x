int __fastcall sub_FCB10(const char *a1, int a2, _DWORD *a3)
{
  int v6; // r5
  _DWORD *v7; // r6
  const char *v8; // r0

  if ( a2 <= 0 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = a3;
    v8 = (const char *)sub_21B3C4(*a3);
    ++v6;
    ++a3;
    if ( !strcmp(a1, v8) )
      break;
    if ( a2 == v6 )
      return 0;
  }
  return *v7;
}
