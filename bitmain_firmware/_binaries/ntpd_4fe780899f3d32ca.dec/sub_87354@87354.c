unsigned int __fastcall sub_87354(unsigned int result, unsigned int a2, int a3)
{
  int v3; // r3
  char *v4; // r2
  unsigned int v6; // r12
  char *v7; // r3
  bool v8; // cc

  if ( a3 )
  {
    v6 = result - a2;
    v7 = (char *)&dword_B8164 + result + 7;
    do
    {
      *++v7 = a2;
      result = ++a2 + v6;
      v8 = a2 > 0xFF;
      if ( a2 <= 0xFF )
        v8 = result > 0xFF;
      if ( v8 )
        break;
      --a3;
    }
    while ( a3 > 0 );
  }
  else
  {
    v3 = 255;
    v4 = aStr;
    do
      *--v4 = v3;
    while ( v3-- != 0 );
  }
  return result;
}
