unsigned int __fastcall sub_344564(_DWORD *a1, int a2, unsigned int a3)
{
  unsigned int result; // r0

  result = *(_DWORD *)(*a1 - 12) - a2;
  if ( result >= a3 )
    return a3;
  return result;
}
