int __fastcall sub_130A7C(int *a1, int a2, int *a3, int a4)
{
  _DWORD *v8; // r3

  if ( !*a3 || !a3[1] )
  {
    sub_D0048(3, 100, 107, (int)"crypto/bn/bn_blind.c", 141);
    return 0;
  }
  if ( a3[5] == -1 )
  {
    a3[5] = 0;
  }
  else if ( !sub_13099C(a3, a4) )
  {
    return 0;
  }
  if ( a2 && !sub_B89E4(a2, a3[1]) )
    return 0;
  v8 = (_DWORD *)a3[7];
  if ( v8 )
    return sub_B93C0(a1, (int)a1, *a3, v8, a4);
  else
    return sub_133F3C(a1, a1, *a3, a3[3], a4);
}
