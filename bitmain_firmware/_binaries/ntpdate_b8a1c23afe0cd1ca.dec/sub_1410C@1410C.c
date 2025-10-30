int __fastcall sub_1410C(_DWORD *a1)
{
  int v1; // r3
  int v2; // r2

  if ( !a1 || *a1 != 1114990113 )
    sub_1073C();
  v1 = a1[4];
  if ( a1[3] == v1 )
    sub_1073C();
  v2 = a1[1];
  a1[4] = v1 + 1;
  return *(unsigned __int8 *)(v2 + v1);
}
