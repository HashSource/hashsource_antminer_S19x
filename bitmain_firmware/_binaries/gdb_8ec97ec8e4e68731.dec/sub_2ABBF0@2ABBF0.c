int __fastcall sub_2ABBF0(int a1, char *a2, _DWORD *a3)
{
  int v3; // r12
  int result; // r0
  char *v5; // lr
  char v6; // t1

  v3 = 0;
  result = 0;
  v5 = a2;
  do
  {
    v6 = *v5++;
    result |= (v6 & 0x7F) << v3;
    v3 += 7;
  }
  while ( v6 < 0 );
  *a3 = v5 - a2;
  return result;
}
