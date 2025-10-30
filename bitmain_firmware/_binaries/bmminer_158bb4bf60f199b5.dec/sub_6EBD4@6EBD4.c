int __fastcall sub_6EBD4(_DWORD *a1, char *a2, int a3)
{
  int v7; // r3
  int v8; // r3

  if ( a2 && sub_6DBFC(a2, -1) )
    return sub_6E894(a1, a2, a3);
  if ( a3 )
  {
    v7 = *(_DWORD *)(a3 + 4);
    if ( v7 != -1 )
    {
      v8 = v7 - 1;
      *(_DWORD *)(a3 + 4) = v8;
      if ( !v8 )
        sub_6E5DC((void **)a3);
    }
  }
  return -1;
}
