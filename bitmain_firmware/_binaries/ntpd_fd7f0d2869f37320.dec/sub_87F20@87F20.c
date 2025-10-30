int *__fastcall sub_87F20(int *result, int a2)
{
  int v2; // r4
  unsigned __int8 *v3; // r7
  int v4; // r2
  int v5; // r1
  _DWORD *v6; // r7
  int v7; // r5
  _DWORD *v8[3]; // [sp+4h] [bp-14h] BYREF
  int v9; // [sp+10h] [bp-8h] BYREF

  v2 = (int)result;
  v3 = *(unsigned __int8 **)(a2 + 24);
  v8[0] = 0;
  v8[1] = 0;
  v9 = 0;
  v8[2] = (_DWORD *)byte_4;
  if ( (unsigned int)result > 0xF && !byte_108414 )
  {
    if ( *result < 0x20000 || !result[30] )
      sub_7E31C((int)off_B9488);
    if ( !v3 || (v4 = *v3) == 0 )
    {
      fprintf(stderr, off_B9500, result[7], *(_DWORD *)(a2 + 52));
      (*(void (__fastcall **)(int, int))(v2 + 84))(v2, 1);
      _assert_fail("0 == 1", "reset.c", 0x60u, "optionResetOpt");
    }
    v5 = v3[1];
    byte_108414 = 1;
    if ( v5 )
    {
      if ( sub_87008((int)result, (char *)v3, (int *)v8) )
      {
        fprintf(stderr, off_B94D0, *(_DWORD *)(v2 + 24), v3);
        (*(void (__fastcall **)(int, int))(v2 + 84))(v2, 1);
        _assert_fail("0 == 1", "reset.c", 0x79u, "optionResetOpt");
      }
      goto LABEL_10;
    }
    if ( v4 != 42 )
    {
      if ( sub_7F2C8((int)result, v4, v8, &v9) )
      {
        fprintf(stderr, off_B94CC, *(_DWORD *)(v2 + 24), *v3);
        (*(void (__fastcall **)(int, int))(v2 + 84))(v2, 1);
        _assert_fail("0 == 1", "reset.c", 0x71u, "optionResetOpt");
      }
LABEL_10:
      result = (int *)sub_7D680(v2, v8[0]);
      byte_108414 = 0;
      return result;
    }
    v6 = (_DWORD *)result[17];
    v7 = result[26];
    while ( 1 )
    {
      --v7;
      result = (int *)sub_7D680(v2, v6);
      if ( v7 <= 0 )
        break;
      v6 += 16;
    }
    byte_108414 = 0;
  }
  return result;
}
