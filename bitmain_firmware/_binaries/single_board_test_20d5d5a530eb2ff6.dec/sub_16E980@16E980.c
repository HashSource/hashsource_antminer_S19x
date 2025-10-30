void **__fastcall sub_16E980(int a1, int a2)
{
  void **result; // r0

  result = sub_10E184((void ***)(a1 + 24), a2);
  if ( result )
  {
    *(_DWORD *)(a1 + 8) = 1;
    return (void **)1;
  }
  return result;
}
