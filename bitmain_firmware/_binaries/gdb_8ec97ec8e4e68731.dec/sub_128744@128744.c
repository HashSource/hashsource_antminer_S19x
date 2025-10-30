char *__fastcall sub_128744(int a1, char *a2)
{
  _DWORD *v4; // r6
  _DWORD *v5; // r2
  int v7; // [sp+4h] [bp-4h] BYREF

  v4 = *(_DWORD **)(a1 + 4);
  while ( 1 )
  {
    v5 = sub_11CD2C(a2, &v7, v4);
    if ( !v5 )
      break;
    a2 = sub_1282F4(a1, &a2[v7], (int)v5);
  }
  return &a2[v7];
}
