int __fastcall sub_2977D8(int *a1)
{
  int v1; // r4
  bool v2; // zf
  int v3; // lr
  int v4; // r12
  int result; // r0

  v1 = *a1;
  v2 = (a1[4] & 1) == 0;
  v3 = a1[3];
  v4 = a1[1];
  result = a1[2];
  dword_48BB28 = v1;
  dword_48BB2C = v3;
  dword_490164 = v4;
  dword_490158 = result;
  if ( !v2 )
    dword_48BB30 = 1;
  return result;
}
