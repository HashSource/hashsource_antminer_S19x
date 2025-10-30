int __fastcall sub_137520(unsigned int *a1, int a2, unsigned int a3, int a4)
{
  _DWORD *v4; // r5
  unsigned int v6; // r3
  int v8; // r3

  v4 = (_DWORD *)a1[5];
  switch ( a2 )
  {
    case 6:
      v8 = a3 >> 31;
      if ( !a4 )
        v8 = 1;
      if ( v8 )
        return 0;
      return sub_BB1C8(v4, a4, a3, 0, 0) != 0;
    case 12:
      return sub_BB1C8((_DWORD *)a1[5], 0, 0, a4, a1[1]) != 0;
    case 1:
      v6 = a1[2];
      if ( !v6 || sub_BB160((_DWORD *)a1[5], *(_DWORD **)(v6 + 24)) )
        return sub_BB1C8(v4, 0, 0, 0, 0) != 0;
      return 0;
    default:
      return -2;
  }
}
