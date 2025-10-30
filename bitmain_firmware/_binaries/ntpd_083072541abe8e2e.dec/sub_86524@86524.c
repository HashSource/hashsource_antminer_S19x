int *__fastcall sub_86524(int *result, int a2)
{
  int v2; // r4
  unsigned __int8 *v3; // r7
  unsigned int v4; // r2
  int v5; // r1
  _DWORD *v6; // r7
  int v7; // r5
  _DWORD *v8[3]; // [sp+4h] [bp-14h] BYREF
  int v9; // [sp+10h] [bp-8h] BYREF

  v8[0] = 0;
  v8[1] = 0;
  v9 = 0;
  v8[2] = (_DWORD *)&byte_4;
  if ( (unsigned int)result > 0xF && !byte_1073F0 )
  {
    v2 = (int)result;
    if ( *result < 0x20000 || !result[30] )
      sub_7CEC0((int)off_B8484[0]);
    v3 = *(unsigned __int8 **)(a2 + 24);
    if ( !v3 || (v4 = *v3) == 0 )
    {
      fprintf(stderr, off_B84FC[0], result[7], *(_DWORD *)(a2 + 52));
      (*(void (__fastcall **)(int, int))(v2 + 84))(v2, 1);
      _assert_fail("0 == 1", "reset.c", 0x60u, "optionResetOpt");
    }
    v5 = v3[1];
    byte_1073F0 = 1;
    if ( v5 )
    {
      if ( sub_85A98((int)result, (char *)v3, (int *)v8) )
      {
        fprintf(stderr, off_B84CC[0], *(_DWORD *)(v2 + 24), v3);
        (*(void (__fastcall **)(int, int))(v2 + 84))(v2, 1);
        _assert_fail("0 == 1", "reset.c", 0x79u, "optionResetOpt");
      }
    }
    else
    {
      if ( v4 == 42 )
      {
        v6 = (_DWORD *)result[17];
        v7 = result[26];
        while ( 1 )
        {
          --v7;
          result = (int *)sub_7C2F0(v2, v6);
          if ( v7 <= 0 )
            break;
          v6 += 16;
        }
        byte_1073F0 = 0;
        return result;
      }
      if ( sub_7DFF0((int)result, v4, v8, &v9) )
      {
        fprintf(stderr, off_B84C8[0], *(_DWORD *)(v2 + 24), *v3);
        (*(void (__fastcall **)(int, int))(v2 + 84))(v2, 1);
        _assert_fail("0 == 1", "reset.c", 0x71u, "optionResetOpt");
      }
    }
    result = (int *)sub_7C2F0(v2, v8[0]);
    byte_1073F0 = 0;
  }
  return result;
}
