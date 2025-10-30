int __fastcall sub_215390(int result, int a2, int a3)
{
  _DWORD *v3; // r4
  int v4; // r8
  int v7; // r12

  v3 = *(_DWORD **)(dword_487D2C + 36);
  if ( v3 )
  {
    v4 = result;
    do
    {
      v7 = v3[33];
      result = (int)v3;
      if ( v7 )
        result = (*(int (__fastcall **)(_DWORD *, int, int, int))(*(_DWORD *)(v7 + 40) + 60))(v3, v4, a2, a3);
      v3 = (_DWORD *)*v3;
    }
    while ( v3 );
  }
  return result;
}
