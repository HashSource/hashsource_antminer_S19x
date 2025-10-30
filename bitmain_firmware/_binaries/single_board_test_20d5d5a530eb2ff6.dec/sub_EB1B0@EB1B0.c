int __fastcall sub_EB1B0(_DWORD *a1)
{
  int v1; // r6
  int i; // r7
  int v4; // r0
  char *j; // r4
  int v6; // r10
  unsigned __int8 *v7; // r4
  unsigned int v8; // r0
  unsigned int v9; // r0
  _BYTE *v10; // r4
  unsigned int v11; // t1
  unsigned __int8 *v12; // r4
  unsigned int v13; // r0
  char v15[512]; // [sp+0h] [bp-200h] BYREF

  v1 = 0;
  for ( i = 0; ; ++i )
  {
    v4 = sub_B6D58(a1, (int)v15, 512);
    if ( v4 <= 0 )
      break;
    v15[v4 - 1] = 0;
    if ( !sub_BDB10((unsigned __int8)v15[0], 7) )
      break;
    for ( j = v15; sub_BDB10((unsigned __int8)*j, 4) || *j == 46; ++j )
      ;
    v6 = (unsigned __int8)*j;
    if ( !*j )
      goto LABEL_13;
    *j = 0;
    v7 = (unsigned __int8 *)(j + 1);
    do
    {
      v8 = *v7;
      v6 = (int)v7++;
    }
    while ( sub_BDB10(v8, 8) );
    v9 = *(unsigned __int8 *)v6;
    v10 = (_BYTE *)v6;
    if ( !*(_BYTE *)v6 )
    {
      v6 = *(unsigned __int8 *)v6;
LABEL_13:
      if ( !v15[0] )
        return i;
      goto LABEL_14;
    }
    while ( !sub_BDB10(v9, 8) )
    {
      v11 = (unsigned __int8)*++v10;
      v9 = v11;
      if ( !v11 )
      {
        v1 = 0;
        goto LABEL_13;
      }
    }
    v1 = (unsigned __int8)*v10;
    if ( !*v10 )
      goto LABEL_13;
    *v10 = 0;
    v12 = v10 + 1;
    do
    {
      v13 = *v12;
      v1 = (int)v12++;
    }
    while ( sub_BDB10(v13, 8) );
    if ( !*(_BYTE *)v1 )
      v1 = 0;
    if ( !v15[0] )
      return i;
LABEL_14:
    if ( !sub_EB11C(v15, v6, v1) )
      return i;
  }
  return i;
}
