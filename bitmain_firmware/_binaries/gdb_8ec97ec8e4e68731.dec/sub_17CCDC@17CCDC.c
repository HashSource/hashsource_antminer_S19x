int *__fastcall sub_17CCDC(int *result, __int16 a2)
{
  int v2; // r3
  int v3; // r2
  int *v4; // r4
  int v5; // r0

  v2 = a2 & 0x7F;
  if ( (a2 & 0x7F) != 0 )
  {
    v3 = (unsigned __int8)a2;
    v4 = result;
    if ( (unsigned __int8)a2 == 127 )
      v2 = 1;
    else
      v3 = 2;
    if ( (unsigned __int8)a2 == 127 )
    {
      v5 = HIBYTE(a2);
      *v4 = v2;
    }
    else
    {
      v5 = v2;
      *v4 = v3;
    }
    result = (int *)sub_99AEC(v5);
    v4[1] = (int)result;
  }
  else
  {
    *result = 0;
    result[1] = HIBYTE(a2);
  }
  return result;
}
