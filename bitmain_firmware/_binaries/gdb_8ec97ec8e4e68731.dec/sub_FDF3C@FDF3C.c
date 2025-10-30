_DWORD *__fastcall sub_FDF3C(_DWORD *a1, char *a2, char *a3, _DWORD *a4, int a5)
{
  _DWORD *v5; // r4
  int v9; // r1
  _DWORD v11[3]; // [sp+10h] [bp-Ch] BYREF

  v5 = a4;
  if ( a4 )
  {
    while ( 1 )
    {
      sub_FD9C8(v11, a2, a3, v5, a5, 0, 0, 1);
      if ( v11[0] )
        break;
      v5 = (_DWORD *)v5[3];
      if ( !v5 )
        goto LABEL_6;
    }
    v9 = v11[1];
    *a1 = v11[0];
    a1[1] = v9;
    return a1;
  }
  else
  {
LABEL_6:
    *a1 = 0;
    a1[1] = 0;
    return a1;
  }
}
