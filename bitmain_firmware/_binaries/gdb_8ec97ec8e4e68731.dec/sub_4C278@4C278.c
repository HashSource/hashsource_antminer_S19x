bool __fastcall sub_4C278(__int16 a1)
{
  int v2; // r0

  if ( (unsigned __int8)a1 != 127 )
    return 0;
  v2 = HIBYTE(a1);
  return (unsigned int)(v2 - 4) <= 1 || v2 == 11;
}
