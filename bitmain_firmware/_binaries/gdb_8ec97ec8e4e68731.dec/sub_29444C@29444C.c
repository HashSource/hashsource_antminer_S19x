int __fastcall sub_29444C(char *s2)
{
  int v2; // r6
  const char *v3; // r0
  int i; // r4

  if ( !dword_48BAFC )
    return 0;
  v2 = (unsigned __int8)*s2;
  v3 = "@7";
  for ( i = 0; ; v3 = (&off_3FDBD4)[2 * i] )
  {
    if ( *(unsigned __int8 *)v3 == v2 && !strcmp(v3, s2) )
      return *(_DWORD *)(&off_3FDBD4)[2 * i + 1];
    if ( ++i == 29 )
      break;
  }
  return 0;
}
