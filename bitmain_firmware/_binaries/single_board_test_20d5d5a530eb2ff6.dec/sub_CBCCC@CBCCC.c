int __fastcall sub_CBCCC(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  bool v4; // zf

  v4 = a4 == 0;
  if ( a4 )
    v4 = a3 == 0;
  if ( v4 )
  {
    sub_D0048(16, 168, 67, "crypto/ec/ecp_smpl.c", 487);
    return 0;
  }
  else
  {
    sub_B81FC();
    return sub_C6A80(a1, a2, a3, a4);
  }
}
