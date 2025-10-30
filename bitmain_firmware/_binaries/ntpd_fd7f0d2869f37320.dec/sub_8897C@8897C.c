char *__fastcall sub_8897C(char *result)
{
  char v1; // r2
  int v2; // r3
  int v3; // t1

  if ( result )
  {
    v1 = *result;
    if ( *result )
    {
      v2 = (unsigned __int8)*result;
      do
      {
        *((_BYTE *)&dword_B9164 + v2 + 8) = v1;
        v3 = (unsigned __int8)*++result;
        v2 = v3;
      }
      while ( v3 );
    }
  }
  return result;
}
