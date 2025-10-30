int __fastcall sub_549DC(int a1)
{
  int result; // r0
  char v3[2048]; // [sp+8h] [bp-804h] BYREF

  if ( a1 - 1 <= 1 )
  {
    *((_DWORD *)&unk_535EC8 + 3 * a1 - 2) = 0;
    *((_DWORD *)&unk_535EC8 + 3 * a1 - 3) = *((_DWORD *)&unk_535EC8 + 3 * a1 - 2);
    result = (unsigned __int8)*((_DWORD *)&unk_535EC8 + 3 * a1 - 3);
    *((_BYTE *)&unk_535EC8 + 12 * a1 - 4) = *((_DWORD *)&unk_535EC8 + 3 * a1 - 3);
  }
  else
  {
    strcpy(v3, "bad param\n");
    return sub_3B6AC(0, v3, 0, (int)v3);
  }
  return result;
}
