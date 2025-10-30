void __fastcall sub_24E600(int a1, int a2, int *a3, int a4)
{
  int v6; // r0
  int v7; // r0
  char *v8; // r1
  char *v9; // r3
  bool v10; // zf
  char *v11; // r1
  int v12; // [sp+4h] [bp-8h] BYREF

  v6 = sub_273FA0(a4, "id");
  v7 = sub_274220(a1, *(_DWORD *)(v6 + 4));
  v8 = (char *)a3[4];
  v9 = (char *)a3[5];
  v12 = v7;
  if ( v8 == v9 )
  {
    sub_96B5C(a3 + 3, v8, &v12);
  }
  else
  {
    v10 = v8 == 0;
    v11 = v8 + 4;
    if ( !v10 )
      *((_DWORD *)v11 - 1) = v7;
    a3[4] = (int)v11;
  }
}
