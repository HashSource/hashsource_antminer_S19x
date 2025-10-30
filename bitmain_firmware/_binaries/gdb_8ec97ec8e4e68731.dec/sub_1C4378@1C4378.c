int __fastcall sub_1C4378(_BYTE *a1, int *a2, _DWORD *a3)
{
  void *v5; // r9
  int *v6; // r5
  int v7; // r0
  int v8; // r4
  int v9; // r7
  int v11; // r1
  _BYTE *v12; // [sp+Ch] [bp-10h] BYREF
  int v13; // [sp+10h] [bp-Ch] BYREF
  char *v14; // [sp+14h] [bp-8h] BYREF

  v12 = a1;
  v5 = sub_92E28();
  dword_487CAC = 1;
  sub_1C3F08(&v14, &v12, 0, 0, 0, &v13);
  v6 = (int *)v14;
  sub_92E40((int)v5);
  dword_487CAC = 0;
  if ( !v6 )
    return 0;
  if ( dword_487CB0 )
  {
    v11 = dword_487CB4;
    v9 = 0;
    *a3 = dword_487CB0;
    dword_487CB4 = 0;
    *a2 = v11;
  }
  else if ( dword_46DAA0 == -1 || (v7 = sub_14CF44((int)v6, (unsigned int *)&v13), (*a2 = v7) == 0) )
  {
    v9 = 0;
  }
  else
  {
    v8 = sub_14CD90(v6, v13);
    *a2 = sub_327254(*a2);
    v9 = sub_26BC70(v8);
  }
  free(v6);
  return v9;
}
