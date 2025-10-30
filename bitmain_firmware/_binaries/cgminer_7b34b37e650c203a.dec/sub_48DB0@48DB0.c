int __fastcall sub_48DB0(_DWORD *a1, _DWORD *a2)
{
  _BOOL4 v3; // r3
  int v4; // r9
  int i; // r0
  unsigned int *v8; // r3
  unsigned int v9; // r2
  int v10; // r0
  char *v11; // r4
  _DWORD *v12; // r8

  if ( !a1 )
    return -1;
  v3 = a2 == 0;
  if ( *a1 )
    v3 = 1;
  if ( v3 || *a2 )
    return -1;
  v4 = (int)(a2 + 2);
  for ( i = sub_45CEC((int)(a2 + 2)); i; i = sub_45D64(v4, (int)(v11 - 16)) )
  {
    v10 = sub_45D7C(i);
    v11 = (char *)v10;
    if ( !v10 )
      break;
    v12 = (_DWORD *)sub_45D84(v10 - 16);
    if ( !v12 )
      break;
    if ( !sub_480FC(a1, v11) )
    {
      v8 = v12 + 1;
      if ( v12[1] != -1 )
      {
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 + 1, v8) );
        __dmb(0xBu);
      }
      sub_48CF4(a1, v11, v12);
    }
    if ( *a2 )
      break;
  }
  return 0;
}
