int __fastcall sub_17FBA4(void *a1)
{
  void *v1; // r4
  void *v2; // r0
  int v3; // r0
  int v4; // r0
  int result; // r0

  v1 = a1;
  v2 = *(void **)(sub_183688(a1) + 40);
  if ( v2 )
    free(v2);
  if ( v1 )
  {
    v2 = (void *)sub_327254(v1);
    v1 = v2;
  }
  v3 = sub_183688(v2);
  *(_DWORD *)(v3 + 40) = v1;
  v4 = sub_183688(v3);
  *(_DWORD *)(v4 + 44) = 0;
  result = sub_183688(v4);
  *(_DWORD *)(result + 48) = 0;
  return result;
}
