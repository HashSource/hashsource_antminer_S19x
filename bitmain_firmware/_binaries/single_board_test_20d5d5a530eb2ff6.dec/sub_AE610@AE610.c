int __fastcall sub_AE610(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  if ( a3 >= 0 && !sub_126EFC(*(_DWORD *)a1, a3) || !sub_B28F8(*(_DWORD *)(a1 + 4), a2, a4, a5) )
    return 0;
  if ( a6 )
    sub_AE174(*(_DWORD **)(a1 + 8), a6, a7);
  return 1;
}
