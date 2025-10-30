void __fastcall sub_76AB8(int a1)
{
  unsigned int i; // [sp+Ch] [bp-8h]

  for ( i = 0; *(_DWORD *)(a1 + 12) > i; ++i )
    sub_75DB8(*(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * i));
  sub_74DE8(*(void **)(a1 + 16));
  sub_74DE8((void *)a1);
}
