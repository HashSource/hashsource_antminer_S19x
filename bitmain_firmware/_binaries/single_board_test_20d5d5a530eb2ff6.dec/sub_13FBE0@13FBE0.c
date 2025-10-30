int __fastcall sub_13FBE0(_DWORD *a1)
{
  _BYTE *v2; // r4

  v2 = sub_E0740((void *)0x40);
  if ( v2 )
  {
    v2[40] = 1;
    *(_DWORD *)v2 = 2048;
    *((_DWORD *)v2 + 3) = -1;
    *((_DWORD *)v2 + 1) = 2;
    a1[9] = 2;
    a1[5] = v2;
    a1[8] = v2 + 32;
    return 1;
  }
  else
  {
    sub_D0048(5, 125, 65, (int)"crypto/dh/dh_pmeth.c", 54);
    return 0;
  }
}
