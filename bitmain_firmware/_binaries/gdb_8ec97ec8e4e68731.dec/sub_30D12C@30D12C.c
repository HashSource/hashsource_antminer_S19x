void __fastcall sub_30D12C(int *a1, int *a2)
{
  int v4; // r3
  int i; // r4
  int v7; // r0
  void *v8; // r0

LABEL_1:
  v4 = *a2;
  for ( i = 4 * (*a2 - 1); v4-- > 0; i -= 4 )
  {
    v7 = *a1;
    *a2 = v4;
    v8 = *(void **)(v7 + i);
    if ( v8 )
    {
      free(v8);
      *(_DWORD *)(*a1 + i) = 0;
      goto LABEL_1;
    }
  }
}
