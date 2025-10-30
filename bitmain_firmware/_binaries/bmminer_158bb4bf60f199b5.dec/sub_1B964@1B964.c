int __fastcall sub_1B964(int a1)
{
  double v1; // d0
  int v3; // r4
  const char *v4; // r0
  double v6; // [sp+0h] [bp-2Ch] BYREF
  char v7[32]; // [sp+8h] [bp-24h] BYREF

  v3 = 0;
  strcpy(v7, "total_rate");
  v6 = 0.0;
  do
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(dword_A0D68 + 4 * v3 + 4) == 1 )
      {
        v4 = (char *)&unk_241B00 + 32 * v3;
        if ( *v4 )
          break;
      }
      if ( ++v3 == 16 )
        goto LABEL_6;
    }
    ++v3;
    strtod(v4, 0);
    v1 = v6 + v1;
    v6 = v1;
  }
  while ( v3 != 16 );
LABEL_6:
  v6 = (double)(int)(v6 * 100.0) / 100.0;
  return sub_43F2C(a1, v7, &v6, 1);
}
