int __fastcall sub_68E94(int a1, int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  int result; // r0

  sub_68D20(a1, 0, 0);
  (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD, const char *, int))(*(_DWORD *)a1 + 32))(
    a1,
    0,
    0,
    0,
    "width",
    a2);
  (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD, const char *, int))(*(_DWORD *)a1 + 32))(
    a1,
    0,
    0,
    0,
    "alignment",
    a3);
  (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD, const char *, _DWORD))(*(_DWORD *)a1 + 40))(
    a1,
    0,
    0,
    0,
    "col_name",
    *a4);
  (*(void (__fastcall **)(int, _DWORD, int, int, const char *, _DWORD))(*(_DWORD *)a1 + 40))(
    a1,
    0,
    a2,
    a3,
    "colhdr",
    *a5);
  result = sub_259314(125, *(_DWORD *)(*(_DWORD *)(a1 + 36) - 4));
  *(_BYTE *)(a1 + 24) = 0;
  return result;
}
