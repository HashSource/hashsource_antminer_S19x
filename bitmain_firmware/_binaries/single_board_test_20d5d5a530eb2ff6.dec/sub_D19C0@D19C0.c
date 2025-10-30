int __fastcall sub_D19C0(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  void (__fastcall *v9)(int, int, int, int, int, int); // r6
  int v10; // r4
  int v11; // r10
  int v12; // r0
  int v14; // r0
  int v15; // r0

  v8 = sub_D8934(a1);
  v9 = *(void (__fastcall **)(int, int, int, int, int, int))(v8 + 252);
  v10 = v8;
  if ( v9 )
  {
    v11 = sub_D8AC0(a1);
    v12 = sub_D8924(a1);
    v9(a3, a2, a4, v10, v11, v12);
    return 1;
  }
  if ( sub_D8924(a1) )
  {
    v15 = sub_D8AC0(a1);
    sub_E1AB0(a3, a2, a4, v10, v15, *(_DWORD *)(v10 + 248));
    return 1;
  }
  v14 = sub_D8AC0(a1);
  sub_E1D38(a3, a2, a4, v10, v14, *(_DWORD *)(v10 + 248));
  return 1;
}
