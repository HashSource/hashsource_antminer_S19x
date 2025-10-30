int __fastcall sub_54260(int result)
{
  char v1[2048]; // [sp+8h] [bp-804h] BYREF

  if ( result - 1 <= 1 )
  {
    *((_DWORD *)&unk_531094 + 2 * result - 2) = 0;
    *((_BYTE *)&unk_531094 + 8 * result - 4) = 0;
  }
  else
  {
    strcpy(v1, "bad param\n");
    return sub_3AF5C(0, v1, 0, (int)v1);
  }
  return result;
}
