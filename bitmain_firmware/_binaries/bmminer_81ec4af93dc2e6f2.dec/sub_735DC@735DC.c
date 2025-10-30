void __fastcall sub_735DC(int a1)
{
  unsigned int i; // [sp+Ch] [bp-8h]

  for ( i = 0; i < *(_DWORD *)(a1 + 12); ++i )
    sub_728D0(*(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * i));
  sub_718D4(*(void **)(a1 + 16));
  sub_718D4((void *)a1);
}
