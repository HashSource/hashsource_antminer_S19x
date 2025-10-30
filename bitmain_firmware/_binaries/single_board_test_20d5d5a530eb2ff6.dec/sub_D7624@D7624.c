int __fastcall sub_D7624(int a1, char *a2, char *a3, size_t a4)
{
  int v8; // r0
  size_t v9; // r4
  _DWORD *v10; // r5
  size_t v11; // r8
  char *v13; // r4
  unsigned __int8 v14[16]; // [sp+0h] [bp-10h] BYREF

  v8 = sub_D8934(a1);
  v9 = *(_DWORD *)(v8 + 1308);
  v10 = (_DWORD *)v8;
  if ( v9 == -1 )
  {
    if ( sub_D8924(a1) )
    {
      sub_E0468((int)(v10 + 304), a3, a4);
      sub_F5A20(v10, a4, a3, a2);
    }
    else
    {
      sub_F5A20(v10, a4, a3, a2);
      sub_E0468((int)(v10 + 304), a2, a4);
    }
  }
  else
  {
    v11 = v9 + 16;
    if ( v9 + 16 != a4 )
      return 0;
    if ( sub_D8924(a1) )
    {
      sub_E0468((int)(v10 + 304), a3, v9);
      if ( a3 != a2 )
        memcpy(a2, a3, v9);
      v13 = &a2[v9];
      sub_E0520(v13, v10 + 304);
      memcpy(v10 + 304, v10 + 281, 0x5Cu);
      sub_E0468((int)(v10 + 304), v13, 0x10u);
      sub_E0520(v13, v10 + 304);
      sub_F5A20(v10, v11, a2, a2);
    }
    else
    {
      sub_F5A20(v10, v9 + 16, a3, a2);
      sub_E0468((int)(v10 + 304), a2, v9);
      sub_E0520(v14, v10 + 304);
      memcpy(v10 + 304, v10 + 281, 0x5Cu);
      sub_E0468((int)(v10 + 304), v14, 0x10u);
      sub_E0520(v14, v10 + 304);
      if ( sub_BC33C((unsigned __int8 *)&a2[v9], v14, 16) )
        return 0;
    }
  }
  v10[327] = -1;
  return 1;
}
