int __fastcall sub_15C2C(int a1)
{
  _DWORD *v2; // r4
  int v3; // r5
  int v4; // r0

  v2 = *(_DWORD **)(a1 + 28);
  v3 = 0;
  while ( v2 )
  {
    v4 = (*(int (__fastcall **)(_DWORD *))(*(_DWORD *)(a1 + 4) + 24))(v2);
    v2 = (_DWORD *)*v2;
    v3 += v4;
  }
  return v3;
}
