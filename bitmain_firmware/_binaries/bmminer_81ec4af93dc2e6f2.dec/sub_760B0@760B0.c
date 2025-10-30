int __fastcall sub_760B0(int a1, int a2, unsigned int a3, char a4, char a5)
{
  int v7; // r8
  int v10; // [sp+Ch] [bp-4h] BYREF

  if ( a3 > 1 )
    return -1;
  v7 = (unsigned __int8)asc_9B514[a3];
  sub_7740C(1, a1, a2, v7, &v10);
  LOBYTE(v10) = v10 & 0x88 | (16 * (a4 & 7)) | a5 & 7;
  return sub_751F0(a1, 0, a2, v7, v10);
}
