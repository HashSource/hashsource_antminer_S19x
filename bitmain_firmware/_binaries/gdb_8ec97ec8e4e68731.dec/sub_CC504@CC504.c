int __fastcall sub_CC504(unsigned int a1)
{
  unsigned int v1; // lr
  unsigned int v2; // r5
  unsigned int v3; // r3
  int v4; // r1
  unsigned int v5; // r2
  bool v6; // cf
  _BOOL4 v7; // r2
  _BOOL4 v8; // r4
  int v9; // r2
  unsigned int v10; // r4
  unsigned int v11; // r2
  bool v12; // zf
  _BOOL4 v13; // r2
  _BOOL4 v14; // r5

  v1 = 0;
  v2 = dword_47836C;
  while ( 1 )
  {
    if ( v2 <= v1 )
      return 0;
    v3 = (v2 + v1) >> 1;
    v4 = dword_478368 + 4 * v3;
    v5 = *(_DWORD *)(*(_DWORD *)v4 + 52);
    v6 = a1 >= v5;
    if ( a1 == v5 )
      goto LABEL_19;
    v7 = a1 > v5;
    v8 = !v6;
    v9 = v7 - v8;
    if ( v9 == -1 )
      break;
LABEL_2:
    if ( v9 != 1 )
      goto LABEL_19;
    v1 = v3 + 1;
  }
  v10 = (v1 + v3) >> 1;
  if ( v1 >= v3 )
    return 0;
  while ( 1 )
  {
    v4 = dword_478368 + 4 * v10;
    v11 = *(_DWORD *)(*(_DWORD *)v4 + 52);
    v6 = a1 >= v11;
    v12 = a1 == v11;
    v13 = a1 > v11;
    v14 = !v6;
    v9 = v13 - v14;
    if ( v12 )
      break;
    if ( v9 != -1 )
    {
      v2 = v3;
      v3 = v10;
      goto LABEL_2;
    }
    v3 = v10;
    v6 = v1 >= v10;
    v10 = (v1 + v10) >> 1;
    if ( v6 )
      return 0;
  }
LABEL_19:
  while ( dword_478368 <= (unsigned int)(v4 - 4) && *(_DWORD *)(*(_DWORD *)(v4 - 4) + 52) == a1 )
    v4 -= 4;
  return v4;
}
