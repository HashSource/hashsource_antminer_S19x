int __fastcall sub_146AB4(int a1, _DWORD *a2)
{
  int v3; // r4
  int v5; // r0
  int v6; // r12
  int v7; // r8
  int v8; // r7
  int result; // r0
  int i; // r4
  __int64 *v11; // r8
  _DWORD *v12; // r0
  __int64 v13; // r2
  int j; // r4
  int v15; // [sp+8h] [bp-Ch] BYREF
  unsigned int v16; // [sp+Ch] [bp-8h] BYREF

  v3 = *a2;
  v5 = sub_1B7250(*a2);
  v6 = *(_DWORD *)(v3 + 152);
  if ( v6 == -1 )
  {
    sub_94700((int)"dwarf2read.c", 13859, "sect_index_text not initialized");
    JUMPOUT(0x146C5C);
  }
  v7 = v5;
  v8 = *(_DWORD *)(*(_DWORD *)(v3 + 144) + 4 * v6);
  result = sub_12EF34((_WORD *)a1, (unsigned int *)&v15, &v16, a2, 0);
  if ( result )
  {
    if ( result != 1 )
    {
      v15 = ((int (__fastcall *)(int, int))loc_16A938)(v7, v8 + v15);
      v16 = ((int (__fastcall *)(int, unsigned int))loc_16A938)(v7, v8 + v16);
      sub_E637C(0, v15);
      for ( i = *(_DWORD *)(a1 + 12); i; i = *(_DWORD *)(i + 16) )
      {
        if ( !*(_WORD *)i )
          break;
        ((void (__fastcall *)(int, _DWORD *))loc_143F88)(i, a2);
      }
      sub_141A04((int *)a1, (int)a2);
      result = ((int (*)(void))loc_E6400)();
      v11 = (__int64 *)result;
      if ( dword_4788E8 || dword_4788EC )
      {
        v12 = sub_E5CB4(0, &dword_4788E8, *(char **)(result + 8), 0, *(_DWORD *)(result + 20), v16);
        result = sub_1300F8((unsigned __int16 *)a1, v12, v8, (int)a2);
      }
      v13 = *v11;
      dword_4788E8 = *(_DWORD *)v11;
      dword_4788EC = HIDWORD(v13);
    }
  }
  else
  {
    for ( j = *(_DWORD *)(a1 + 12); j; j = *(_DWORD *)(j + 16) )
    {
      if ( !*(_WORD *)j )
        break;
      result = ((int (__fastcall *)(int, _DWORD *))loc_143F88)(j, a2);
    }
  }
  return result;
}
