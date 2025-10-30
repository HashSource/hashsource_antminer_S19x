int __fastcall sub_2B087C(int a1, int a2, int a3, int a4)
{
  char v7[40]; // [sp+0h] [bp-28h] BYREF

  if ( a3 == -1 )
    return sub_2B086C(a4);
  if ( (word_438898[(unsigned __int8)a3] & 0x10) != 0 )
  {
    v7[0] = a3;
    v7[1] = 0;
  }
  else
  {
    sprintf(v7, "\\%03o", (unsigned __int8)a3);
  }
  sub_2A6A5C("%B:%d: Unexpected character `%s' in S-record file\n", a1, a2, v7);
  return ((int (__fastcall *)(int))loc_2A6C48)(17);
}
