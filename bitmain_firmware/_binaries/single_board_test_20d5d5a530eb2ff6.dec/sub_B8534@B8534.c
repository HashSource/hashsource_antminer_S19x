int __fastcall sub_B8534(int a1, int a2)
{
  int result; // r0
  int v3; // r1

  if ( a1 >= 15360 )
  {
    result = 256;
  }
  else
  {
    if ( a1 >= 7680 )
    {
      result = 192;
      if ( a2 == -1 )
        return result;
      goto LABEL_7;
    }
    if ( a1 >= 3072 )
    {
      result = 128;
    }
    else if ( a1 >= 2048 )
    {
      result = 112;
    }
    else
    {
      if ( a1 < 1024 )
        return 0;
      result = 80;
    }
  }
  if ( a2 == -1 )
    return result;
LABEL_7:
  v3 = a2 / 2;
  if ( v3 <= 79 )
    return 0;
  if ( result >= v3 )
    return v3;
  return result;
}
