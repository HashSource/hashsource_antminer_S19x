int __fastcall sub_8791C(int a1)
{
  int *v2; // r6
  void *v3; // r0
  int v4; // r3
  int result; // r0

  v2 = _errno_location();
  v3 = *(void **)a1;
  *v2 = 0;
  munmap(v3, *(_DWORD *)(a1 + 8));
  v4 = *(_DWORD *)(a1 + 12);
  result = *v2;
  *(_DWORD *)(a1 + 20) = *v2;
  if ( v4 != -1 )
  {
    close(v4);
    result = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 12) = -1;
  }
  return result;
}
