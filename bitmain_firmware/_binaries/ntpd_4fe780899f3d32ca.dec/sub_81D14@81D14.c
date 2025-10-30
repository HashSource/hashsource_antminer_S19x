int __fastcall sub_81D14(_DWORD *a1, int a2)
{
  int *v2; // r0
  _DWORD *v3; // r0
  int v4; // r2
  int v5; // t1
  int v6; // r5
  int *v7; // r0
  int v8; // r3
  int *v10; // r0

  if ( !a1 || *a1 != 6 )
  {
    v10 = _errno_location();
    v8 = 0;
    *v10 = 22;
    return v8;
  }
  v2 = (int *)a1[2];
  v5 = *v2;
  v3 = v2 + 2;
  v4 = v5;
  while ( 1 )
  {
    if ( v4-- <= 0 )
    {
      v6 = 22;
LABEL_8:
      v7 = _errno_location();
      v8 = 0;
      *v7 = v6;
      return v8;
    }
    if ( *v3 == a2 )
      break;
    ++v3;
  }
  if ( !v4 )
  {
    v6 = 2;
    goto LABEL_8;
  }
  return v3[1];
}
