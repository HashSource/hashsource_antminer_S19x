int __fastcall sub_2F672C(int *a1, void **a2, int a3)
{
  int v3; // r3
  void *v7; // r2
  void *v9; // r0

  v3 = *a1;
  v7 = *a2;
  if ( *a1 != 5 * (*a1 / 5u) )
    goto LABEL_2;
  v9 = sub_2AB3FC(v7, 4 * (v3 + 5));
  v7 = v9;
  if ( v9 )
  {
    v3 = *a1;
    *a2 = v9;
LABEL_2:
    *a1 = v3 + 1;
    *((_DWORD *)v7 + v3) = a3;
    return 1;
  }
  return 0;
}
