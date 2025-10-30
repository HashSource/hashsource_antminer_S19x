void *__fastcall sub_25C7F4(int a1, int a2, void *a3, int *a4, void *a5, int *a6)
{
  _DWORD *v10; // r0
  int v11; // r4
  _DWORD *v12; // r0
  int v13; // r5
  __int64 v14; // r0
  int v15; // r3
  __int64 v16; // r0
  int v17; // r3
  __int64 v18; // r2
  const void *v20; // r0
  const void *v21; // r0
  __int64 v22; // r2
  __int64 v23; // r0

  v10 = (_DWORD *)sub_26BC70(a1);
  v11 = sub_171258(v10);
  v12 = (_DWORD *)sub_26BC70(a2);
  v13 = sub_171258(v12);
  if ( !sub_173720((_DWORD *)v11) && !sub_173720((_DWORD *)v13) )
  {
    v14 = sub_94700(
            (int)"valarith.c",
            858,
            "%s: Assertion `%s' failed.",
            "void value_args_as_target_float(value*, value*, gdb_byte*, type**, gdb_byte*, type**)",
            "is_floating_type (type1) || is_floating_type (type2)");
    goto LABEL_19;
  }
  if ( sub_173720((_DWORD *)v11) && sub_173720((_DWORD *)v13) && **(char **)(v11 + 24) != **(char **)(v13 + 24) )
LABEL_19:
    sub_946E0("Mixing decimal floating types with other floating types is not allowed.", HIDWORD(v14));
  if ( !sub_173720((_DWORD *)v11) )
  {
    if ( !sub_1736DC((_DWORD *)v11) )
      goto LABEL_20;
    v15 = *(_DWORD *)(v11 + 24);
    *a4 = v13;
    if ( (*(_BYTE *)(v15 + 1) & 1) != 0 )
    {
      v16 = sub_26EB1C(a1);
      sub_25291C((int)a3, v13, v16, SHIDWORD(v16));
    }
    else
    {
      v23 = sub_26EB1C(a1);
      sub_2528D8((int)a3, v13, v23, SHIDWORD(v23));
    }
    if ( !sub_173720((_DWORD *)v13) )
      goto LABEL_11;
LABEL_15:
    *a6 = v13;
    v21 = (const void *)sub_26E978(a2);
    return memcpy(a5, v21, *(_DWORD *)(v13 + 20));
  }
  *a4 = v11;
  v20 = (const void *)sub_26E978(a1);
  memcpy(a3, v20, *(_DWORD *)(v11 + 20));
  if ( sub_173720((_DWORD *)v13) )
    goto LABEL_15;
LABEL_11:
  if ( !sub_1736DC((_DWORD *)v13) )
LABEL_20:
    sub_946E0(
      "Don't know how to convert from %s to %s.",
      *(const char **)(*(_DWORD *)(v11 + 24) + 8),
      *(const char **)(*(_DWORD *)(v13 + 24) + 8));
  v17 = *(_DWORD *)(v13 + 24);
  *a6 = v11;
  if ( (*(_BYTE *)(v17 + 1) & 1) != 0 )
  {
    v18 = sub_26EB1C(a2);
    return (void *)sub_25291C((int)a5, v11, v18, SHIDWORD(v18));
  }
  else
  {
    v22 = sub_26EB1C(a2);
    return (void *)sub_2528D8((int)a5, v11, v22, SHIDWORD(v22));
  }
}
