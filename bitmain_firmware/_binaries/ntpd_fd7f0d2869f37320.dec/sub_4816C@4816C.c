__int16 *__fastcall sub_4816C(int a1, int a2)
{
  __int16 *result; // r0

  result = *(__int16 **)(a2 + 84);
  if ( *((_DWORD *)result + 7) != -1 )
    return sub_190FC((int)(result + 4));
  return result;
}
