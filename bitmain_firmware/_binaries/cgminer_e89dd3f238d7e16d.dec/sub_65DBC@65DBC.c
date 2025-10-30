void __fastcall sub_65DBC(int a1)
{
  unsigned int i; // [sp+Ch] [bp-8h]

  for ( i = 0; i < *(_DWORD *)(a1 + 12); ++i )
    sub_650B0(*(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * i));
  sub_640B8(*(void **)(a1 + 16));
  sub_640B8((void *)a1);
}
