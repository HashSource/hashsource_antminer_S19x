char *__fastcall sub_C09E0(char *a1, unsigned int a2)
{
  int v4; // r3
  int v5; // r2
  char *result; // r0
  unsigned int v7; // r3
  char v8; // r1
  int v9; // r2

  if ( a2 > 0xFF )
    sub_946E0("GDB bug: ax-general.c (ax_pick): stack depth out of range");
  sub_C0878(a1, 1);
  v4 = *((_DWORD *)a1 + 1);
  v5 = *(_DWORD *)a1;
  *((_DWORD *)a1 + 1) = v4 + 1;
  *(_BYTE *)(v5 + v4) = 50;
  result = sub_C0878(a1, a2);
  v7 = a2 - 1;
  if ( a2 )
  {
    v8 = 1;
    do
    {
      result = (char *)*((_DWORD *)a1 + 1);
      v9 = *(_DWORD *)a1 + v7--;
      result[v9] = v8;
      v8 = 0;
    }
    while ( v7 != -1 );
  }
  *((_DWORD *)a1 + 1) += a2;
  return result;
}
