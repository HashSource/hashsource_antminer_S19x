const void *__fastcall sub_2D0F4(int a1)
{
  const void *result; // r0
  void *v3; // r9

  result = (const void *)dword_B9B18;
  if ( (_UNKNOWN *)dword_B9B18 == &unk_B9938 )
  {
    v3 = &unk_B9A28;
  }
  else if ( (_UNKNOWN *)dword_B9B18 == &unk_B9A28 )
  {
    v3 = &unk_B9938;
  }
  else
  {
    v3 = &unk_B9A28;
    sub_2C96C((int)&unk_B9938);
    sub_2C96C((int)&unk_B9A28);
    result = &unk_B9938;
    dword_B9B18 = (int)&unk_B9938;
  }
  if ( a1 )
  {
    memcpy(v3, result, 0xF0u);
    return v3;
  }
  return result;
}
