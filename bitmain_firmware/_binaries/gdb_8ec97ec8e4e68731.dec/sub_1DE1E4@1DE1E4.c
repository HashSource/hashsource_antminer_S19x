int __fastcall sub_1DE1E4(_DWORD *a1, int a2, void *a3)
{
  _DWORD *v3; // r4
  int v4; // r5
  int result; // r0
  int v7; // r0

  if ( !a3 )
  {
LABEL_10:
    sub_94700(
      (int)"regcache.c",
      842,
      "%s: Assertion `%s' failed.",
      "void regcache::raw_write(int, const gdb_byte*)",
      "buf != NULL");
    v7 = ((int (__fastcall *)(_DWORD *, int))loc_1DD998)(v3, v4);
    sub_338FFC(v7);
  }
  v3 = a1;
  v4 = a2;
  ((void (*)(void))loc_1DD940)();
  if ( *((_BYTE *)v3 + 16) )
  {
    sub_94700(
      (int)"regcache.c",
      844,
      "%s: Assertion `%s' failed.",
      "void regcache::raw_write(int, const gdb_byte*)",
      "!m_readonly_p");
    goto LABEL_10;
  }
  result = ((int (__fastcall *)(_DWORD, int))loc_168308)(*(_DWORD *)*v3, v4);
  if ( !result
    && (((int (__fastcall *)(_DWORD *, int))loc_1DD834)(v3, v4) != 1
     || (result = memcmp(
                    (const void *)(v3[2] + *(_DWORD *)(*(_DWORD *)(*v3 + 16) + 4 * v4)),
                    a3,
                    *(_DWORD *)(*(_DWORD *)(*v3 + 20) + 4 * v4))) != 0) )
  {
    off_4899E4();
    sub_1DE1A0(v3, v4, a3);
    return sub_232300(v3, v4);
  }
  return result;
}
