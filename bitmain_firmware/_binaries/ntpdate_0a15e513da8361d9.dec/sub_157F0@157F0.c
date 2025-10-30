char *__fastcall sub_157F0(_DWORD *a1, unsigned int a2, int a3, int a4)
{
  int v7; // r3
  char *result; // r0
  _DWORD *v10; // r0
  int v11; // r3
  int v12; // r2
  int v13; // r1
  int v14; // r3

  if ( !a1 || *a1 != 1281582695 )
    sub_10C38();
  v7 = a1[1];
  if ( *(_DWORD *)(v7 + 12) <= a2 )
    sub_10C38();
  if ( *(_DWORD *)(a3 + 4) >= *(_DWORD *)(v7 + 20) )
    sub_10C38();
  if ( !a4 )
    sub_10C38();
  result = sub_156C4((int)a1);
  if ( !result )
  {
    v10 = sub_9A68(0, 0x10u, 0, 0);
    if ( v10 )
    {
      v11 = a1[4];
      *v10 = a3;
      v10[1] = a4;
      v12 = *(_DWORD *)(v11 + 8 * a2);
      if ( !v12 )
        *(_DWORD *)(v11 + 8 * a2 + 4) = v10;
      v13 = *(_DWORD *)(a4 + 4);
      if ( v12 )
        *(_DWORD *)(v12 + 8) = v10;
      v10[3] = v12;
      v10[2] = 0;
      *(_DWORD *)(v11 + 8 * a2) = v10;
      if ( v13 == 1 )
        return 0;
      v14 = *(_DWORD *)(a4 + 8);
      if ( a1[7] < v14 )
        a1[7] = v14;
      if ( v14 )
      {
        return 0;
      }
      else
      {
        a1[9] = 1;
        return 0;
      }
    }
    else
    {
      return (_BYTE *)(&dword_0 + 1);
    }
  }
  return result;
}
