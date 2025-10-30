int __fastcall sub_1340A0(void **a1, int *a2, int a3, int *a4, int ***a5)
{
  int *v8; // r3
  int v9; // r4
  int v10; // r5
  int v12; // r0

  if ( sub_1337FC((int *)a1, a2, a4, a5) )
  {
    if ( !a4[3] )
    {
      v8 = a4;
      v9 = 0;
LABEL_4:
      v10 = sub_134010(a1, (int)a1, a3, v8);
      sub_B895C(v9);
      return v10;
    }
    v12 = sub_B8A2C((int)a4);
    v9 = v12;
    if ( v12 )
    {
      v8 = (int *)v12;
      *(_DWORD *)(v12 + 12) = 0;
      goto LABEL_4;
    }
  }
  return 0;
}
