int __fastcall sub_15D924(int a1)
{
  _DWORD *v1; // r3
  int v3; // r0
  int v4; // r1

  v1 = *(_DWORD **)(a1 + 16);
  if ( !v1 )
  {
    sub_160DD4(a1, a1 + 12);
    v1 = *(_DWORD **)(a1 + 16);
  }
  if ( *v1 )
    return 0;
  v3 = *(_DWORD *)(a1 + 68);
  if ( !v3 )
  {
    v3 = sub_160A30(a1);
    v1 = *(_DWORD **)(a1 + 16);
    *(_DWORD *)(a1 + 68) = v3;
  }
  if ( *(_DWORD **)v3 == v1 )
    v4 = a1 + 12;
  else
    v4 = a1 + 72;
  return (*(int (__fastcall **)(int, int))(v3 + 8))(a1, v4);
}
