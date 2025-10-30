int __fastcall sub_3B13C(int a1, int a2)
{
  int v2; // r6
  int *v4; // r8
  int v5; // r4
  int v6; // r3
  int v8; // r0
  int v9; // r3

  v2 = a2;
  v4 = (int *)(a1 + 4);
  v5 = a2;
  if ( a2 )
    v2 = 1;
LABEL_3:
  if ( off_48A588 && ((int (*)(void))off_48A588)() )
    return -2;
  while ( 1 )
  {
    v6 = sub_3B048(v4, v2);
    if ( v5 > 0 )
      v5 -= v2;
    if ( v6 != -2 )
      break;
    if ( !v5 )
      return -2;
    if ( *(_DWORD *)(a1 + 8) == -1 )
      goto LABEL_3;
    sub_3AC6C(a1, 0);
    if ( off_48A588 && ((int (*)(void))off_48A588)() )
      return -2;
  }
  if ( v6 < 0 )
    return v6;
  while ( 1 )
  {
    v8 = (*(int (__fastcall **)(int, int))(*(_DWORD *)(a1 + 12) + 76))(a1, 0x2000);
    if ( v8 >= 0 )
      break;
    if ( *_errno_location() != 4 )
      return -1;
  }
  if ( !v8 )
    return -3;
  *(_DWORD *)(a1 + 28) = a1 + 33;
  v9 = *(unsigned __int8 *)(a1 + 32);
  *(_DWORD *)(a1 + 24) = v8 - 1;
  return v9;
}
