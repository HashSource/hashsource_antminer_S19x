int __fastcall sub_17FB2C(_BYTE *a1)
{
  void *v2; // r0
  int result; // r0
  int v4; // r5

  v2 = *(void **)(sub_183688(a1) + 56);
  if ( v2 )
    free(v2);
  if ( a1 && *a1 )
  {
    v4 = sub_183688(v2);
    result = sub_327254(a1);
    *(_DWORD *)(v4 + 56) = result;
  }
  else
  {
    result = sub_183688(v2);
    *(_DWORD *)(result + 56) = 0;
  }
  return result;
}
