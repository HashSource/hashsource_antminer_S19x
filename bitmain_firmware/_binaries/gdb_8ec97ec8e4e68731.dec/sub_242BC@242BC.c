int __fastcall sub_242BC(int a1, unsigned int **a2, int a3)
{
  int v6; // r7
  unsigned int *v7; // r0
  int v9; // r6
  int v10; // r4
  int v11; // r2
  unsigned int v12; // r0
  unsigned int v13; // r2

  v6 = sub_15ECB4(a1);
  v7 = *a2;
  if ( !*a2 )
  {
    v7 = sub_24218(a1);
    *a2 = v7;
  }
  switch ( a3 )
  {
    case 15:
      v12 = ((int (__fastcall *)(int, int))loc_15EBBC)(a1, 14);
      v13 = sub_19DB0(v6, v12);
      return sub_160FC0(a1, 15, v13, 0);
    case 13:
      return sub_160FC0(a1, 13, *v7, 0);
    case 25:
      if ( *(_DWORD *)(sub_163E78(v6) + 32) )
        v9 = 0x1000000;
      else
        v9 = 32;
      v10 = sub_15ECAC(a1, 25);
      if ( (((int (__fastcall *)(int, int))loc_15EBBC)(a1, 14) & 1) != 0 )
        v11 = v10 | v9;
      else
        v11 = v10 & ~v9;
      return sub_160FC0(a1, 25, v11, 0);
    default:
      return sub_250D7C(a1, v7[3], a3);
  }
}
