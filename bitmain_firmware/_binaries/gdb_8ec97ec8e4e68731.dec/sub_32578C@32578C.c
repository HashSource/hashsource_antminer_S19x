int __fastcall sub_32578C(_DWORD *a1, int a2)
{
  int v3; // r5
  int v4; // r5
  int *v6; // r6
  int v7; // r7
  int v8; // [sp+0h] [bp-Ch]
  int v9; // [sp+4h] [bp-8h]

  if ( (int)a1[7] > 0 || (*a1 & 2) == 0 || (int)a1[3] > 0 || a1[4] )
  {
    *_errno_location() = 22;
    return 0;
  }
  else
  {
    v3 = a2;
    if ( a2 )
      v3 = 1;
    if ( (*(int (**)(void))(a1[17] + 20))() < 0 )
      return 0;
    v4 = (*(int (__fastcall **)(_DWORD *, int, int))(a1[17] + 28))(a1, v9, v3);
    if ( v4 )
    {
      a1[3] = v8;
      return v4;
    }
    v6 = _errno_location();
    v7 = *v6;
    (*(void (__fastcall **)(_DWORD *))(a1[17] + 12))(a1);
    (*(void (__fastcall **)(_DWORD *))(a1[17] + 12))(a1);
    *v6 = v7;
    return 0;
  }
}
