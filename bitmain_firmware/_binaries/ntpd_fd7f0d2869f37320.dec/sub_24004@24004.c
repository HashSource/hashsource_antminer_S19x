void *sub_24004()
{
  int v0; // r0
  unsigned int v1; // r0
  unsigned int v2; // r0

  if ( !word_BA6C8 )
  {
    v2 = sub_2389C();
    word_BA4A0 = (v2 >> 8) | ((_WORD)v2 << 8);
    return sub_1EDD4(0);
  }
  v0 = sub_3217C((unsigned __int16)word_BA6C8);
  if ( v0 )
  {
    v1 = sub_237F8(v0);
    word_BA4A0 = (v1 >> 8) | ((_WORD)v1 << 8);
    return sub_1EDD4(0);
  }
  return (void *)sub_1F734(4);
}
