char *__fastcall sub_15E08C(int a1)
{
  char *result; // r0
  char *v2; // r4
  int v3; // r0
  int v4; // [sp+4h] [bp-4h] BYREF

  result = (char *)sub_15DEBC(a1, &v4);
  if ( result )
  {
    result = (char *)sub_21DDAC(v4);
    v2 = result;
    if ( result )
    {
      result = (char *)sub_21A6D8(result);
      if ( result != off_46D5A4[0][2] )
      {
        result = (char *)sub_21A6D8(v2);
        if ( result )
        {
          if ( !dword_487A04 )
          {
            v3 = sub_21A6D8(v2);
            return (char *)sub_194204(v3);
          }
        }
      }
    }
  }
  return result;
}
