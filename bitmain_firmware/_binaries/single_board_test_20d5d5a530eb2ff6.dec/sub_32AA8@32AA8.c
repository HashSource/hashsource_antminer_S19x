void sub_32AA8()
{
  _DWORD *i; // r1
  int j; // r3
  int k; // r3
  int m; // r3
  int n; // r3
  int ii; // r3
  int jj; // r2
  int kk; // r3

  for ( i = *(_DWORD **)(dword_61CB1C + 100); i; i = (_DWORD *)i[12] )
  {
    for ( j = i[6]; j; j = *(_DWORD *)(j + 128) )
      ;
    for ( k = i[7]; k; k = *(_DWORD *)(k + 28) )
      ;
    for ( m = i[8]; m; m = *(_DWORD *)(m + 36) )
      ;
    for ( n = i[9]; n; n = *(_DWORD *)(n + 28) )
      ;
    for ( ii = i[10]; ii; ii = *(_DWORD *)(ii + 12) )
      ;
    for ( jj = i[11]; jj; jj = *(_DWORD *)(jj + 104) )
    {
      for ( kk = *(_DWORD *)(jj + 100); kk; kk = *(_DWORD *)(kk + 112) )
        ;
    }
  }
}
