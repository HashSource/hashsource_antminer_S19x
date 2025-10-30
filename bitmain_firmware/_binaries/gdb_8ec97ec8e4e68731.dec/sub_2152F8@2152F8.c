int __fastcall sub_2152F8(int result, int a2, int a3)
{
  _DWORD *i; // r4
  int v5; // r12
  int v6; // [sp+18h] [bp-Ch]

  v6 = result;
  for ( i = *(_DWORD **)(dword_487D2C + 36); i; i = (_DWORD *)*i )
  {
    v5 = i[33];
    if ( v5 )
      result = (*(int (__fastcall **)(_DWORD *, int, int, int))(*(_DWORD *)(v5 + 40) + 48))(i, v6, a2, a3);
  }
  return result;
}
