__int64 __fastcall configfs_create_file(__int64 a1, __int64 a2)
{
  __int64 v3; // x20
  unsigned int v4; // w19
  __int64 v5; // x22
  unsigned int dirent; // w19

  v3 = *(_QWORD *)(a1 + 72);
  v4 = *(_WORD *)(a2 + 16) & 0xFFF | 0x8000;
  v5 = *(_QWORD *)(v3 + 144);
  down_write(*(_QWORD *)(v3 + 48) + 176LL);
  dirent = configfs_make_dirent(v5, 0, a2, v4, 4);
  up_write(*(_QWORD *)(v3 + 48) + 176LL);
  return dirent;
}
