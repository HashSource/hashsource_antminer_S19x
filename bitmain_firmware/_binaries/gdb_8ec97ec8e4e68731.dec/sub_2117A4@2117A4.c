int __fastcall sub_2117A4(int *a1)
{
  int v1; // r3
  int result; // r0

  v1 = *a1;
  result = *(_DWORD *)(*a1 + 32);
  if ( result )
    return *(_DWORD *)(v1 + 28) != result;
  return result;
}
