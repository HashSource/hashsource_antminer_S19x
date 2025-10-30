int __fastcall sub_4EDD4(int a1, int a2)
{
  int result; // r0
  int v5; // r2
  int v6; // r3
  int v7; // t1
  int v8; // r3
  char v9[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(v9, 0x800u, "[DEBUG] Get freq result, chain = %d.\n", a1);
    sub_3B6AC(4, v9, 0, v8);
  }
  result = sub_26A44();
  if ( result )
  {
    v5 = a2 - 4;
    v6 = dword_535D9C + (a1 << 10);
    result = dword_535D9C + 4 * (result + (a1 << 8));
    do
    {
      v7 = *(_DWORD *)(v6 + 4);
      v6 += 4;
      *(_DWORD *)(v5 + 4) = v7;
      v5 += 4;
    }
    while ( v6 != result );
  }
  return result;
}
