int __fastcall sub_68DB8(int a1, int a2, int a3, const char *a4)
{
  sub_68D20(a1, a4, 0);
  (*(void (__fastcall **)(int, int, int, int, const char *, int))(*(_DWORD *)a1 + 32))(a1, -1, -1, -1, "nr_rows", a3);
  (*(void (__fastcall **)(int, int, int, int, const char *, int))(*(_DWORD *)a1 + 32))(a1, -1, -1, -1, "nr_cols", a2);
  return sub_68D20(a1, "hdr", 1);
}
