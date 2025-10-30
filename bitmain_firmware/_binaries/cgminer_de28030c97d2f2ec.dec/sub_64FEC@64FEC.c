void __fastcall sub_64FEC(int a1)
{
  if ( *(_DWORD *)a1 )
    sub_64DEC(*(void **)a1);
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 0;
}
