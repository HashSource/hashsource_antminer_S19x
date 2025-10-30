int __fastcall sub_19DC94(int a1, int a2)
{
  void *v3; // r0
  int result; // r0

  v3 = *(void **)(a1 + 28);
  if ( v3 )
    free(v3);
  result = a2;
  if ( a2 )
    result = sub_327254(a2);
  *(_DWORD *)(a1 + 28) = result;
  return result;
}
