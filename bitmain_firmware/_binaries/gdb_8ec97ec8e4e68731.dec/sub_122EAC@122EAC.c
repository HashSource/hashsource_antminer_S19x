int __fastcall sub_122EAC(unsigned __int8 *a1, __int64 *a2, _BYTE *a3, int *a4)
{
  char *v5; // r6
  int v7; // r0
  int v8; // r5
  int v9; // r1
  int v10; // lr
  char v11; // t1
  unsigned int v13; // [sp+8h] [bp-Ch]

  v5 = a3 + 1;
  v7 = *a3 & 0x7F;
  if ( (*a3 & 0x80) != 0 )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      v11 = *v5++;
      v10 += 7;
      v8 = v5 - a3;
      v13 = v11 & 0x7F;
      v7 |= v13 << v10;
      v9 |= (v13 << (v10 - 32)) | (v13 >> (32 - v10));
    }
    while ( v11 < 0 );
  }
  else
  {
    v8 = 1;
  }
  *a4 = v8;
  return sub_1202A8(v7, *a2, *a1);
}
