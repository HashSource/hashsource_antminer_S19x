int __fastcall sub_250FE0(int a1, int a2)
{
  char *v4; // r3
  int v5; // r0

  if ( *(_DWORD *)(a2 + 8) )
    return *(_DWORD *)(a2 + 8);
  v4 = sub_250C20(a1);
  v5 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 8) = v4;
  (*(void (**)(void))(v5 + 776))();
  return *(_DWORD *)(a2 + 8);
}
