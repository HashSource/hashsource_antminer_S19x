__int16 *sub_23BF8()
{
  int v0; // r0
  int v1; // r6
  int v2; // r0
  unsigned __int8 *v3; // r4
  int v4; // t1

  if ( !word_B96C8 )
    return sub_23AC0();
  v0 = sub_31C78((unsigned __int16)word_B96C8);
  v1 = v0;
  if ( !v0 )
    return (__int16 *)sub_1F4D0(4);
  word_B94A0 = __rev16(sub_23504(v0));
  v2 = 4;
  if ( byte_B98DD )
    *(_BYTE *)(v1 + 74) = 0;
  v3 = (unsigned __int8 *)&unk_93BF4;
  do
  {
    sub_20810(v2, v1);
    v4 = *++v3;
    v2 = v4;
  }
  while ( v4 );
  return sub_1EBA4(0);
}
