int __fastcall sub_12BCC0(int a1, _BYTE *a2, int *a3)
{
  char *v3; // lr
  bool v5; // zf
  __int64 v6; // r0
  int v7; // r8
  int v8; // r12
  char v9; // t1
  unsigned int v10; // r10

  v3 = a2 + 1;
  v5 = (*a2 & 0x80) == 0;
  v6 = *a2 & 0x7F;
  if ( v5 )
  {
    v7 = 1;
  }
  else
  {
    v8 = 0;
    do
    {
      v9 = *v3++;
      v8 += 7;
      v10 = v9 & 0x7F;
      v7 = v3 - a2;
      LODWORD(v6) = v6 | (v10 << v8);
      HIDWORD(v6) |= (v10 << (v8 - 32)) | (v10 >> (32 - v8));
    }
    while ( v9 < 0 );
  }
  *a3 = v7;
  return v6;
}
