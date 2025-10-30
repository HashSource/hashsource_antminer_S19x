void *__fastcall sub_17CA84(int a1, int a2, char *path, int *a4)
{
  ssize_t v5; // r0
  size_t v6; // r4
  void *v7; // r5
  int *v9; // r0
  char v10[4096]; // [sp+0h] [bp-1000h] BYREF

  v5 = readlink(path, v10, 0x1000u);
  v6 = v5;
  if ( v5 < 0 )
  {
    v9 = _errno_location();
    v7 = 0;
    *a4 = sub_96090(*v9);
  }
  else
  {
    v7 = sub_93028(v5 + 1);
    memcpy(v7, v10, v6);
    *((_BYTE *)v7 + v6) = 0;
  }
  return v7;
}
