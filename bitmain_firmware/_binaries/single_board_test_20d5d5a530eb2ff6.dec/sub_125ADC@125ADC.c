int *__fastcall sub_125ADC(int *result, int a2)
{
  int v2; // r3
  int v3; // r3

  v2 = (a2 + 7) & (a2 >> 31);
  if ( a2 >= 0 )
    v2 = a2;
  v3 = v2 >> 3;
  if ( result )
  {
    if ( v3 >= *result )
    {
      return 0;
    }
    else
    {
      result = (int *)result[2];
      if ( result )
        return (int *)(((1 << (~(_BYTE)a2 & 7)) & *((unsigned __int8 *)result + v3)) != 0);
    }
  }
  return result;
}
