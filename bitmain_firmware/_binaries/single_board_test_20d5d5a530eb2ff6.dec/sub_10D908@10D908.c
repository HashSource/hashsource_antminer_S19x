int __fastcall sub_10D908(int a1, int *a2, int *a3)
{
  char *v6; // r0
  int v8; // r0
  int (__fastcall *v9)(int, int *, int *, int, _DWORD); // r7
  int v10; // [sp+8h] [bp-Ch] BYREF
  int v11; // [sp+Ch] [bp-8h] BYREF

  if ( sub_B6C30(a1, (int)"    Signature Algorithm: ") <= 0 || sub_127D14(a1, *a2) <= 0 )
    return 0;
  v6 = sub_EAC84(*a2);
  if ( v6 )
  {
    if ( sub_EB3A8((int)v6, &v11, &v10) )
    {
      v8 = sub_AD928(0, v10);
      if ( v8 )
      {
        v9 = *(int (__fastcall **)(int, int *, int *, int, _DWORD))(v8 + 84);
        if ( v9 )
          return v9(a1, a2, a3, 9, 0);
      }
    }
  }
  if ( a3 )
    return sub_10D840(a1, a3, 9);
  return sub_B6C30(a1, (int)"\n") > 0;
}
