int __fastcall sub_3B5C4(int a1, int a2)
{
  int v4; // r2
  int v5; // r3
  int result; // r0
  int v7; // t1
  char v8[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    snprintf(v8, 0x800u, "[DEBUG] Get freq result, chain = %d.\n", a1);
    sub_47AB4(4, v8, 0);
  }
  v4 = a2 - 4;
  v5 = dword_1AEA80 + 312 * a1;
  result = dword_1AEA80 + 312 + 312 * a1;
  do
  {
    v7 = *(_DWORD *)(v5 + 4);
    v5 += 4;
    *(_DWORD *)(v4 + 4) = v7;
    v4 += 4;
  }
  while ( v5 != result );
  return result;
}
