int __fastcall sub_210F6C(const char *a1, int a2, int a3)
{
  const char *v6; // r0
  int v7; // r7
  const char *v8; // r0
  int v9; // r4
  int v11; // [sp+4h] [bp-E0h] BYREF
  int v12; // [sp+8h] [bp-DCh] BYREF
  int v13; // [sp+Ch] [bp-D8h] BYREF
  _QWORD v14[13]; // [sp+10h] [bp-D4h] BYREF
  _QWORD v15[12]; // [sp+78h] [bp-6Ch] BYREF
  __int64 v16; // [sp+D8h] [bp-Ch]

  v6 = (const char *)sub_1B87A8(a3);
  if ( !j_strcmp(a1, v6) )
    return 0;
  if ( dword_489694 )
    sub_259858("  Trying %s\n", a1);
  ((void (__fastcall *)(int *, const char *, int, int))loc_16298C)(&v12, a1, dword_47ACA8, -1);
  if ( !v12 )
    return 0;
  if ( sub_2A89C8(v12, v15) || !v16 || sub_2A89C8(*(_DWORD *)(a3 + 36), v14) )
  {
    v7 = 0;
  }
  else
  {
    if ( v15[0] == v14[0] && v16 == v14[12] )
      goto LABEL_13;
    v7 = 1;
  }
  if ( !sub_162DD4(v12, &v11) )
  {
LABEL_13:
    v9 = 0;
    goto LABEL_14;
  }
  if ( v11 != a2 )
  {
    if ( v7 || sub_162DD4(*(_DWORD *)(a3 + 36), &v13) && v13 != v11 )
    {
      v8 = (const char *)sub_1B87A8(a3);
      sub_946B0("the debug information found in \"%s\" does not match \"%s\" (CRC mismatch).\n", a1, v8);
    }
    goto LABEL_13;
  }
  v9 = 1;
LABEL_14:
  if ( v12 )
  {
    ((void (*)(void))loc_1625A8)();
    return v9;
  }
  return v9;
}
