int __fastcall sub_296340(int a1, int a2)
{
  int v2; // r5
  int v5; // r8
  int v6; // r7
  int v7; // r0
  int v8; // r5
  int v9; // r6
  int v10; // r9
  _BOOL4 v11; // r3
  char *v12; // r10
  char *v13; // r8

  v2 = a1;
  if ( !a1 )
    return v2;
  v5 = dword_4900D8;
  sub_29551C(a1, a2);
  v6 = dword_4900D8;
  sub_294884(1);
  v7 = v2;
  v8 = dword_4900D8;
  sub_295508(v7, a2);
  v9 = dword_4900D8;
  sub_294A00(1);
  v10 = dword_4900D8;
  v11 = v8 < dword_4900D8;
  if ( v8 == v9 )
    v11 = 1;
  if ( v11 )
  {
    sub_2945C8();
    v2 = -1;
    dword_4900D8 = v5;
    return v2;
  }
  v12 = sub_2912A8(v9, dword_4900D8);
  v13 = sub_2912A8(v8, v6);
  sub_2926F8();
  dword_4900D8 = v8;
  sub_294F5C(v8, v6);
  if ( v12 && *v12 )
    sub_294748(v12);
  dword_4900D8 = v9;
  sub_294F5C(v9, v10);
  if ( v13 )
  {
    if ( *v13 )
      sub_294748(v13);
  }
  dword_4900D8 = v6;
  sub_292748();
  sub_297758(v12);
  sub_297758(v13);
  return 0;
}
