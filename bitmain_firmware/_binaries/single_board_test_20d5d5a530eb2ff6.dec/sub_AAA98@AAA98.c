int __fastcall sub_AAA98(int *a1, int *a2, int *a3)
{
  int v5; // r3
  int v6; // r2
  char *v7; // r1
  int v8; // r3
  int v9; // r2
  int result; // r0
  int v11; // r3
  int v12; // r2
  char *v13; // r1
  int v14; // r2

  if ( a2 )
  {
    v5 = *a2;
    if ( *a2 <= 0 )
      return 0;
    v6 = *a3;
    v7 = *(char **)v6;
    if ( !*(_DWORD *)v6 )
      return 0;
    if ( v5 == 1 )
    {
      v8 = *a1;
      v9 = 0;
    }
    else
    {
      v8 = *a1;
      v9 = *(_DWORD *)(v6 + 4);
    }
    *a1 = v8 & 0xFFFFFFFC | 1;
    result = sub_AA8D4(a1, v7, v9);
    v11 = result;
    if ( result > 0 )
    {
      *a3 += 4 * result;
      *a2 -= result;
      return result;
    }
  }
  else
  {
    v12 = *a3;
    v13 = *(char **)v12;
    if ( !*(_DWORD *)v12 )
      return 0;
    v14 = *(_DWORD *)(v12 + 4);
    *a1 = *a1 & 0xFFFFFFFC | 1;
    result = sub_AA8D4(a1, v13, v14);
    v11 = result;
    if ( result > 0 )
    {
      *a3 += 4 * result;
      return result;
    }
  }
  if ( v11 == -2 )
    return 0;
  if ( v11 )
    return v11;
  else
    return -1;
}
