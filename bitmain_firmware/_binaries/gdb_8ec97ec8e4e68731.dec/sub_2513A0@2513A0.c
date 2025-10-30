int __fastcall sub_2513A0(int result)
{
  const char *v1; // r0

  if ( (*(_DWORD *)(result + 20) & 0xDD) != 0 )
  {
    *(_DWORD *)(result + 20) &= 0xDDu;
    v1 = (const char *)sub_331930(result);
    sub_946E0("Cannot perform operation: %s", v1);
  }
  return result;
}
