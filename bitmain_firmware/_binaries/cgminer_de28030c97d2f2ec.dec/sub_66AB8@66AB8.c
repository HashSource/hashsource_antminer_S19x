void __fastcall sub_66AB8(int a1)
{
  unsigned int i; // [sp+Ch] [bp-8h]

  for ( i = 0; *(_DWORD *)(a1 + 12) > i; ++i )
    sub_65DB8(*(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * i));
  sub_64DEC(*(void **)(a1 + 16));
  sub_64DEC((void *)a1);
}
