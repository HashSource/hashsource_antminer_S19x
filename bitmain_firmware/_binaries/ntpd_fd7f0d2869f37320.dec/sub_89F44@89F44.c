void __fastcall sub_89F44(unsigned int a1, int a2)
{
  sub_89E54(a1, a2);
  if ( *(_DWORD *)(a2 + 24) != -1 )
    *(_DWORD *)(a2 + 24) += time(0);
}
