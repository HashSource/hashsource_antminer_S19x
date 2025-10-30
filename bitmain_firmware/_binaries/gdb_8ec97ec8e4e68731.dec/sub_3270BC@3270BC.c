int __fastcall sub_3270BC(int *a1, int (__fastcall *a2)(int, int), int a3)
{
  int v4; // r5
  int v6; // r7
  int v7; // r4
  void *v8; // r6
  int v9; // r5
  int v10; // r0

  v4 = *a1;
  v6 = 100;
  v7 = 0;
  v8 = sub_93028(0x190u);
  while ( 1 )
  {
    for ( ; v4; v4 = *(_DWORD *)(v4 + 8) )
    {
      if ( v7 == v6 )
      {
        v6 = 2 * v7;
        v8 = sub_93050(v8, 8 * v7);
      }
      *((_DWORD *)v8 + v7++) = v4;
    }
    if ( !v7 )
      break;
    --v7;
    v9 = *((_DWORD *)v8 + v7);
    v10 = a2(v9, a3);
    if ( v10 )
    {
      v7 = v10;
      break;
    }
    v4 = *(_DWORD *)(v9 + 12);
  }
  free(v8);
  return v7;
}
