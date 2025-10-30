int __fastcall sub_70F8C(int a1, const char *a2)
{
  int v4; // r6
  size_t v5; // r0
  int v7; // r0
  _BYTE v8[10]; // [sp+8h] [bp-1Ch] BYREF
  _BYTE dest[2]; // [sp+12h] [bp-12h] BYREF

  v4 = sub_1946C8(**(_DWORD **)(a1 + 4), *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4), a2);
  if ( !v4 )
  {
    if ( strcmp("system__address", a2) )
      return v4;
    v7 = sub_70F54(a1);
    if ( !v7 )
      return v4;
    v4 = v7;
  }
  v5 = strlen(a2);
  qmemcpy(v8, "standard__", sizeof(v8));
  memcpy(dest, a2, v5 + 1);
  sub_A55C0(v8, v8);
  if ( *(_DWORD *)v8 && *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(*(_DWORD *)v8 + 32) >> 3)) == 8 )
    return *(_DWORD *)(*(_DWORD *)v8 + 24);
  return v4;
}
