_DWORD *__fastcall sub_1A7C0C(int a1, int a2)
{
  _DWORD *result; // r0
  int v5; // r3

  result = sub_93050(*(void **)(*(_DWORD *)a2 + 32), 4 * (**(_DWORD **)(*(_DWORD *)a2 + 32) + 3));
  if ( result != *(_DWORD **)(*(_DWORD *)a2 + 32) )
    *(_DWORD *)(*(_DWORD *)a2 + 32) = result;
  v5 = *result + 2;
  ++*result;
  result[v5] = a1;
  return result;
}
