int __fastcall sub_45200(int a1, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  int v5; // lr
  int v6; // r12

  v5 = a2[54];
  v6 = a2[55];
  a2[56] = a3;
  a2[57] = a4;
  if ( v5 == v6 )
    sub_39C88(a1, 0);
  return sub_3A258(__SPAIR64__(a3, (unsigned int)a2), a4);
}
