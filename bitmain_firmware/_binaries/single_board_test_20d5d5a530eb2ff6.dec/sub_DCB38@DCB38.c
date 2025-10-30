bool __fastcall sub_DCB38(int a1, const void *a2, size_t a3, _DWORD *a4)
{
  bool v4; // zf
  const void *v7; // [sp+Ch] [bp-10h]
  size_t v8; // [sp+10h] [bp-Ch]
  _DWORD *v9; // [sp+14h] [bp-8h]

  v4 = a2 == 0;
  if ( a2 )
    v4 = a4 == 0;
  if ( !v4 )
  {
    v9 = a4;
    v8 = a3;
    v7 = a2;
    sub_DCAD0(a1);
    a2 = v7;
    a3 = v8;
    a4 = v9;
  }
  return sub_DC8C4(a1, a2, a3, a4, 0);
}
