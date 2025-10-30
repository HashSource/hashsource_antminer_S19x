__int16 *sub_23CE8()
{
  int v0; // r0

  if ( !word_B96C8 )
  {
    word_B94A0 = __rev16(sub_235A8());
    return sub_1EBA4(0);
  }
  v0 = sub_31C78((unsigned __int16)word_B96C8);
  if ( v0 )
  {
    word_B94A0 = __rev16(sub_23504(v0));
    return sub_1EBA4(0);
  }
  return (__int16 *)sub_1F4D0(4);
}
