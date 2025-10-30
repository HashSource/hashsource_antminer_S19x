int __fastcall sub_1B8D0(int a1)
{
  int v1; // r3
  int v2; // r4
  int v3; // r12
  __int16 v4; // r1
  int v5; // t1
  __int16 v7; // [sp+6h] [bp-22h] BYREF
  char v8[32]; // [sp+8h] [bp-20h] BYREF

  v1 = dword_A0D68;
  v2 = 0;
  v3 = dword_A0D68 + 12918;
  v7 = 0;
  strcpy(v8, "total_acn");
  v4 = 0;
  do
  {
    v5 = *(_DWORD *)(v1 + 4);
    v1 += 4;
    ++v3;
    if ( v5 == 1 )
    {
      v2 = 1;
      v4 += *(unsigned __int8 *)(v3 - 1);
    }
  }
  while ( v1 != dword_A0D68 + 64 );
  if ( v2 )
    v7 = v4;
  return sub_43D8C(a1, v8, &v7, 1);
}
