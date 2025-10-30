int __fastcall sub_2AA92C(int a1, int a2, int a3, int a4)
{
  int v9; // r0
  unsigned int v10; // r1
  char *v11; // r4
  char v12; // r2
  unsigned int v13; // r3

  if ( (a4 & 0xC0000000) != 0 || (v9 = sub_324BF0(), (*(_DWORD *)(a1 + 8) = v9) == 0) )
  {
    ((void (__fastcall *)(int))loc_2A6C48)(6);
    return 0;
  }
  if ( 4 * a4 )
  {
    v10 = (4 * a4 + 7) & 0xFFFFFFF8;
    if ( !v10 )
    {
LABEL_6:
      v11 = (char *)sub_324C4C();
      goto LABEL_7;
    }
  }
  else
  {
    v10 = 8;
  }
  v13 = *(_DWORD *)(v9 + 4);
  if ( v13 < v10 )
    goto LABEL_6;
  v11 = *(char **)v9;
  *(_DWORD *)(v9 + 4) = v13 - v10;
  *(_DWORD *)v9 = &v11[v10];
LABEL_7:
  *(_DWORD *)a1 = v11;
  if ( v11 )
  {
    memset(v11, 0, 4 * a4);
    v12 = *(_BYTE *)(a1 + 24);
    *(_DWORD *)(a1 + 12) = a4;
    *(_DWORD *)(a1 + 20) = a3;
    *(_DWORD *)(a1 + 4) = a2;
    *(_BYTE *)(a1 + 24) = v12 & 0xFE;
    *(_DWORD *)(a1 + 16) = 0;
    return 1;
  }
  else
  {
    sub_324D50(*(void **)(a1 + 8));
    *(_DWORD *)(a1 + 8) = 0;
    ((void (__fastcall *)(int))loc_2A6C48)(6);
    return 0;
  }
}
