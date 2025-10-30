void *sub_23F10()
{
  int v0; // r0
  int v1; // r5
  unsigned int v2; // r0
  int v3; // r0
  unsigned __int8 *v4; // r4
  int v5; // t1

  if ( !word_BA6C8 )
    return sub_23DC8();
  v0 = sub_3217C((unsigned __int16)word_BA6C8);
  v1 = v0;
  if ( !v0 )
    return (void *)sub_1F734(4);
  v2 = sub_237F8(v0);
  word_BA4A0 = (v2 >> 8) | ((_WORD)v2 << 8);
  v3 = 4;
  if ( byte_BA8DD )
    *(_BYTE *)(v1 + 74) = 0;
  v4 = (unsigned __int8 *)&unk_95150;
  do
  {
    sub_20A90(v3, v1);
    v5 = *++v4;
    v3 = v5;
  }
  while ( v5 );
  return sub_1EDD4(0);
}
