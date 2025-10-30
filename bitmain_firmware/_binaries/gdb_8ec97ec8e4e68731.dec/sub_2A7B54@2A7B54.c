int __fastcall sub_2A7B54(int a1, int a2, int a3)
{
  int v3; // r12

  if ( *(_DWORD *)(a3 + 4) == 1 )
  {
    v3 = *(_DWORD *)(*(_DWORD *)(a3 + 16) + 148);
    if ( !v3 )
      v3 = a1;
  }
  else
  {
    v3 = a1;
  }
  return (*(int (**)(void))(*(_DWORD *)(v3 + 4) + 352))();
}
