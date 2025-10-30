_DWORD *__fastcall sub_1B2488(_DWORD *a1, char *s2)
{
  unsigned int v3; // r2
  char *v5; // r0
  unsigned int v6; // r1
  int v7; // r12
  unsigned int v8; // t1
  _DWORD *v9; // r8
  unsigned int v10; // r7
  int v11; // r4

  v3 = (unsigned __int8)*s2;
  if ( *s2 )
  {
    v5 = s2;
    v6 = 0;
    do
    {
      v7 = byte_438798[v3];
      v8 = (unsigned __int8)*++v5;
      v3 = v8;
      v6 = 67 * v6 - 113 + v7;
    }
    while ( v8 );
    v3 = v6 % 0x7F7;
  }
  v9 = *(_DWORD **)(dword_487D2C + 36);
  if ( v9 )
  {
    v10 = v3 + 24;
    while ( 1 )
    {
      v11 = *(_DWORD *)(v9[10] + 4 * v10);
      if ( v11 )
        break;
LABEL_12:
      v9 = (_DWORD *)*v9;
      if ( !v9 )
        goto LABEL_13;
    }
    while ( strcmp(*(const char **)v11, s2) )
    {
      v11 = *(_DWORD *)(v11 + 36);
      if ( !v11 )
        goto LABEL_12;
    }
    *a1 = v11;
    a1[1] = v9;
    return a1;
  }
  else
  {
LABEL_13:
    *a1 = 0;
    a1[1] = 0;
    return a1;
  }
}
