int __fastcall sub_10D908(int *a1, int *a2)
{
  int v2; // r3
  int v3; // r2
  unsigned int v4; // lr
  unsigned int v5; // r12
  int v7; // lr
  int v8; // r12
  int v9; // r3
  int v10; // r2

  v2 = *a1;
  v3 = *a2;
  v4 = *(_DWORD *)(*a1 + 4);
  v5 = *(_DWORD *)(*a2 + 4);
  if ( v4 == v5 )
  {
    v7 = *(_DWORD *)(v2 + 8);
    v8 = *(_DWORD *)(v3 + 8);
    v9 = *(unsigned __int8 *)(v2 + 20);
    v10 = *(unsigned __int8 *)(v3 + 20);
    if ( v7 == v8 || v9 || v10 )
    {
      return v9 - v10;
    }
    else if ( a1 < a2 )
    {
      return -1;
    }
    else
    {
      return 1;
    }
  }
  else if ( v4 >= v5 )
  {
    return 1;
  }
  else
  {
    return -1;
  }
}
