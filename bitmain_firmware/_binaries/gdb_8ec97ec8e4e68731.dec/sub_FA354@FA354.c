int (__fastcall *__fastcall sub_FA354(int a1, int a2))(_DWORD)
{
  int (__fastcall *result)(_DWORD); // r0
  int v5; // lr
  int (__fastcall *v6)(_DWORD); // r5
  int v7; // r3
  _DWORD *v8; // r0
  size_t v9; // r1
  int v10; // [sp-4h] [bp-10h]

  sub_243C34(a1);
  if ( dword_47ACB0 )
  {
    if ( a1 )
      return (int (__fastcall *)(_DWORD))(*(int (__fastcall **)(int, int))(dword_47ACB0 + 20))(a1, a2);
    else
      return (int (__fastcall *)(_DWORD))(*(int (**)(void))(dword_47ACB0 + 40))();
  }
  else
  {
    result = (int (__fastcall *)(_DWORD))sub_94700(
                                           (int)"corefile.c",
                                           68,
                                           "%s: Assertion `%s' failed.",
                                           "void core_file_command(const char*, int)",
                                           "core_target != NULL");
    v10 = v5;
    if ( off_47ACB4 )
    {
      v6 = result;
      if ( dword_47AC9C )
      {
        v7 = dword_47AC9C + 1;
        v8 = (_DWORD *)dword_47ACA0;
        v9 = 4 * (dword_47AC9C + 1);
      }
      else
      {
        v8 = sub_93028(4u);
        v9 = 8;
        dword_47ACA0 = (int)v8;
        v7 = 2;
        *v8 = off_47ACB4;
        off_47ACB4 = sub_FA1E4;
      }
      dword_47AC9C = v7;
      dword_47ACA0 = (int)sub_93050(v8, v9);
      *(_DWORD *)(dword_47ACA0 + 4 * (dword_47AC9C + 0x3FFFFFFF)) = v6;
      __asm { POP             {R4-R6,PC} }
    }
    off_47ACB4 = result;
  }
  return result;
}
