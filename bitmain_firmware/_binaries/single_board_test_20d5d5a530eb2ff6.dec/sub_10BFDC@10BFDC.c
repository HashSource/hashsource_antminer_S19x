void __fastcall sub_10BFDC(int a1, void (__fastcall *a2)(int))
{
  void *v2; // r2
  int v5; // r4
  int v6; // r3

  if ( a1 )
  {
    v2 = *(void **)a1;
    if ( *(int *)a1 > 0 )
    {
      v5 = 0;
      do
      {
        v6 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v5++);
        if ( v6 )
        {
          a2(v6);
          v2 = *(void **)a1;
        }
      }
      while ( v5 < (int)v2 );
    }
    sub_10BDB4((void **)a1);
  }
}
