_DWORD *__fastcall sub_A5858(_DWORD *a1, int a2, char *a3, int a4, char *a5)
{
  int v9; // r0
  int *v10; // r0
  int v11; // r1
  int v13; // r1
  int v14; // r0
  int v15[2]; // [sp+8h] [bp-8h] BYREF

  v9 = sub_C2668(a4);
  v10 = sub_A55C0(v15, a3, v9, a5, 0);
  if ( v15[0] )
    goto LABEL_2;
  if ( a5 == (char *)1 )
  {
    v13 = a4 ? sub_C233C(a4) : sub_16F654(v10);
    v14 = ((int (__fastcall *)(int, int, char *))loc_19470C)(a2, v13, a3);
    if ( v14 )
    {
      v15[0] = v14;
LABEL_2:
      v11 = v15[1];
      *a1 = v15[0];
      a1[1] = v11;
      return a1;
    }
  }
  *a1 = 0;
  a1[1] = 0;
  return a1;
}
