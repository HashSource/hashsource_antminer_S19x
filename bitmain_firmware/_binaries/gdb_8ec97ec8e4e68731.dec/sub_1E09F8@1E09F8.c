int __fastcall sub_1E09F8(int a1)
{
  int v2; // r0
  int v3; // r5
  _DWORD *v5; // r0
  _BYTE v6[20]; // [sp+0h] [bp-14h] BYREF

  v2 = sub_B894C(a1);
  v3 = v2;
  if ( a1 )
  {
    sub_25689C(v6);
    if ( !sub_2568D4(v6, a1, "w") )
      sub_258B04("maintenance print reggroups");
    ((void (__fastcall *)(int, _BYTE *))loc_1E059C)(v3, v6);
    return sub_256514(v6);
  }
  else
  {
    v5 = (_DWORD *)sub_242F8C(v2);
    return ((int (__fastcall *)(int, _DWORD))loc_1E059C)(v3, *v5);
  }
}
