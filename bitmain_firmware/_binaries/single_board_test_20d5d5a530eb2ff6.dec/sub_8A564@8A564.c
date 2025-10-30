int __fastcall sub_8A564(int a1, int a2)
{
  int v2; // r6
  int v5; // r7
  int result; // r0

  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 == a2 )
    return 1;
  v5 = *(_DWORD *)(a1 + 24);
  if ( *(_DWORD *)v2 == *(_DWORD *)a2 )
  {
    *(_DWORD *)(a1 + 4) = a2;
    result = 1;
  }
  else
  {
    (*(void (**)(void))(v2 + 20))();
    *(_DWORD *)(a1 + 4) = a2;
    result = (*(int (__fastcall **)(int))(a2 + 12))(a1);
  }
  if ( v5 == *(_DWORD *)(v2 + 28) )
  {
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 28);
  }
  else if ( v5 == *(_DWORD *)(v2 + 24) )
  {
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  }
  return result;
}
