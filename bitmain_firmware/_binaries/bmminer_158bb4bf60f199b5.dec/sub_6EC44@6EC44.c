int __fastcall sub_6EC44(void **a1, unsigned int a2, void **a3)
{
  int v6; // r2
  char *v7; // r8
  char *v8; // r0
  int v9; // r7
  int v11; // r3
  char *v12; // r3
  char *v13; // r3

  if ( !a3 )
    return -1;
  if ( !a1 )
    goto LABEL_12;
  v6 = a3 == a1;
  if ( *a1 != (void *)1 )
    v6 |= 1u;
  if ( v6 || (unsigned int)a1[3] < a2 || (v7 = (char *)sub_6DCDC(a1, 1, 0)) == 0 )
  {
LABEL_12:
    v12 = (char *)a3[1];
    if ( v12 != (char *)-1 )
    {
      v13 = v12 - 1;
      a3[1] = v13;
      if ( !v13 )
        sub_6E5DC(a3);
    }
    return -1;
  }
  v8 = (char *)a1[4];
  v9 = 4 * (a2 + 1);
  if ( v8 == v7 )
  {
    memmove(&v8[v9], &v7[v9 - 4], 4 * ((int)a1[3] - a2));
  }
  else
  {
    memcpy(v8, v7, v9 - 4);
    memcpy((char *)a1[4] + v9, &v7[v9 - 4], 4 * ((int)a1[3] - a2));
    sub_6D518(v7);
  }
  v11 = (int)a1[3] + 1;
  *(_DWORD *)((char *)a1[4] + v9 - 4) = a3;
  a1[3] = (void *)v11;
  return 0;
}
