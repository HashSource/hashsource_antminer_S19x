int __fastcall sub_2A92F8(int *a1, int a2, int a3, int a4, int a5)
{
  int *v5; // r1
  int v8; // r0
  char v9; // r1

  v5 = &dword_48BBE0;
  if ( (int *)dword_48BBE4 == a1 )
  {
    v8 = *(_DWORD *)(dword_48BBE4 + 8);
  }
  else
  {
    if ( a5 == 1 )
      v9 = 0;
    else
      v9 = 2;
    v8 = sub_2A90F8(a1, v9);
  }
  if ( v8 )
    return j_fseeko64(v8, v5, a3, a4, a5);
  else
    return -1;
}
