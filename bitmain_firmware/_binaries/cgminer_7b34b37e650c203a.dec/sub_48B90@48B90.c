int __fastcall sub_48B90(_DWORD *a1, int a2, _DWORD *a3)
{
  unsigned int *v4; // r3
  unsigned int v5; // r1
  unsigned int v6; // r1
  _BOOL4 v7; // r4

  if ( !a1 || *a1 || (a2 ? (v7 = a3 == 0) : (v7 = 1), v7) )
  {
    if ( !a3 )
      return -1;
    if ( a3[1] == -1 )
      return -1;
    v4 = a3 + 1;
    __dmb(0xBu);
    do
    {
      v5 = __ldrex(v4);
      v6 = v5 - 1;
    }
    while ( __strex(v6, v4) );
    if ( v6 )
    {
      return -1;
    }
    else
    {
      sub_48A34(a3);
      return -1;
    }
  }
  else
  {
    sub_45D8C(a2, (int)a3);
    return 0;
  }
}
