int __fastcall sub_749DC(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // r0
  unsigned int v3; // lr
  char *v4; // r12
  unsigned int v5; // r2
  char v6; // r3
  int v7; // t1
  int v8; // r5
  unsigned int v10; // r3
  int v11; // r12
  char *v12; // r3
  char *v13; // r0

  if ( *a1 == 2 )
  {
    v2 = a1 + 1;
    v3 = 4;
  }
  else
  {
    if ( *a1 != 10 )
      return 27;
    v2 = a1 + 1;
    v3 = 16;
  }
  v4 = (char *)v2 - 1;
  v5 = 0;
  while ( 1 )
  {
    v7 = (unsigned __int8)*++v4;
    v6 = v7;
    if ( v7 != 255 )
      break;
    if ( v3 == ++v5 )
      goto LABEL_7;
  }
  if ( v3 <= v5 )
  {
    v3 = v5;
LABEL_7:
    v8 = 0;
LABEL_8:
    *a2 = v8 + 8 * v3;
    return 0;
  }
  v8 = 0;
  if ( v6 < 0 )
  {
    do
    {
      v6 *= 2;
      ++v8;
    }
    while ( v6 < 0 && v8 != 8 );
  }
  if ( !v6 )
  {
    v10 = v5 + 1;
    if ( v3 <= v5 + 1 )
    {
LABEL_23:
      v3 = v5;
      goto LABEL_8;
    }
    v11 = *((unsigned __int8 *)v2 + v10);
    v12 = (char *)v2 + v10;
    if ( !v11 )
    {
      v13 = (char *)v2 + v3 - 1;
      while ( v12 != v13 )
      {
        if ( *++v12 )
          return 37;
      }
      goto LABEL_23;
    }
  }
  return 37;
}
