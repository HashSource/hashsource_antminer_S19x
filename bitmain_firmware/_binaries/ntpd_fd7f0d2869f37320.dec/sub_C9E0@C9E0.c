int __fastcall sub_C9E0(int result)
{
  if ( result )
  {
    result = *(_DWORD *)(result + 4);
    if ( result )
      return strncmp((const char *)result, "127.127.", 8u) == 0;
  }
  return result;
}
