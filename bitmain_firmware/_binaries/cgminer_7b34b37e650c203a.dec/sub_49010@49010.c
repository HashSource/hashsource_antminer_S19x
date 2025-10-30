int __fastcall sub_49010(_DWORD *a1, _DWORD *a2)
{
  _BOOL4 v3; // r3
  int v4; // r9
  int i; // r0
  unsigned int *v7; // r3
  unsigned int v8; // r2
  int v9; // r0
  char *v10; // r4
  _DWORD *v11; // r6

  if ( !a1 )
    return -1;
  v3 = a2 == 0;
  if ( *a1 )
    v3 = 1;
  if ( v3 || *a2 )
    return -1;
  v4 = (int)(a2 + 2);
  for ( i = sub_45CEC((int)(a2 + 2)); i; i = sub_45D64(v4, (int)(v10 - 16)) )
  {
    v9 = sub_45D7C(i);
    v10 = (char *)v9;
    if ( !v9 )
      break;
    v11 = (_DWORD *)sub_45D84(v9 - 16);
    if ( !v11 )
      break;
    if ( sub_480FC(a1, v10) )
    {
      v7 = v11 + 1;
      if ( v11[1] != -1 )
      {
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 + 1, v7) );
        __dmb(0xBu);
      }
      sub_48CF4(a1, v10, v11);
    }
    if ( *a2 )
      break;
  }
  return 0;
}
