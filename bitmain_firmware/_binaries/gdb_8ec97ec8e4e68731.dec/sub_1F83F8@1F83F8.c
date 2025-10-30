int __fastcall sub_1F83F8(unsigned __int8 *a1)
{
  int v2; // r5
  int v4; // r1
  int v5; // r2
  unsigned __int8 *v6; // r3
  bool v7; // zf
  int v8; // r0
  _DWORD *v9; // r3
  unsigned __int8 *v10; // [sp+4h] [bp-4h] BYREF

  v10 = a1;
  if ( !a1 || (v2 = *a1) == 0 )
    sub_946E0("Command requires an argument.");
  if ( !strncmp((const char *)a1, "start", 5u)
    || !strncmp((const char *)a1, "begin", 5u)
    || !strncmp((const char *)a1, "end", 3u) )
  {
    return off_489B1C();
  }
  v7 = v2 == 39;
  if ( v2 != 39 )
    v7 = v2 == 34;
  if ( v7 )
  {
    if ( a1[strlen((const char *)a1) - 1] != v2 )
      sub_946E0("Unbalanced quotes: %s", (const char *)a1);
    return off_489B1C();
  }
  v8 = sub_5ADBC(&v10, v4, v5, v6);
  if ( !v8 )
    sub_946E0("goto-bookmark: invalid bookmark number '%s'.", (const char *)a1);
  v9 = (_DWORD *)dword_489360;
  if ( !dword_489360 )
    goto LABEL_19;
  if ( v8 != *(_DWORD *)(dword_489360 + 4) )
  {
    while ( 1 )
    {
      v9 = (_DWORD *)*v9;
      if ( !v9 )
        break;
      if ( v9[1] == v8 )
        return off_489B1C();
    }
LABEL_19:
    sub_946E0("goto-bookmark: no bookmark found for '%s'.", (const char *)a1);
  }
  return off_489B1C();
}
