int __fastcall sub_EBD58(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int *v7; // r3
  int v8; // r5
  int result; // r0
  _DWORD *v10; // r3

  if ( !a1 )
    return -1;
  v7 = (int *)a1[1];
  v8 = *v7;
  if ( *v7 == 1 )
  {
    v10 = (_DWORD *)v7[1];
    if ( a3 )
      *a3 = *v10;
    if ( a2 )
    {
      if ( v10[1] )
        *a2 = sub_1272D4();
      else
        *a2 = -1;
    }
  }
  if ( a4 )
    *a4 = a1[2];
  result = v8;
  if ( a5 )
    *a5 = a1[3];
  return result;
}
