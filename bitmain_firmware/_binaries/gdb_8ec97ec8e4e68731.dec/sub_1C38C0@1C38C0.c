int __fastcall sub_1C38C0(int *a1, int a2)
{
  int v2; // r1
  char *v3; // r3
  char v4; // t1
  int v6[3]; // [sp+0h] [bp-14h] BYREF
  char v7; // [sp+Fh] [bp-5h] BYREF

  v2 = a2 - 1;
  v3 = (char *)&v6[-1] + 3;
  do
  {
    v4 = *(_BYTE *)++v2;
    *++v3 = v4;
  }
  while ( v3 != &v7 );
  return sub_1C2F50(a1, v6);
}
