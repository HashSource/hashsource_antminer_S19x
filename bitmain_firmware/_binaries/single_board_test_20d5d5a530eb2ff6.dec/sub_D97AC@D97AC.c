int __fastcall sub_D97AC(int a1, int a2, int a3, int a4, int a5)
{
  if ( *(_DWORD *)(**(_DWORD **)(a1 + 16) + 108) )
    return (*(int (**)(void))(**(_DWORD **)(a1 + 16) + 108))();
  if ( a2 && sub_D16D8(a1, a4, a5) <= 0 )
    return 0;
  return sub_D9644((int *)a1, a2, a3);
}
