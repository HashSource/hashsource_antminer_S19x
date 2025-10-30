int sub_3B0DC()
{
  int result; // r0
  int i; // [sp+Ch] [bp-8h]

  qword_86CD8 = 0;
  memset(a0_1, 0, 8u);
  result = sub_31028(0, a0_1, 8u, 0);
  for ( i = 0; i < dword_90E90; ++i )
    *(_QWORD *)(*(_DWORD *)(dword_90F34 + 4 * i) + 368) = 0;
  return result;
}
