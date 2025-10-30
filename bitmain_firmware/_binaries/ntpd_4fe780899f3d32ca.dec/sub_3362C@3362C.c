int __fastcall sub_3362C(int a1, int a2, int a3, int a4)
{
  bool v4; // zf
  char v5; // r0
  int result; // r0

  v4 = a1 == 3;
  if ( a1 == 3 )
    v4 = a2 == 16;
  v5 = v4;
  if ( a3 == 4 )
    result = v5 & 1;
  else
    result = 0;
  if ( result )
  {
    switch ( a4 )
    {
      case 1163149650:
        return 1;
      case 1498301764:
        return 2;
      case 1381258066:
        return 3;
      default:
        if ( (unsigned __int8)a4 == 88 )
          return 4;
        else
          return 0;
    }
  }
  return result;
}
