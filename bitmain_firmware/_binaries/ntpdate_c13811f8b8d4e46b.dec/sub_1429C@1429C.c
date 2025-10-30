int __fastcall sub_1429C(_DWORD *a1)
{
  int v1; // r2
  int v2; // lr

  if ( !a1 || *a1 != 1114990113 )
    sub_1073C();
  v1 = a1[4];
  if ( (unsigned int)(a1[3] - v1) <= 1 )
    sub_1073C();
  v2 = a1[1];
  a1[4] = v1 + 2;
  return (unsigned __int16)__rev16(*(unsigned __int16 *)(v2 + v1));
}
