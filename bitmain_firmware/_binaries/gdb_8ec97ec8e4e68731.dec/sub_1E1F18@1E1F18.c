int __fastcall sub_1E1F18(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // r4
  int v2; // r0
  char v3; // r5
  char v4; // r0
  _BYTE v6[8]; // [sp+4h] [bp-8h] BYREF

  v1 = a1;
  v2 = *a1;
  if ( !v2 || !v1[1] )
    return sub_25680C(dword_487A6C);
  do
  {
    v3 = sub_990E4(v2);
    v4 = sub_990E4(v1[1]);
    v6[1] = 0;
    v6[0] = v4 + 16 * v3;
    v1 += 2;
    sub_256850(v6, dword_487A6C);
    v2 = *v1;
  }
  while ( *v1 && v1[1] );
  return sub_25680C(dword_487A6C);
}
