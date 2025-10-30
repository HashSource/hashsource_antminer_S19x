void *__fastcall sub_26D370(int a1, int a2)
{
  int v2; // r3
  void *result; // r0

  v2 = *(_DWORD *)(a1 + 68);
  result = *(void **)(a2 + 20);
  if ( (unsigned int)result > *(_DWORD *)(v2 + 20) )
  {
    sub_26A998((unsigned int)result, a2 + 24);
    result = sub_93050(*(void **)(a1 + 92), *(_DWORD *)(a2 + 20));
    *(_DWORD *)(a1 + 92) = result;
  }
  *(_DWORD *)(a1 + 68) = a2;
  return result;
}
