int __fastcall sub_EFDCC(int result, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // r4
  char v10[44]; // [sp+Ch] [bp-2Ch] BYREF

  if ( !*(_BYTE *)(result + 36) )
  {
    v7 = result;
    sub_93170(v10, 0x14u, "%d", a6);
    return (*(int (__fastcall **)(int, int, int, int, int, char *))(*(_DWORD *)v7 + 40))(v7, a2, a3, a4, a5, v10);
  }
  return result;
}
