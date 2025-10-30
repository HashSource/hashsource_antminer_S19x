void __fastcall sub_74FE8(int a1)
{
  if ( *(_DWORD *)a1 )
    sub_74DE8(*(void **)a1);
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 0;
}
