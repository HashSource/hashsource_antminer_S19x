void *__fastcall sub_10BD98(void *result)
{
  _DWORD *v1; // r4

  if ( result )
  {
    if ( *(_DWORD *)result )
    {
      v1 = result;
      result = memset(*((void **)result + 1), 0, 4 * *(_DWORD *)result);
      *v1 = 0;
    }
  }
  return result;
}
