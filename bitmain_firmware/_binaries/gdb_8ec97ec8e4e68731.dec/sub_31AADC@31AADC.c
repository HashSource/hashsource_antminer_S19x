int __fastcall sub_31AADC(_DWORD *a1)
{
  unsigned __int8 *v1; // r1
  int v2; // r3
  bool v3; // zf
  int v4; // r2
  int *v6; // r5
  bool v7; // zf
  __int64 v8; // r2
  int v9; // r0
  int v10; // r2
  int result; // r0
  _DWORD *v12; // r2
  int v13; // r2
  int v14; // [sp+4h] [bp-8h] BYREF

  v1 = (unsigned __int8 *)a1[3];
  v14 = 0;
  v2 = *v1;
  v3 = v2 == 0;
  if ( *v1 )
    v3 = v2 == 69;
  v4 = v3;
  if ( v2 == 46 )
    v4 |= 1u;
  if ( v4 )
    return 0;
  v6 = &v14;
  do
  {
    v7 = v2 == 79;
    if ( v2 != 79 )
      v7 = v2 == 82;
    if ( v7 && v1[1] == 69 )
      break;
    v8 = (unsigned int)sub_319DD0((int)a1);
    if ( !(_DWORD)v8 )
      return 0;
    v9 = sub_313728(a1, 46, v8);
    *v6 = v9;
    v6 = (int *)(v9 + 12);
    if ( !v9 )
      return 0;
    v1 = (unsigned __int8 *)a1[3];
    v2 = *v1;
    v10 = v2 == 69;
    if ( !*v1 )
      v10 = 1;
    if ( v2 == 46 )
      v10 |= 1u;
  }
  while ( !v10 );
  result = v14;
  if ( !v14 )
    return 0;
  if ( !*(_DWORD *)(v14 + 12) )
  {
    v12 = *(_DWORD **)(v14 + 8);
    if ( *v12 == 39 )
    {
      v13 = v12[2];
      if ( *(_DWORD *)(v13 + 16) == 9 )
      {
        a1[11] -= *(_DWORD *)(v13 + 4);
        *(_DWORD *)(result + 8) = 0;
      }
    }
  }
  return result;
}
