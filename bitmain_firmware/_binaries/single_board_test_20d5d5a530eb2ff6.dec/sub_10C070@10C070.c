void __fastcall sub_10C070(int a1)
{
  int (*v1)(const void *, const void *); // r3

  if ( a1 )
  {
    if ( !*(_DWORD *)(a1 + 8) )
    {
      v1 = *(int (**)(const void *, const void *))(a1 + 16);
      if ( v1 )
      {
        if ( *(int *)a1 > 1 )
          qsort(*(void **)(a1 + 4), *(_DWORD *)a1, 4u, v1);
        *(_DWORD *)(a1 + 8) = 1;
      }
    }
  }
}
