int __fastcall sub_CDE94(int a1, unsigned int a2, int a3)
{
  _DWORD *v3; // lr
  unsigned int v4; // r2
  int *v5; // r3
  unsigned int v6; // r4
  unsigned int v7; // r12

  v3 = (_DWORD *)dword_478348;
  if ( !dword_478348 )
    return 0;
  v4 = a2 + a3;
  while ( 1 )
  {
    if ( ((v3[3] - 7) & 0xFFFFFFFD) == 0 && v3[4] == 1 )
    {
      v5 = (int *)v3[7];
      if ( v5 )
        break;
    }
LABEL_3:
    v3 = (_DWORD *)v3[2];
    if ( !v3 )
      return 0;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)(v5[12] + 20) == a1 && *((_BYTE *)v5 + 39) )
    {
      v6 = v5[13];
      v7 = v6 + v5[14];
      if ( a2 >= v6 )
        v6 = a2;
      if ( v7 >= v4 )
        v7 = v4;
      if ( v6 < v7 )
        return 1;
    }
    v5 = (int *)*v5;
    if ( !v5 )
      goto LABEL_3;
  }
}
