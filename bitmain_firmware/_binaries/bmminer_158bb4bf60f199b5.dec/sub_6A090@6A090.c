int **__fastcall sub_6A090(int **result, int *a2)
{
  int *v2; // r3
  int *v3; // r12
  int v4; // r2
  bool v5; // zf
  int v6; // r2

  v2 = (int *)a2[1];
  v3 = (int *)(result + 1);
  v4 = *v2;
  v5 = *v2 == (_DWORD)(result + 1);
  a2[1] = *v2;
  if ( !v5 )
    *(_DWORD *)(v4 + 8) = a2;
  v6 = a2[2];
  if ( v3 != v2 )
  {
    v2[2] = v6;
    v6 = a2[2];
  }
  if ( v6 )
  {
    result = *(int ***)v6;
    if ( *(int **)v6 == a2 )
      *(_DWORD *)v6 = v2;
    else
      *(_DWORD *)(v6 + 4) = v2;
  }
  else
  {
    *result = v2;
  }
  *v2 = (int)a2;
  if ( v3 != a2 )
    a2[2] = (int)v2;
  return result;
}
