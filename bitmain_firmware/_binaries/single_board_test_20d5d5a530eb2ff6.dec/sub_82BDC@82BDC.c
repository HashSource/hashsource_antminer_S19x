int __fastcall sub_82BDC(int a1, int a2, int a3, int a4)
{
  int *v8; // r0
  int v9; // r3
  int v10; // r6
  int v11; // r6
  int v12; // r3

  v8 = _errno_location();
  v9 = *(_DWORD *)(a1 + 124);
  *v8 = 0;
  if ( *(_DWORD *)(v9 + 240) )
  {
    sub_82B40(a1, 0);
    v9 = *(_DWORD *)(a1 + 124);
  }
  v10 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(v9 + 252) = 1;
  v11 = (*(int (__fastcall **)(int, int, _DWORD, int, int, int, int))(v10 + 56))(a1, 23, 0, a2, a3, 1, a4);
  v12 = *(_DWORD *)(a1 + 124);
  if ( v11 == -1 && *(_DWORD *)(v12 + 252) == 2 )
  {
    sub_95DA4(a1, 1);
    v11 = (*(int (__fastcall **)(int, int, _DWORD, int, int, int, int))(*(_DWORD *)(a1 + 4) + 56))(
            a1,
            23,
            0,
            a2,
            a3,
            1,
            a4);
    sub_95DA4(a1, 0);
  }
  else
  {
    *(_DWORD *)(v12 + 252) = 0;
  }
  return v11;
}
