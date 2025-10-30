int __fastcall sub_14764(_DWORD *a1, _DWORD *a2)
{
  int v4; // r0
  char *i; // r4
  _DWORD *v6; // r5
  int v7; // r0
  unsigned int *v8; // r3
  unsigned int v9; // r1
  int v10; // r0

  if ( !a1 || *a1 || !a2 || *a2 )
    return -1;
  v4 = sub_13E80(a2);
  for ( i = (char *)sub_13EBC(v4); i; i = (char *)sub_13EBC(v10) )
  {
    v6 = (_DWORD *)sub_13EC4((int)(i - 16));
    if ( !v6 )
      break;
    v7 = sub_13E38(a1, i);
    v8 = v6 + 1;
    if ( v7 )
    {
      if ( v6[1] != -1 )
      {
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 + 1, v8) );
        __dmb(0xFu);
      }
      sub_144B0(a1, i, v6);
    }
    v10 = sub_13EA8(a2, (int)(i - 16));
  }
  return 0;
}
