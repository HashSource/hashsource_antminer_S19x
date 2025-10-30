int __fastcall sub_26CA48(char *s2)
{
  int i; // r4

  for ( i = dword_48AA0C; i; i = *(_DWORD *)i )
  {
    if ( !strcmp(*(const char **)(i + 4), s2) )
      break;
  }
  return i;
}
