int __fastcall sub_77C38(int a1, int a2, unsigned int a3, char a4, char a5)
{
  int v7; // r9
  int v10; // [sp+Ch] [bp-8h] BYREF

  if ( a3 > 1 )
    return -1;
  v7 = (unsigned __int8)asc_1A60AC[a3];
  sub_78850(1, a1, a2, v7, &v10);
  LOBYTE(v10) = v10 & 0x88 | (16 * (a4 & 7)) | a5 & 7;
  return sub_771FC(a1, 0, a2, v7, v10);
}
