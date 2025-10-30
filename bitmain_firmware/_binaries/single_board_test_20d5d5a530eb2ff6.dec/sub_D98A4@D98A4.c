int __fastcall sub_D98A4(int a1, int a2, int a3, int a4, int a5)
{
  if ( *(_DWORD *)(**(_DWORD **)(a1 + 16) + 112) )
    return (*(int (**)(void))(**(_DWORD **)(a1 + 16) + 112))();
  if ( sub_D16D8(a1, a4, a5) <= 0 )
    return -1;
  return sub_D97EC((int *)a1, a2, a3);
}
