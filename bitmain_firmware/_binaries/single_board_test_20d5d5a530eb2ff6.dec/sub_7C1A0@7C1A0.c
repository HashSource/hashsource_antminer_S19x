int *__fastcall sub_7C1A0(unsigned int a1)
{
  int *v2; // r4
  _DWORD v4[7]; // [sp+4h] [bp-1Ch] BYREF

  if ( sub_798A4(v4) )
    return 0;
  v2 = sub_7C028(COERCE_DOUBLE(__PAIR64__(v4, a1)));
  sub_798F0((int)v4);
  return v2;
}
