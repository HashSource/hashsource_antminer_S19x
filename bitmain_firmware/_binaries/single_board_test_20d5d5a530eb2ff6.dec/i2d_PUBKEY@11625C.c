int __fastcall i2d_PUBKEY(int result, _BYTE **a2)
{
  int v3; // r4
  size_t *v4; // [sp+4h] [bp-4h] BYREF

  v4 = 0;
  if ( result )
  {
    if ( sub_116110((int)&v4, result) )
    {
      v3 = sub_1160D4(v4, a2);
      sub_1160FC((int)v4);
      return v3;
    }
    else
    {
      return -1;
    }
  }
  return result;
}
