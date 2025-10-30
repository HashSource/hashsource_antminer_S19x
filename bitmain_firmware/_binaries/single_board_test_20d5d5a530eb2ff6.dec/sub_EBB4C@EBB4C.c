int __fastcall sub_EBB4C(int a1, int a2, int a3, int a4, int a5, char a6)
{
  int v10; // r0
  int v11; // r0
  int v13; // r5
  int v14; // r1
  int v15; // r2
  int v16; // r0
  bool v17; // cc
  int v18; // r1

  v10 = sub_10E660(a2);
  if ( !sub_EBACC(a1, v10) )
    goto LABEL_8;
  v11 = sub_EB5A0();
  *(_DWORD *)(a1 + 16) = v11;
  if ( !v11 )
  {
LABEL_6:
    sub_EB5B4(v11);
    *(_DWORD *)(a1 + 16) = 0;
    return 0;
  }
  if ( a3 )
  {
    if ( !sub_10E8B4(a2, a3) )
    {
      sub_D0048(39, 110, 110, (int)"crypto/ocsp/ocsp_cl.c", 113);
      v11 = *(_DWORD *)(a1 + 16);
      goto LABEL_6;
    }
    if ( !sub_128700(OCSP_REQINFO_it, *(_DWORD *)(a1 + 16), 0, *(_DWORD *)(*(_DWORD *)(a1 + 16) + 8), a1, a3, a4) )
    {
LABEL_8:
      v11 = *(_DWORD *)(a1 + 16);
      goto LABEL_6;
    }
  }
  v13 = a6 & 1;
  if ( (a6 & 1) == 0 )
  {
    if ( !sub_EBB08(a1, a2) )
      goto LABEL_8;
    while ( 1 )
    {
      v17 = v13 < sub_10C010(a5, v14, v15);
      v18 = v13++;
      if ( !v17 )
        break;
      v16 = sub_10C01C(a5, v18);
      if ( !sub_EBB08(a1, v16) )
        goto LABEL_8;
    }
  }
  return 1;
}
