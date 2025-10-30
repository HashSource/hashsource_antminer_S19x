int __fastcall sub_45660(int *a1, _DWORD *a2)
{
  float v2; // s0
  int v5; // r1
  int v6; // r3
  float *v7; // r2
  bool v8; // zf
  char v10[52]; // [sp+8h] [bp-34h] BYREF

  sub_1E938(v10, 0x30u);
  printf("%s ", v10);
  printf("%s : set freq[%4.2f] to matrix\n", "set_matrix", v2);
  snprintf(byte_643ADC, 0x100u, "set freq[%4.2f] to matrix", v2);
  sub_3CC5C((int)byte_643ADC, v10);
  v5 = dword_705300;
  if ( *(int *)(dword_705300 + 4) > 0 )
  {
    v6 = 0;
    do
    {
      v7 = (float *)*(unsigned __int8 *)(*a2 + v6);
      v8 = v7 == (float *)1;
      if ( v7 == (float *)1 )
        v7 = (float *)(*a1 + 4 * v6);
      ++v6;
      if ( v8 )
        *v7 = v2;
      v5 = dword_705300;
    }
    while ( *(_DWORD *)(dword_705300 + 4) > v6 );
  }
  return sub_3EA4C(*a1, *(_DWORD *)(v5 + 8), *(_DWORD *)(v5 + 12));
}
