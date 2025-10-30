int __fastcall sub_EBC14(int a1)
{
  int v1; // r4

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
  {
    if ( sub_EAC84(*(_DWORD *)v1) == (char *)365 )
      return sub_AE368(*(int **)(v1 + 4), (int)OCSP_BASICRESP_it);
    sub_D0048(39, 111, 104, (int)"crypto/ocsp/ocsp_cl.c", 158);
  }
  else
  {
    sub_D0048(39, 111, 108, (int)"crypto/ocsp/ocsp_cl.c", 154);
  }
  return 0;
}
