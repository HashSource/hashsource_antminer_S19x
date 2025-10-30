int __fastcall sub_26BFB8(_DWORD *a1)
{
  int (*v2)(void); // r1

  if ( *a1 == 6 && (v2 = *(int (**)(void))(a1[2] + 16)) != 0 )
    return v2();
  else
    return 0;
}
