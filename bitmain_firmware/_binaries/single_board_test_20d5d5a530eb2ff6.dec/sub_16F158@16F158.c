bool __fastcall sub_16F158(int a1, int a2, int a3)
{
  char *v6; // r0
  char *v7; // r8
  const char *v8; // r2
  const char *v9; // r3
  const char *v10; // r1
  _BOOL4 result; // r0
  char v12[132]; // [sp+8h] [bp-84h] BYREF

  if ( a1
    && (*(_DWORD *)a1 || *(_DWORD *)(a1 + 8) || *(_DWORD *)(a1 + 4))
    && sub_B550C(a2, "%*snamingAuthority: ", a3, &byte_1A4198) > 0 )
  {
    if ( !*(_DWORD *)a1 )
      goto LABEL_12;
    v6 = sub_EAC84(*(_DWORD *)a1);
    v7 = sub_EAB40((unsigned int)v6);
    if ( sub_B550C(a2, "%*s  admissionAuthorityId: ", a3, &byte_1A4198) > 0 )
    {
      sub_EACFC(v12, 128, *(_DWORD *)a1, 1);
      if ( v7 )
      {
        v8 = v7;
        v9 = " (";
        v10 = ")";
      }
      else
      {
        v9 = &byte_1A4198;
        v8 = &byte_1A4198;
        v10 = &byte_1A4198;
      }
      if ( sub_B550C(a2, "%s%s%s%s\n", v8, v9, v12, v10) > 0 )
      {
LABEL_12:
        if ( !*(_DWORD *)(a1 + 8)
          || sub_B550C(a2, "%*s  namingAuthorityText: ", a3, &byte_1A4198) > 0
          && sub_128190(a2, *(int **)(a1 + 8)) > 0
          && sub_B550C(a2, (unsigned __int8 *)"\n") > 0 )
        {
          result = 1;
          if ( !*(_DWORD *)(a1 + 4) )
            return result;
          if ( sub_B550C(a2, "%*s  namingAuthorityUrl: ", a3, &byte_1A4198) > 0 && sub_128190(a2, *(int **)(a1 + 4)) > 0 )
            return sub_B550C(a2, (unsigned __int8 *)"\n") > 0;
        }
      }
    }
  }
  return 0;
}
