int __fastcall sub_51B74(int a1, int a2, int a3, int a4)
{
  int v4; // r12
  _BYTE *v5; // r5
  int v6; // r4
  unsigned __int8 *v7; // lr
  int v8; // t1
  char *v9; // r2

  v4 = *(_DWORD *)(a1 + 12);
  if ( a2 >= v4 )
  {
    v5 = *(_BYTE **)(a1 + 4);
  }
  else
  {
    v5 = *(_BYTE **)a1;
    *(_DWORD *)(a1 + 4) = *(_DWORD *)a1;
  }
  if ( a2 < v4 )
  {
    v4 = 0;
    *(_DWORD *)(a1 + 12) = 0;
  }
  if ( a2 > v4 )
  {
    v6 = (unsigned __int8)*v5;
    if ( !*v5 )
    {
LABEL_16:
      v9 = 0;
      return (unsigned __int8)byte_9A7DC[(_DWORD)v9];
    }
    v7 = v5 + 1;
    while ( 1 )
    {
      if ( v6 == 44 )
        ++v4;
      *(_DWORD *)(a1 + 4) = v7;
      *(_DWORD *)(a1 + 12) = v4;
      v5 = v7;
      if ( a2 <= v4 )
        break;
      v8 = *v7++;
      v6 = v8;
      if ( !v8 )
        goto LABEL_16;
    }
  }
  if ( !*v5 || ((unsigned __int8)*v5 != a3) == (a4 == 0) )
    goto LABEL_16;
  v9 = (char *)&dword_0 + 1;
  return (unsigned __int8)byte_9A7DC[(_DWORD)v9];
}
