int __fastcall sub_1154D4(int a1, int a2, int a3)
{
  int v3; // r3

  v3 = *(_DWORD *)(a1 + 124);
  if ( *(_DWORD *)(v3 + 12) )
    return (*(int (__fastcall **)(int, int, int, _DWORD))(v3 + 12))(a1, a2, a3, 0);
  else
    return 0;
}
