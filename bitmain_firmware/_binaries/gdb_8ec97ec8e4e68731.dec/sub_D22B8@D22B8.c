int __fastcall sub_D22B8(int a1, int a2, int a3)
{
  _DWORD *v3; // r5
  int *v7; // r4
  int v8; // r3
  int v10; // r0

  v3 = (_DWORD *)dword_478348;
  if ( !dword_478348 )
    return 0;
  while ( 1 )
  {
    if ( v3[3] == 20 )
    {
      v7 = (int *)v3[7];
      if ( v7 )
        break;
    }
LABEL_3:
    v3 = (_DWORD *)v3[2];
    if ( !v3 )
      return 0;
  }
  while ( 1 )
  {
    if ( *((_BYTE *)v7 + 37) )
      goto LABEL_7;
    v8 = v7[4];
    if ( !v8 )
      break;
    if ( (*(int (__fastcall **)(int *, int, int, int))(*(_DWORD *)(v8 + 4) + 16))(v7, a1, a2, a3) )
      return 1;
LABEL_7:
    v7 = (int *)*v7;
    if ( !v7 )
      goto LABEL_3;
  }
  v10 = ((int (*)(void))loc_15C68)();
  return sub_D2364(v10);
}
