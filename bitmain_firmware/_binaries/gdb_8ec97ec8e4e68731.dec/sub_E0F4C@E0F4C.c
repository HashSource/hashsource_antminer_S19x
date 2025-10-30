int __fastcall sub_E0F4C(int a1, int *a2, int *a3, int a4)
{
  unsigned int v4; // r5
  unsigned int v8; // r4
  int result; // r0
  int *v10; // r5
  int v11; // r1
  int *v12; // r4
  int v13; // r3

  v4 = a2[2];
  v8 = a2[3];
  for ( result = sub_E0EF4(a2, a3, a4); v4; v4 = v10[2] )
  {
    v11 = *(_DWORD *)(a1 + 24);
    if ( -991146299 * ((*(_DWORD *)(a1 + 28) - v11) >> 2) < v4 )
    {
      sub_E0EF4(0, a3, a4);
      __und(0);
    }
    v10 = (int *)(v11 + 52 * (v4 - 1));
    result = sub_E0EF4(v10, a3, a4);
  }
  for ( ; v8; v8 = v12[3] )
  {
    v13 = *(_DWORD *)(a1 + 24);
    if ( -991146299 * ((*(_DWORD *)(a1 + 28) - v13) >> 2) < v8 )
    {
      sub_E0EF4(0, a3, a4);
      __und(0);
    }
    v12 = (int *)(v13 + 52 * (v8 - 1));
    result = sub_E0EF4(v12, a3, a4);
  }
  return result;
}
