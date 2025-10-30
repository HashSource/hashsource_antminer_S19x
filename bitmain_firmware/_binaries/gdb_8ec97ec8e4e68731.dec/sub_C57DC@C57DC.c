int __fastcall sub_C57DC(int *a1, int *a2)
{
  int v4; // r5
  int v5; // r0
  int *v6; // r4
  int (__fastcall *v7)(int *, int, int); // r3
  int v8; // r0
  int v9; // r3
  int result; // r0
  int *v11; // [sp+0h] [bp-8h] BYREF

  v4 = sub_15F7E8("No frame selected");
  v5 = sub_15DDFC(v4);
  sub_1CA3F8(&v11, v5);
  v6 = v11;
  if ( !v11
    || sub_33CAA0((int)(v11 + 7), "libstdcxx")
    || sub_33CAA0((int)(v6 + 1), "catch") && sub_33CAA0((int)(v6 + 1), "throw") && sub_33CAA0((int)(v6 + 1), "rethrow") )
  {
    sub_946E0("not stopped at a C++ exception catchpoint");
  }
  if ( (unsigned int)(*(int (__fastcall **)(int *, int))(*v6 + 12))(v6, v4) <= 1 )
    sub_946E0("C++ exception catchpoint has too few arguments");
  v7 = *(int (__fastcall **)(int *, int, int))(*v6 + 20);
  if ( a1 )
  {
    v8 = v7(v6, 0, v4);
    v9 = *v6;
    *a1 = v8;
    result = (*(int (__fastcall **)(int *, int, int))(v9 + 20))(v6, 1, v4);
    *a2 = result;
    if ( !*a1 )
      goto LABEL_13;
  }
  else
  {
    result = v7(v6, 1, v4);
    *a2 = result;
  }
  if ( !result )
LABEL_13:
    sub_946E0("error computing probe argument at c++ exception catchpoint");
  return result;
}
