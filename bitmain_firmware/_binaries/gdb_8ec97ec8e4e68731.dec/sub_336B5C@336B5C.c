void __fastcall sub_336B5C(int a1)
{
  unsigned int v2; // r4
  __int64 v3; // r2

  if ( *(_DWORD *)a1 )
  {
    v2 = 0;
    do
    {
      v3 = *(_QWORD *)(a1 + 4);
      HIDWORD(v3) += v2++;
      free(*(void **)(v3 + 4 * HIDWORD(v3)));
    }
    while ( v2 < *(_DWORD *)a1 );
  }
  free(*(void **)(a1 + 4));
  *(_DWORD *)(a1 + 4) = 0;
}
