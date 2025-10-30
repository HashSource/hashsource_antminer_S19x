int __fastcall sub_FD57C(int a1, int a2, char *s, _DWORD *a4, int a5)
{
  int v9; // r0
  int v10; // r3
  int v11; // r2
  _BOOL4 v13; // r3
  int v14; // r1
  int v15; // r0
  int v16; // r1
  __int64 v17; // [sp+8h] [bp-14h] BYREF
  _DWORD v18[3]; // [sp+10h] [bp-Ch] BYREF

  if ( strchr(s, 60) || strchr(s, 40) || !sub_338BD4(s, "::") )
  {
    v9 = sub_21CFB4(&v17, s, a4, a5);
    v10 = v17;
    if ( (_DWORD)v17 )
      goto LABEL_3;
  }
  else
  {
    v9 = sub_94700(
           (int)"cp-namespace.c",
           177,
           "%s: Assertion `%s' failed.",
           "block_symbol cp_lookup_bare_symbol(const language_defn*, const char*, const block*, domain_enum, int)",
           "strstr (name, \"::\") == NULL");
  }
  v13 = a5 == 1;
  if ( !a2 )
    v13 = 0;
  if ( !v13
    || (!a4 ? (v14 = sub_16F654(v9)) : (v14 = sub_C233C(a4)),
        (v15 = ((int (__fastcall *)(int, int, char *))loc_19470C)(a2, v14, s)) == 0) )
  {
    sub_21D720(&v17, s, a4, a5);
    v10 = v17;
    if ( !(_DWORD)v17 )
    {
      if ( a2
        && (sub_21CDC4(v18, a2, a4), v18[0])
        && (v16 = sub_171258(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v18[0] + 24) + 24) + 20)),
            *(_DWORD *)(*(_DWORD *)(v16 + 24) + 8)) )
      {
        sub_FD308(&v17, v16, s, (int)a4, a5);
        *(_QWORD *)a1 = v17;
      }
      else
      {
        *(_DWORD *)a1 = 0;
        *(_DWORD *)(a1 + 4) = 0;
      }
      return a1;
    }
LABEL_3:
    v11 = HIDWORD(v17);
    *(_DWORD *)a1 = v10;
    *(_DWORD *)(a1 + 4) = v11;
    return a1;
  }
  *(_DWORD *)a1 = v15;
  *(_DWORD *)(a1 + 4) = 0;
  return a1;
}
