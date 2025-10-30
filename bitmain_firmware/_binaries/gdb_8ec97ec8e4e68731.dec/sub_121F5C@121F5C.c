_BYTE *__fastcall sub_121F5C(_BYTE *a1, const char *a2)
{
  int v3; // t1

  if ( dword_47AC88 > 0 )
    sub_F43B4(&off_46D334, "macro definition contains spaces in formal argument list:\n`%s'", a2);
  if ( *a1 == 32 )
  {
    do
      v3 = (unsigned __int8)*++a1;
    while ( v3 == 32 );
  }
  return a1;
}
