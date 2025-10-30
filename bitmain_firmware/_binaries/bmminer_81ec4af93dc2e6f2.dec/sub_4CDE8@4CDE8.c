int __fastcall sub_4CDE8(int a1, _DWORD *a2)
{
  int result; // r0
  _DWORD *v5; // r2
  _DWORD *v6; // r1
  int v7; // t1
  int v8; // r3
  char v9[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(v9, 0x800u, "[DEBUG] Get freq result, chain = %d.\n", a1);
    sub_3AF5C(4, v9, 0, v8);
  }
  result = sub_26540();
  if ( result )
  {
    v5 = &a2[result];
    v6 = a2;
    result = dword_530F10 + (a1 << 10);
    do
    {
      v7 = *(_DWORD *)(result + 4);
      result += 4;
      *v6++ = v7;
    }
    while ( v6 != v5 );
  }
  return result;
}
