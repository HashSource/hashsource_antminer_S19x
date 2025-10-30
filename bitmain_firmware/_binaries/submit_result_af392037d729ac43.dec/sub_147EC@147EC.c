int __fastcall sub_147EC(_DWORD *a1, int a2, _DWORD *a3)
{
  bool v3; // zf
  unsigned int *v5; // r3
  unsigned int v6; // r1
  unsigned int v7; // r1

  if ( !a1 || *a1 )
    goto LABEL_8;
  v3 = a2 == 0;
  if ( a2 )
    v3 = a3 == 0;
  if ( v3 )
  {
LABEL_8:
    if ( a3 && a3[1] != -1 )
    {
      v5 = a3 + 1;
      __dmb(0xFu);
      do
      {
        v6 = __ldrex(v5);
        v7 = v6 - 1;
      }
      while ( __strex(v7, v5) );
      if ( !v7 )
        sub_1427C(a3);
    }
    return -1;
  }
  else
  {
    sub_12774(a2, (int)a3);
    return 0;
  }
}
