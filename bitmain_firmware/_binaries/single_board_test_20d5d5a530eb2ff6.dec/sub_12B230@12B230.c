size_t *__fastcall sub_12B230(int *a1, size_t **a2)
{
  size_t *result; // r0
  _DWORD v4[12]; // [sp+4h] [bp-30h] BYREF

  result = (size_t *)sub_12B1F4(a1, v4);
  if ( result )
  {
    if ( a2 )
    {
      result = sub_12AFB4(*a2, v4, 24);
      if ( result )
        *a2 = result;
    }
    else
    {
      return sub_12AFB4(0, v4, 24);
    }
  }
  return result;
}
