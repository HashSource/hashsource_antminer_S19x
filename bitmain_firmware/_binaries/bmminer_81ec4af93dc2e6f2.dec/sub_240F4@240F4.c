int sub_240F4()
{
  unsigned int v0; // r5
  int i; // r4
  int v3; // r5
  unsigned int v4; // [sp+4h] [bp-Ch] BYREF
  unsigned int v5; // [sp+8h] [bp-8h] BYREF
  int v6; // [sp+Ch] [bp-4h] BYREF

  if ( dword_AFE58 == 2 )
  {
    v3 = dword_4B6CC8;
    if ( (unsigned int)dword_4B6CC8 < 0x32 )
      return 50;
    return v3;
  }
  else
  {
    v0 = 50;
    for ( i = 0; i != 4; ++i )
    {
      if ( sub_266F0(i) )
      {
        sub_22458(&dword_52FE68[256 * i], &v4, &v5, &v6);
        if ( v0 < v5 )
          v0 = v5;
      }
    }
    return v0;
  }
}
