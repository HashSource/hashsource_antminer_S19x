unsigned int __fastcall sub_26A998(unsigned int result, int a2)
{
  const char *v2; // r1

  if ( dword_46DEB0 >= 0 && dword_46DEB0 < result )
  {
    v2 = *(const char **)(*(_DWORD *)a2 + 8);
    if ( v2 )
      sub_946E0("value of type `%s' requires %u bytes, which is more than max-value-size", v2, result);
    sub_946E0("value requires %u bytes, which is more than max-value-size", result);
  }
  return result;
}
